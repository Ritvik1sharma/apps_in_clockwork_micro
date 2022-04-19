#include <fstream>
#include <mc_scverify.h>
#include "gaussian.h"

CCS_MAIN(int argc, char *argv[]) {
  srand(234);
  ofstream fout("regression_result_gaussian.txt");
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_0;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_1;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_10;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_11;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_12;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_13;
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
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_9;
/////////////////// # 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_glb_stencil_clkwrk_14;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_glb_stencil_clkwrk_15;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_glb_stencil_clkwrk_16;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_glb_stencil_clkwrk_17;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_glb_stencil_clkwrk_18;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_glb_stencil_clkwrk_19;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_glb_stencil_clkwrk_20;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_glb_stencil_clkwrk_21;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_glb_stencil_clkwrk_22;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_glb_stencil_clkwrk_23;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_glb_stencil_clkwrk_24;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_glb_stencil_clkwrk_25;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_glb_stencil_clkwrk_26;
/////////////////// 1
  HWStream<hw_uint<16 > > hw_output_global_wrapper_glb_stencil_clkwrk_27;
/////////////////// 1


  // Loading input data
  srand(1);
  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_0[hw_input_global_wrapper_s0_y, 14hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // read map: { hw_input_stencil_clkwrk_0[i0, i1] -> op_hcompute_hw_input_global_wrapper_glb_stencil[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 14hw_input_global_wrapper_s0_x_x = i1 and 0 <= i0 <= 62 and 0 <= i1 <= 56 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // rng card: { 315 }
  for (int i = 0; i < 315; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_0.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_1[hw_input_global_wrapper_s0_y, 1 + 14hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // read map: { hw_input_stencil_clkwrk_1[i0, i1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_1[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 14hw_input_global_wrapper_s0_x_x = -1 + i1 and 0 <= i0 <= 62 and 0 < i1 <= 57 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // rng card: { 315 }
  for (int i = 0; i < 315; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_1.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_10[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_10[hw_input_global_wrapper_s0_y, 10 + 14hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // read map: { hw_input_stencil_clkwrk_10[i0, i1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_10[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 14hw_input_global_wrapper_s0_x_x = -10 + i1 and 0 <= i0 <= 62 and 10 <= i1 <= 66 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_10[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // rng card: { 315 }
  for (int i = 0; i < 315; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_10.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_11[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_11[hw_input_global_wrapper_s0_y, 11 + 14hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // read map: { hw_input_stencil_clkwrk_11[i0, i1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_11[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 14hw_input_global_wrapper_s0_x_x = -11 + i1 and 0 <= i0 <= 62 and 11 <= i1 <= 67 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_11[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // rng card: { 315 }
  for (int i = 0; i < 315; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_11.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_12[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_12[hw_input_global_wrapper_s0_y, 12 + 14hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // read map: { hw_input_stencil_clkwrk_12[i0, i1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_12[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 14hw_input_global_wrapper_s0_x_x = -12 + i1 and 0 <= i0 <= 62 and 12 <= i1 <= 68 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_12[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // rng card: { 315 }
  for (int i = 0; i < 315; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_12.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_13[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_13[hw_input_global_wrapper_s0_y, 13 + 14hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // read map: { hw_input_stencil_clkwrk_13[i0, i1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_13[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 14hw_input_global_wrapper_s0_x_x = -13 + i1 and 0 <= i0 <= 62 and 13 <= i1 <= 69 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_13[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // rng card: { 315 }
  for (int i = 0; i < 315; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_13.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_2[hw_input_global_wrapper_s0_y, 2 + 14hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // read map: { hw_input_stencil_clkwrk_2[i0, i1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_2[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 14hw_input_global_wrapper_s0_x_x = -2 + i1 and 0 <= i0 <= 62 and 2 <= i1 <= 58 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // rng card: { 315 }
  for (int i = 0; i < 315; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_2.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_3[hw_input_global_wrapper_s0_y, 3 + 14hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // read map: { hw_input_stencil_clkwrk_3[i0, i1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_3[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 14hw_input_global_wrapper_s0_x_x = -3 + i1 and 0 <= i0 <= 62 and 3 <= i1 <= 59 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // rng card: { 315 }
  for (int i = 0; i < 315; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_3.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_4[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_4[hw_input_global_wrapper_s0_y, 4 + 14hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // read map: { hw_input_stencil_clkwrk_4[i0, i1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_4[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 14hw_input_global_wrapper_s0_x_x = -4 + i1 and 0 <= i0 <= 62 and 4 <= i1 <= 60 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_4[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // rng card: { 315 }
  for (int i = 0; i < 315; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_4.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_5[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_5[hw_input_global_wrapper_s0_y, 5 + 14hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // read map: { hw_input_stencil_clkwrk_5[i0, i1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_5[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 14hw_input_global_wrapper_s0_x_x = -5 + i1 and 0 <= i0 <= 62 and 5 <= i1 <= 61 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_5[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // rng card: { 315 }
  for (int i = 0; i < 315; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_5.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_6[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_6[hw_input_global_wrapper_s0_y, 6 + 14hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // read map: { hw_input_stencil_clkwrk_6[i0, i1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_6[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 14hw_input_global_wrapper_s0_x_x = -6 + i1 and 0 <= i0 <= 62 and 6 <= i1 <= 62 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_6[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // rng card: { 315 }
  for (int i = 0; i < 315; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_6.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_7[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_7[hw_input_global_wrapper_s0_y, 7 + 14hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // read map: { hw_input_stencil_clkwrk_7[i0, i1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_7[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 14hw_input_global_wrapper_s0_x_x = -7 + i1 and 0 <= i0 <= 62 and 7 <= i1 <= 63 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_7[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // rng card: { 315 }
  for (int i = 0; i < 315; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_7.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_8[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_8[hw_input_global_wrapper_s0_y, 8 + 14hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // read map: { hw_input_stencil_clkwrk_8[i0, i1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_8[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 14hw_input_global_wrapper_s0_x_x = -8 + i1 and 0 <= i0 <= 62 and 8 <= i1 <= 64 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_8[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // rng card: { 315 }
  for (int i = 0; i < 315; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_8.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_glb_stencil_9[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_9[hw_input_global_wrapper_s0_y, 9 + 14hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // read map: { hw_input_stencil_clkwrk_9[i0, i1] -> op_hcompute_hw_input_global_wrapper_glb_stencil_9[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x_x] : 14hw_input_global_wrapper_s0_x_x = -9 + i1 and 0 <= i0 <= 62 and 9 <= i1 <= 65 }
  // rng     : { op_hcompute_hw_input_global_wrapper_glb_stencil_9[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 62 and 0 <= hw_input_global_wrapper_s0_x_x <= 4 }
  // rng card: { 315 }
  for (int i = 0; i < 315; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_9.write(value);
  }

  CCS_DESIGN(gaussian)(hw_input_stencil_clkwrk_0, hw_input_stencil_clkwrk_1, hw_input_stencil_clkwrk_10, hw_input_stencil_clkwrk_11, hw_input_stencil_clkwrk_12, hw_input_stencil_clkwrk_13, hw_input_stencil_clkwrk_2, hw_input_stencil_clkwrk_3, hw_input_stencil_clkwrk_4, hw_input_stencil_clkwrk_5, hw_input_stencil_clkwrk_6, hw_input_stencil_clkwrk_7, hw_input_stencil_clkwrk_8, hw_input_stencil_clkwrk_9, hw_output_global_wrapper_glb_stencil_clkwrk_14, hw_output_global_wrapper_glb_stencil_clkwrk_15, hw_output_global_wrapper_glb_stencil_clkwrk_16, hw_output_global_wrapper_glb_stencil_clkwrk_17, hw_output_global_wrapper_glb_stencil_clkwrk_18, hw_output_global_wrapper_glb_stencil_clkwrk_19, hw_output_global_wrapper_glb_stencil_clkwrk_20, hw_output_global_wrapper_glb_stencil_clkwrk_21, hw_output_global_wrapper_glb_stencil_clkwrk_22, hw_output_global_wrapper_glb_stencil_clkwrk_23, hw_output_global_wrapper_glb_stencil_clkwrk_24, hw_output_global_wrapper_glb_stencil_clkwrk_25, hw_output_global_wrapper_glb_stencil_clkwrk_26, hw_output_global_wrapper_glb_stencil_clkwrk_27);
  for (int i = 0; i < 248; i++) {
    auto actual = hw_output_global_wrapper_glb_stencil_clkwrk_14.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 248; i++) {
    auto actual = hw_output_global_wrapper_glb_stencil_clkwrk_15.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 248; i++) {
    auto actual = hw_output_global_wrapper_glb_stencil_clkwrk_16.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 248; i++) {
    auto actual = hw_output_global_wrapper_glb_stencil_clkwrk_17.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 248; i++) {
    auto actual = hw_output_global_wrapper_glb_stencil_clkwrk_18.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 248; i++) {
    auto actual = hw_output_global_wrapper_glb_stencil_clkwrk_19.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 248; i++) {
    auto actual = hw_output_global_wrapper_glb_stencil_clkwrk_20.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 248; i++) {
    auto actual = hw_output_global_wrapper_glb_stencil_clkwrk_21.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 248; i++) {
    auto actual = hw_output_global_wrapper_glb_stencil_clkwrk_22.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 248; i++) {
    auto actual = hw_output_global_wrapper_glb_stencil_clkwrk_23.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 248; i++) {
    auto actual = hw_output_global_wrapper_glb_stencil_clkwrk_24.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 248; i++) {
    auto actual = hw_output_global_wrapper_glb_stencil_clkwrk_25.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 248; i++) {
    auto actual = hw_output_global_wrapper_glb_stencil_clkwrk_26.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 248; i++) {
    auto actual = hw_output_global_wrapper_glb_stencil_clkwrk_27.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  assert(hw_input_stencil_clkwrk_0.is_empty());
  assert(hw_input_stencil_clkwrk_1.is_empty());
  assert(hw_input_stencil_clkwrk_10.is_empty());
  assert(hw_input_stencil_clkwrk_11.is_empty());
  assert(hw_input_stencil_clkwrk_12.is_empty());
  assert(hw_input_stencil_clkwrk_13.is_empty());
  assert(hw_input_stencil_clkwrk_2.is_empty());
  assert(hw_input_stencil_clkwrk_3.is_empty());
  assert(hw_input_stencil_clkwrk_4.is_empty());
  assert(hw_input_stencil_clkwrk_5.is_empty());
  assert(hw_input_stencil_clkwrk_6.is_empty());
  assert(hw_input_stencil_clkwrk_7.is_empty());
  assert(hw_input_stencil_clkwrk_8.is_empty());
  assert(hw_input_stencil_clkwrk_9.is_empty());
  assert(hw_output_global_wrapper_glb_stencil_clkwrk_14.is_empty());
  assert(hw_output_global_wrapper_glb_stencil_clkwrk_15.is_empty());
  assert(hw_output_global_wrapper_glb_stencil_clkwrk_16.is_empty());
  assert(hw_output_global_wrapper_glb_stencil_clkwrk_17.is_empty());
  assert(hw_output_global_wrapper_glb_stencil_clkwrk_18.is_empty());
  assert(hw_output_global_wrapper_glb_stencil_clkwrk_19.is_empty());
  assert(hw_output_global_wrapper_glb_stencil_clkwrk_20.is_empty());
  assert(hw_output_global_wrapper_glb_stencil_clkwrk_21.is_empty());
  assert(hw_output_global_wrapper_glb_stencil_clkwrk_22.is_empty());
  assert(hw_output_global_wrapper_glb_stencil_clkwrk_23.is_empty());
  assert(hw_output_global_wrapper_glb_stencil_clkwrk_24.is_empty());
  assert(hw_output_global_wrapper_glb_stencil_clkwrk_25.is_empty());
  assert(hw_output_global_wrapper_glb_stencil_clkwrk_26.is_empty());
  assert(hw_output_global_wrapper_glb_stencil_clkwrk_27.is_empty());
  CCS_RETURN(0);
}
