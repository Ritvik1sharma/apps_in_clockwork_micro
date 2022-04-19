#include "mpfr.h"

#include <array>
#include <fstream>


#include "camera_pipeline_2x2_glb1.h"
#include "hw_input_stencil_script.h"

int main() {
  ofstream fout("regression_result_camera_pipeline_2x2_glb1.txt");
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_0;
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_1;
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_2;
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_3;
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_10;
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_11;
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_12;
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_13;
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_14;
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_15;
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_4;
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_5;
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_6;
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_7;
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_8;
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_9;

  const unsigned kUnrollFactor{4};

  /* Load input data */
  for (int i = 0; i < app_input_data_size; i += kUnrollFactor) {
    // Create temporary HW values
    std::array<hw_uint<16>, kUnrollFactor> values;

    // Copy input data to temporary HW values
    for (int j = 0; j < kUnrollFactor; j++) {
      set_at<0, 16, 16>(values[j], app_input_data[i + j]);
    }
    
    // Write temporary HW values to input stencils 
    hw_input_stencil_clkwrk_0.write(values[0]);
    hw_input_stencil_clkwrk_1.write(values[1]);
    hw_input_stencil_clkwrk_2.write(values[2]);
    hw_input_stencil_clkwrk_3.write(values[3]);
  }

  camera_pipeline_2x2_glb1(hw_input_stencil_clkwrk_0, hw_input_stencil_clkwrk_1, hw_input_stencil_clkwrk_2, hw_input_stencil_clkwrk_3, hw_output_global_wrapper_stencil_clkwrk_10, hw_output_global_wrapper_stencil_clkwrk_11, hw_output_global_wrapper_stencil_clkwrk_12, hw_output_global_wrapper_stencil_clkwrk_13, hw_output_global_wrapper_stencil_clkwrk_14, hw_output_global_wrapper_stencil_clkwrk_15, hw_output_global_wrapper_stencil_clkwrk_4, hw_output_global_wrapper_stencil_clkwrk_5, hw_output_global_wrapper_stencil_clkwrk_6, hw_output_global_wrapper_stencil_clkwrk_7, hw_output_global_wrapper_stencil_clkwrk_8, hw_output_global_wrapper_stencil_clkwrk_9);
  for (int i = 0; i < 768; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_10.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 768; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_11.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 768; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_12.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 768; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_13.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 768; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_14.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 768; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_15.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 768; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_4.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 768; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_5.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 768; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_6.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 768; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_7.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 768; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_8.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 768; i++) {
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
  return 0;
}
