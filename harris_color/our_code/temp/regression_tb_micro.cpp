#include "mpfr.h"

#include <array>
#include <fstream>

#include "hw_input_stencil_script.h"
#include "harris_color.h"

CCS_MAIN() {
  ofstream fout("regression_result_harris_color_glb2.txt");
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_0;
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_1;
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_2;
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_3;
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_4;
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_5;
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_6;
  HWStream<hw_uint<16 > > hw_output_global_wrapper_stencil_clkwrk_7;

  const unsigned kUnrollFactor{6};

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
    hw_input_stencil_clkwrk_4.write(values[4]);
    hw_input_stencil_clkwrk_5.write(values[5]);
  }

  CCS_DESIGN(harris_color)(hw_input_stencil_clkwrk_0, hw_input_stencil_clkwrk_1, hw_input_stencil_clkwrk_2, hw_input_stencil_clkwrk_3, hw_input_stencil_clkwrk_4, hw_input_stencil_clkwrk_5, hw_output_global_wrapper_stencil_clkwrk_6, hw_output_global_wrapper_stencil_clkwrk_7);
  for (int i = 0; i < 2178; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_6.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 2178; i++) {
    auto actual = hw_output_global_wrapper_stencil_clkwrk_7.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  assert(hw_input_stencil_clkwrk_0.is_empty());
  assert(hw_input_stencil_clkwrk_1.is_empty());
  assert(hw_input_stencil_clkwrk_2.is_empty());
  assert(hw_input_stencil_clkwrk_3.is_empty());
  assert(hw_input_stencil_clkwrk_4.is_empty());
  assert(hw_input_stencil_clkwrk_5.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_6.is_empty());
  assert(hw_output_global_wrapper_stencil_clkwrk_7.is_empty());
  CCS_RETURN(0);
}
