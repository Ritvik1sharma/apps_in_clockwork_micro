#include <fstream>
#include <mc_scverify.h>
#include "unsharp.h"

CCS_MAIN(int argc, char *argv[]) {
  srand(234);
  ofstream fout("regression_result_unsharp.txt");
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_0;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_1;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_2;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_3;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_4;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_5;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_6;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_7;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_8;
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
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_16;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_17;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_9;
/////////////////// 1


  // Loading input data
  srand(1);
  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_0[hw_input_global_wrapper_s0_y, -3 + 3hw_input_global_wrapper_s0_x_x, 0] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
  // read map: { hw_input_stencil_clkwrk_0[i0, i1, 0] -> op_hcompute_hw_input_global_wrapper_glb_stencil[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 3hw_input_global_wrapper_s0_x_x = 3 + i1 and -3 <= i0 <= 68 and -3 <= i1 <= 66 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
  // rng card: { 1728 }
  for (int i = 0; i < 1728; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_0.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_1[hw_input_global_wrapper_s0_y, -3 + 3hw_input_global_wrapper_s0_x_x, 1] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
  // read map: { hw_input_stencil_clkwrk_1[i0, i1, 1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_1[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 3hw_input_global_wrapper_s0_x_x = 3 + i1 and -3 <= i0 <= 68 and -3 <= i1 <= 66 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
  // rng card: { 1728 }
  for (int i = 0; i < 1728; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_1.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_2[hw_input_global_wrapper_s0_y, -3 + 3hw_input_global_wrapper_s0_x_x, 2] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
  // read map: { hw_input_stencil_clkwrk_2[i0, i1, 2] -> op_hcompute_hw_input_global_wrapper_glb_stencil_2[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 3hw_input_global_wrapper_s0_x_x = 3 + i1 and -3 <= i0 <= 68 and -3 <= i1 <= 66 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
  // rng card: { 1728 }
  for (int i = 0; i < 1728; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_2.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_3[hw_input_global_wrapper_s0_y, -2 + 3hw_input_global_wrapper_s0_x_x, 0] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
  // read map: { hw_input_stencil_clkwrk_3[i0, i1, 0] -> op_hcompute_hw_input_global_wrapper_glb_stencil_3[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 3hw_input_global_wrapper_s0_x_x = 2 + i1 and -3 <= i0 <= 68 and -2 <= i1 <= 67 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
  // rng card: { 1728 }
  for (int i = 0; i < 1728; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_3.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_4[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_4[hw_input_global_wrapper_s0_y, -2 + 3hw_input_global_wrapper_s0_x_x, 1] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
  // read map: { hw_input_stencil_clkwrk_4[i0, i1, 1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_4[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 3hw_input_global_wrapper_s0_x_x = 2 + i1 and -3 <= i0 <= 68 and -2 <= i1 <= 67 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_4[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
  // rng card: { 1728 }
  for (int i = 0; i < 1728; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_4.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_5[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_5[hw_input_global_wrapper_s0_y, -2 + 3hw_input_global_wrapper_s0_x_x, 2] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
  // read map: { hw_input_stencil_clkwrk_5[i0, i1, 2] -> op_hcompute_hw_input_global_wrapper_glb_stencil_5[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 3hw_input_global_wrapper_s0_x_x = 2 + i1 and -3 <= i0 <= 68 and -2 <= i1 <= 67 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_5[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
  // rng card: { 1728 }
  for (int i = 0; i < 1728; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_5.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_6[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_6[hw_input_global_wrapper_s0_y, -1 + 3hw_input_global_wrapper_s0_x_x, 0] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
  // read map: { hw_input_stencil_clkwrk_6[i0, i1, 0] -> op_hcompute_hw_input_global_wrapper_glb_stencil_6[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 3hw_input_global_wrapper_s0_x_x = 1 + i1 and -3 <= i0 <= 68 and -1 <= i1 <= 68 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_6[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
  // rng card: { 1728 }
  for (int i = 0; i < 1728; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_6.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_7[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_7[hw_input_global_wrapper_s0_y, -1 + 3hw_input_global_wrapper_s0_x_x, 1] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
  // read map: { hw_input_stencil_clkwrk_7[i0, i1, 1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_7[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 3hw_input_global_wrapper_s0_x_x = 1 + i1 and -3 <= i0 <= 68 and -1 <= i1 <= 68 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_7[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
  // rng card: { 1728 }
  for (int i = 0; i < 1728; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_7.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_8[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_8[hw_input_global_wrapper_s0_y, -1 + 3hw_input_global_wrapper_s0_x_x, 2] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
  // read map: { hw_input_stencil_clkwrk_8[i0, i1, 2] -> op_hcompute_hw_input_global_wrapper_glb_stencil_8[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 3hw_input_global_wrapper_s0_x_x = 1 + i1 and -3 <= i0 <= 68 and -1 <= i1 <= 68 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_8[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
  // rng card: { 1728 }
  for (int i = 0; i < 1728; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_8.write(value);
  }

  CCS_DESIGN(unsharp)(hw_input_stencil_clkwrk_0, hw_input_stencil_clkwrk_1, hw_input_stencil_clkwrk_2, hw_input_stencil_clkwrk_3, hw_input_stencil_clkwrk_4, hw_input_stencil_clkwrk_5, hw_input_stencil_clkwrk_6, hw_input_stencil_clkwrk_7, hw_input_stencil_clkwrk_8, hw_output_global_wrapper_stencil_clkwrk_10, hw_output_global_wrapper_stencil_clkwrk_11, hw_output_global_wrapper_stencil_clkwrk_12, hw_output_global_wrapper_stencil_clkwrk_13, hw_output_global_wrapper_stencil_clkwrk_14, hw_output_global_wrapper_stencil_clkwrk_15, hw_output_global_wrapper_stencil_clkwrk_16, hw_output_global_wrapper_stencil_clkwrk_17, hw_output_global_wrapper_stencil_clkwrk_9);
  for (int i = 0; i < 1452; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_10.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 1452; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_11.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 1452; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_12.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 1452; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_13.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 1452; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_14.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 1452; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_15.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 1452; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_16.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 1452; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_17.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 1452; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_9.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  assert(hw_input_stencil_clkwrk_0.is_empty());
  assert(hw_input_stencil_clkwrk_1.is_empty());
  assert(hw_input_stencil_clkwrk_2.is_empty());
  assert(hw_input_stencil_clkwrk_3.is_empty());
  assert(hw_input_stencil_clkwrk_4.is_empty());
  assert(hw_input_stencil_clkwrk_5.is_empty());
  assert(hw_input_stencil_clkwrk_6.is_empty());
  assert(hw_input_stencil_clkwrk_7.is_empty());
  assert(hw_input_stencil_clkwrk_8.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_10.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_11.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_12.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_13.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_14.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_15.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_16.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_17.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_9.is_empty());
  CCS_RETURN(0);
}
