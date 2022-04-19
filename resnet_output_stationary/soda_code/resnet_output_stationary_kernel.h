#include "ap_int.h"

extern "C" {

void resnet_output_stationary_kernel(ap_uint<16>* hw_output_stencil, ap_uint<16>* input_host_stencil, ap_uint<16>* kernel_host_stencil, uint64_t coalesced_data_num);
}
