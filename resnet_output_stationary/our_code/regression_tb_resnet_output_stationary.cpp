#include <fstream>
#include <mc_scverify.h>
#include "resnet_output_stationary.h"

CCS_MAIN(int argc, char *argv[]) {
  srand(234);
  ofstream fout("regression_result_resnet_output_stationary.txt");
  HWStream<hw_uint<16 > > input_host_stencil;
/////////////////// # 1
  HWStream<hw_uint<16 > > kernel_host_stencil;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_output_stencil;
/////////////////// 1


  // Loading input data
  srand(1);
  // cmap    : { op_hcompute_input_glb_stencil[root = 0, input_glb_s0_y, input_glb_s0_x, input_glb_s0_z_z] -> input_host_stencil[input_glb_s0_y, input_glb_s0_x, input_glb_s0_z_z] : 0 <= input_glb_s0_y <= 8 and 0 <= input_glb_s0_x <= 8 and 0 <= input_glb_s0_z_z <= 15 }
  // read map: { input_host_stencil[i0, i1, i2] -> op_hcompute_input_glb_stencil[root = 0, input_glb_s0_y = i0, input_glb_s0_x = i1, input_glb_s0_z_z = i2] : 0 <= i0 <= 8 and 0 <= i1 <= 8 and 0 <= i2 <= 15 }
  // rng     : { op_hcompute_input_glb_stencil[root = 0, input_glb_s0_y, input_glb_s0_x, input_glb_s0_z_z] : 0 <= input_glb_s0_y <= 8 and 0 <= input_glb_s0_x <= 8 and 0 <= input_glb_s0_z_z <= 15 }
  // rng card: { 1296 }
  for (int i = 0; i < 1296; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    input_host_stencil.write(value);
  }

  // cmap    : { op_hcompute_kernel_glb_stencil[root = 0, kernel_glb_s0_y, kernel_glb_s0_x, kernel_glb_s0_w, kernel_glb_s0_z_z] -> kernel_host_stencil[kernel_glb_s0_y, kernel_glb_s0_x, kernel_glb_s0_w, kernel_glb_s0_z_z] : 0 <= kernel_glb_s0_y <= 2 and 0 <= kernel_glb_s0_x <= 2 and 0 <= kernel_glb_s0_w <= 15 and 0 <= kernel_glb_s0_z_z <= 15 }
  // read map: { kernel_host_stencil[i0, i1, i2, i3] -> op_hcompute_kernel_glb_stencil[root = 0, kernel_glb_s0_y = i0, kernel_glb_s0_x = i1, kernel_glb_s0_w = i2, kernel_glb_s0_z_z = i3] : 0 <= i0 <= 2 and 0 <= i1 <= 2 and 0 <= i2 <= 15 and 0 <= i3 <= 15 }
  // rng     : { op_hcompute_kernel_glb_stencil[root = 0, kernel_glb_s0_y, kernel_glb_s0_x, kernel_glb_s0_w, kernel_glb_s0_z_z] : 0 <= kernel_glb_s0_y <= 2 and 0 <= kernel_glb_s0_x <= 2 and 0 <= kernel_glb_s0_w <= 15 and 0 <= kernel_glb_s0_z_z <= 15 }
  // rng card: { 2304 }
  for (int i = 0; i < 2304; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    kernel_host_stencil.write(value);
  }

  CCS_DESIGN(resnet_output_stationary)(input_host_stencil, kernel_host_stencil, hw_output_stencil);
  for (int i = 0; i < 784; i++) {
    auto actual = hw_output_stencil.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  assert(input_host_stencil.is_empty());
  assert(kernel_host_stencil.is_empty());
  assert(hw_output_stencil.is_empty());
  CCS_RETURN(0);
}
