#include <fstream>
#include <mc_scverify.h>
#include "camera_pipeline_2x2.h"

CCS_MAIN(int argc, char *argv[]) {
  srand(234);
  ofstream fout("regression_result_camera_pipeline_2x2.txt");
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_0;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_1;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_2;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_3;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_10;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_11;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_12;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_13;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_14;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_15;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_4;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_5;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_6;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_7;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_8;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_9;
/////////////////// 1


  // Loading input data
  srand(1);
  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil[root = 0, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_0[-4 + 2hw_input_global_wrapper_s0_y_yio, -4 + 2hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_s0_x_x <= 131 }
  // read map: { hw_input_stencil_clkwrk_0[i0, i1] -> op_hcompute_hw_input_global_wrapper_glb_stencil[root = 0, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x] : 2hw_input_global_wrapper_s0_y_yio = 4 + i0 and 2hw_input_global_wrapper_s0_x_x = 4 + i1 and -4 <= i0 <= 194 and -4 <= i1 <= 258 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil[root = 0, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_s0_x_x <= 131 }
  // rng card: { 13200 }
  for (int i = 0; i < 13200; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_0.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_1[root = 0, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_1[-3 + 2hw_input_global_wrapper_s0_y_yio, -4 + 2hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_s0_x_x <= 131 }
  // read map: { hw_input_stencil_clkwrk_1[i0, i1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_1[root = 0, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x] : 2hw_input_global_wrapper_s0_y_yio = 3 + i0 and 2hw_input_global_wrapper_s0_x_x = 4 + i1 and -3 <= i0 <= 195 and -4 <= i1 <= 258 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_1[root = 0, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_s0_x_x <= 131 }
  // rng card: { 13200 }
  for (int i = 0; i < 13200; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_1.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_2[root = 0, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_2[-4 + 2hw_input_global_wrapper_s0_y_yio, -3 + 2hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_s0_x_x <= 131 }
  // read map: { hw_input_stencil_clkwrk_2[i0, i1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_2[root = 0, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x] : 2hw_input_global_wrapper_s0_y_yio = 4 + i0 and 2hw_input_global_wrapper_s0_x_x = 3 + i1 and -4 <= i0 <= 194 and -3 <= i1 <= 259 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_2[root = 0, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_s0_x_x <= 131 }
  // rng card: { 13200 }
  for (int i = 0; i < 13200; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_2.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_3[root = 0, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_3[-3 + 2hw_input_global_wrapper_s0_y_yio, -3 + 2hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_s0_x_x <= 131 }
  // read map: { hw_input_stencil_clkwrk_3[i0, i1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_3[root = 0, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x] : 2hw_input_global_wrapper_s0_y_yio = 3 + i0 and 2hw_input_global_wrapper_s0_x_x = 3 + i1 and -3 <= i0 <= 195 and -3 <= i1 <= 259 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_3[root = 0, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_s0_x_x <= 131 }
  // rng card: { 13200 }
  for (int i = 0; i < 13200; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_3.write(value);
  }

  CCS_DESIGN(camera_pipeline_2x2)(hw_input_stencil_clkwrk_0, hw_input_stencil_clkwrk_1, hw_input_stencil_clkwrk_2, hw_input_stencil_clkwrk_3, hw_output_global_wrapper_stencil_clkwrk_10, hw_output_global_wrapper_stencil_clkwrk_11, hw_output_global_wrapper_stencil_clkwrk_12, hw_output_global_wrapper_stencil_clkwrk_13, hw_output_global_wrapper_stencil_clkwrk_14, hw_output_global_wrapper_stencil_clkwrk_15, hw_output_global_wrapper_stencil_clkwrk_4, hw_output_global_wrapper_stencil_clkwrk_5, hw_output_global_wrapper_stencil_clkwrk_6, hw_output_global_wrapper_stencil_clkwrk_7, hw_output_global_wrapper_stencil_clkwrk_8, hw_output_global_wrapper_stencil_clkwrk_9);
  for (int i = 0; i < 12288; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_10.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 12288; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_11.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 12288; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_12.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 12288; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_13.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 12288; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_14.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 12288; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_15.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 12288; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_4.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 12288; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_5.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 12288; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_6.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 12288; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_7.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 12288; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_8.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 12288; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_9.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  assert(hw_input_stencil_clkwrk_0.is_empty());
  assert(hw_input_stencil_clkwrk_1.is_empty());
  assert(hw_input_stencil_clkwrk_2.is_empty());
  assert(hw_input_stencil_clkwrk_3.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_10.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_11.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_12.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_13.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_14.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_15.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_4.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_5.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_6.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_7.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_8.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_9.is_empty());
  CCS_RETURN(0);
}
