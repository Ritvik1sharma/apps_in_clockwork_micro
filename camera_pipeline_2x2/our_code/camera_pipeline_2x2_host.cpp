#include "xcl2.hpp"
#include <algorithm>
#include <fstream>
#include <vector>
#include <cstdlib>

#include "clockwork_standard_compute_units.h"

#define __POPULATE_HOST_INPUTS__

int main(int argc, char **argv) {
  srand(234);
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <XCLBIN File>" << std::endl;
    return EXIT_FAILURE;
  }

  std::string binaryFile = argv[1];

  int num_epochs = 1;

  std::cout << "num_epochs = " << num_epochs << std::endl;

  size_t total_size_bytes = 0;
  const int op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_DATA_SIZE = num_epochs*13200;
  const int op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_BYTES_PER_PIXEL = 16 / 8;
  size_t op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_size_bytes = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_BYTES_PER_PIXEL * op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_DATA_SIZE;

  total_size_bytes += op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_size_bytes;
  const int op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_DATA_SIZE = num_epochs*13200;
  const int op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_BYTES_PER_PIXEL = 16 / 8;
  size_t op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_size_bytes = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_BYTES_PER_PIXEL * op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_DATA_SIZE;

  total_size_bytes += op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_size_bytes;
  const int op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_DATA_SIZE = num_epochs*13200;
  const int op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_BYTES_PER_PIXEL = 16 / 8;
  size_t op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_size_bytes = op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_BYTES_PER_PIXEL * op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_DATA_SIZE;

  total_size_bytes += op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_size_bytes;
  const int op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_DATA_SIZE = num_epochs*13200;
  const int op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_BYTES_PER_PIXEL = 16 / 8;
  size_t op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_size_bytes = op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_BYTES_PER_PIXEL * op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_DATA_SIZE;

  total_size_bytes += op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_size_bytes;
  const int op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_DATA_SIZE = num_epochs*12288;
  const int op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_BYTES_PER_PIXEL = 16 / 8;
  size_t op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_size_bytes = op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_BYTES_PER_PIXEL * op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_DATA_SIZE;

  total_size_bytes += op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_size_bytes;
  const int op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_DATA_SIZE = num_epochs*12288;
  const int op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_BYTES_PER_PIXEL = 16 / 8;
  size_t op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_size_bytes = op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_BYTES_PER_PIXEL * op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_DATA_SIZE;

  total_size_bytes += op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_size_bytes;
  const int op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_DATA_SIZE = num_epochs*12288;
  const int op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_BYTES_PER_PIXEL = 16 / 8;
  size_t op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_size_bytes = op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_BYTES_PER_PIXEL * op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_DATA_SIZE;

  total_size_bytes += op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_size_bytes;
  const int op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_DATA_SIZE = num_epochs*12288;
  const int op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_BYTES_PER_PIXEL = 16 / 8;
  size_t op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_size_bytes = op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_BYTES_PER_PIXEL * op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_DATA_SIZE;

  total_size_bytes += op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_size_bytes;
  const int op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_DATA_SIZE = num_epochs*12288;
  const int op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_BYTES_PER_PIXEL = 16 / 8;
  size_t op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_size_bytes = op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_BYTES_PER_PIXEL * op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_DATA_SIZE;

  total_size_bytes += op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_size_bytes;
  const int op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_DATA_SIZE = num_epochs*12288;
  const int op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_BYTES_PER_PIXEL = 16 / 8;
  size_t op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_size_bytes = op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_BYTES_PER_PIXEL * op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_DATA_SIZE;

  total_size_bytes += op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_size_bytes;
  const int op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_DATA_SIZE = num_epochs*12288;
  const int op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_BYTES_PER_PIXEL = 16 / 8;
  size_t op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_size_bytes = op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_BYTES_PER_PIXEL * op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_DATA_SIZE;

  total_size_bytes += op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_size_bytes;
  const int op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_DATA_SIZE = num_epochs*12288;
  const int op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_BYTES_PER_PIXEL = 16 / 8;
  size_t op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_size_bytes = op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_BYTES_PER_PIXEL * op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_DATA_SIZE;

  total_size_bytes += op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_size_bytes;
  const int op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_DATA_SIZE = num_epochs*12288;
  const int op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_BYTES_PER_PIXEL = 16 / 8;
  size_t op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_size_bytes = op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_BYTES_PER_PIXEL * op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_DATA_SIZE;

  total_size_bytes += op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_size_bytes;
  const int op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_DATA_SIZE = num_epochs*12288;
  const int op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_BYTES_PER_PIXEL = 16 / 8;
  size_t op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_size_bytes = op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_BYTES_PER_PIXEL * op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_DATA_SIZE;

  total_size_bytes += op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_size_bytes;
  const int op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_DATA_SIZE = num_epochs*12288;
  const int op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_BYTES_PER_PIXEL = 16 / 8;
  size_t op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_size_bytes = op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_BYTES_PER_PIXEL * op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_DATA_SIZE;

  total_size_bytes += op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_size_bytes;
  const int op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_DATA_SIZE = num_epochs*12288;
  const int op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_BYTES_PER_PIXEL = 16 / 8;
  size_t op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_size_bytes = op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_BYTES_PER_PIXEL * op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_DATA_SIZE;

  total_size_bytes += op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_size_bytes;

  cl_int err;
  cl::Context context;
  cl::Kernel krnl_vector_add;
  cl::CommandQueue q;

  std::vector<uint8_t, aligned_allocator<uint8_t> > op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0(op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0(op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0(op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0(op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0(op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0(op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0(op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0(op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0(op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0(op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0(op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0(op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0(op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0(op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > op_hcompute_hw_output_global_wrapper_stencil_write_pipe0(op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_size_bytes);

  // TODO: POPULATE BUFFERS FOR EACH PIPELINE
#ifdef __POPULATE_HOST_INPUTS__
  std::ofstream input_op_hcompute_hw_input_global_wrapper_glb_stencil_read("op_hcompute_hw_input_global_wrapper_glb_stencil_read.csv");
  for (int i = 0; i < op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_DATA_SIZE; i++) {
#ifdef __FLOAT_OUTPUT__
    float  val = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
#else // __FLOAT_OUTPUT__
    uint16_t val = (rand() % 256);
#endif // __FLOAT_OUTPUT__

#ifdef __FLOAT_OUTPUT__
    input_op_hcompute_hw_input_global_wrapper_glb_stencil_read << val << std::endl;
#else // __FLOAT_OUTPUT__
    input_op_hcompute_hw_input_global_wrapper_glb_stencil_read << val << std::endl;
#endif // __FLOAT_OUTPUT__

#ifdef __FLOAT_OUTPUT__
    ((uint16_t*) (op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0.data()))[i] = bitcast<uint16_t, float>(val);
#else // __FLOAT_OUTPUT__
    ((uint16_t*) (op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0.data()))[i] = val;
#endif // __FLOAT_OUTPUT__
  }

  input_op_hcompute_hw_input_global_wrapper_glb_stencil_read.close();
  std::ofstream input_op_hcompute_hw_input_global_wrapper_glb_stencil_1_read("op_hcompute_hw_input_global_wrapper_glb_stencil_1_read.csv");
  for (int i = 0; i < op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_DATA_SIZE; i++) {
#ifdef __FLOAT_OUTPUT__
    float  val = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
#else // __FLOAT_OUTPUT__
    uint16_t val = (rand() % 256);
#endif // __FLOAT_OUTPUT__

#ifdef __FLOAT_OUTPUT__
    input_op_hcompute_hw_input_global_wrapper_glb_stencil_1_read << val << std::endl;
#else // __FLOAT_OUTPUT__
    input_op_hcompute_hw_input_global_wrapper_glb_stencil_1_read << val << std::endl;
#endif // __FLOAT_OUTPUT__

#ifdef __FLOAT_OUTPUT__
    ((uint16_t*) (op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0.data()))[i] = bitcast<uint16_t, float>(val);
#else // __FLOAT_OUTPUT__
    ((uint16_t*) (op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0.data()))[i] = val;
#endif // __FLOAT_OUTPUT__
  }

  input_op_hcompute_hw_input_global_wrapper_glb_stencil_1_read.close();
  std::ofstream input_op_hcompute_hw_input_global_wrapper_glb_stencil_2_read("op_hcompute_hw_input_global_wrapper_glb_stencil_2_read.csv");
  for (int i = 0; i < op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_DATA_SIZE; i++) {
#ifdef __FLOAT_OUTPUT__
    float  val = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
#else // __FLOAT_OUTPUT__
    uint16_t val = (rand() % 256);
#endif // __FLOAT_OUTPUT__

#ifdef __FLOAT_OUTPUT__
    input_op_hcompute_hw_input_global_wrapper_glb_stencil_2_read << val << std::endl;
#else // __FLOAT_OUTPUT__
    input_op_hcompute_hw_input_global_wrapper_glb_stencil_2_read << val << std::endl;
#endif // __FLOAT_OUTPUT__

#ifdef __FLOAT_OUTPUT__
    ((uint16_t*) (op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0.data()))[i] = bitcast<uint16_t, float>(val);
#else // __FLOAT_OUTPUT__
    ((uint16_t*) (op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0.data()))[i] = val;
#endif // __FLOAT_OUTPUT__
  }

  input_op_hcompute_hw_input_global_wrapper_glb_stencil_2_read.close();
  std::ofstream input_op_hcompute_hw_input_global_wrapper_glb_stencil_3_read("op_hcompute_hw_input_global_wrapper_glb_stencil_3_read.csv");
  for (int i = 0; i < op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_DATA_SIZE; i++) {
#ifdef __FLOAT_OUTPUT__
    float  val = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
#else // __FLOAT_OUTPUT__
    uint16_t val = (rand() % 256);
#endif // __FLOAT_OUTPUT__

#ifdef __FLOAT_OUTPUT__
    input_op_hcompute_hw_input_global_wrapper_glb_stencil_3_read << val << std::endl;
#else // __FLOAT_OUTPUT__
    input_op_hcompute_hw_input_global_wrapper_glb_stencil_3_read << val << std::endl;
#endif // __FLOAT_OUTPUT__

#ifdef __FLOAT_OUTPUT__
    ((uint16_t*) (op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0.data()))[i] = bitcast<uint16_t, float>(val);
#else // __FLOAT_OUTPUT__
    ((uint16_t*) (op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0.data()))[i] = val;
#endif // __FLOAT_OUTPUT__
  }

  input_op_hcompute_hw_input_global_wrapper_glb_stencil_3_read.close();
  for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_DATA_SIZE; i++) {
    ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0.data()))[i] = 0;
  }

  for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_DATA_SIZE; i++) {
    ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0.data()))[i] = 0;
  }

  for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_DATA_SIZE; i++) {
    ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0.data()))[i] = 0;
  }

  for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_DATA_SIZE; i++) {
    ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0.data()))[i] = 0;
  }

  for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_DATA_SIZE; i++) {
    ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0.data()))[i] = 0;
  }

  for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_DATA_SIZE; i++) {
    ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0.data()))[i] = 0;
  }

  for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_DATA_SIZE; i++) {
    ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_write_pipe0.data()))[i] = 0;
  }

  for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_DATA_SIZE; i++) {
    ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0.data()))[i] = 0;
  }

  for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_DATA_SIZE; i++) {
    ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0.data()))[i] = 0;
  }

  for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_DATA_SIZE; i++) {
    ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0.data()))[i] = 0;
  }

  for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_DATA_SIZE; i++) {
    ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0.data()))[i] = 0;
  }

  for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_DATA_SIZE; i++) {
    ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0.data()))[i] = 0;
  }

#endif // __POPULATE_HOST_INPUTS__
  auto devices = xcl::get_xil_devices();
  auto fileBuf = xcl::read_binary_file(binaryFile);
  cl::Program::Binaries bins{{fileBuf.data(), fileBuf.size()}};
  int valid_device = 0;
  for (unsigned int i = 0; i < devices.size(); i++) {
    auto device = devices[i];
    OCL_CHECK(err, context = cl::Context({device}, NULL, NULL, NULL, &err));
    OCL_CHECK(err,
      q = cl::CommandQueue(
      context, {device}, CL_QUEUE_PROFILING_ENABLE, &err));

    std::cout << "Trying to program device[" << i
      << "]: " << device.getInfo<CL_DEVICE_NAME>() << std::endl;
    OCL_CHECK(err, cl::Program program(context, {device}, bins, NULL, &err));
    if (err != CL_SUCCESS) {
      std::cout << "Failed to program device[" << i
      << "] with xclbin file!\n";
    } else {
      std::cout << "Device[" << i << "]: program successful!\n";
      OCL_CHECK(err, krnl_vector_add = cl::Kernel(program, "camera_pipeline_2x2_accel", &err));
      valid_device++;
      break;
    }
  }
  if (valid_device == 0) {
    std::cout << "Failed to program any device found, exit!\n";
    exit(EXIT_FAILURE);
  }

  OCL_CHECK(err, cl::Buffer op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_size_bytes, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(0, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_ocl_buf));

  OCL_CHECK(err, cl::Buffer op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_size_bytes, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(1, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_ocl_buf));

  OCL_CHECK(err, cl::Buffer op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_size_bytes, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(2, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_ocl_buf));

  OCL_CHECK(err, cl::Buffer op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY, op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_size_bytes, op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(3, op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_ocl_buf));

  OCL_CHECK(err, cl::Buffer op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_size_bytes, op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(4, op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_ocl_buf));

  OCL_CHECK(err, cl::Buffer op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_size_bytes, op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(5, op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_ocl_buf));

  OCL_CHECK(err, cl::Buffer op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_size_bytes, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(6, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_ocl_buf));

  OCL_CHECK(err, cl::Buffer op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_size_bytes, op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(7, op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_ocl_buf));

  OCL_CHECK(err, cl::Buffer op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_size_bytes, op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(8, op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_ocl_buf));

  OCL_CHECK(err, cl::Buffer op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_size_bytes, op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(9, op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_ocl_buf));

  OCL_CHECK(err, cl::Buffer op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_size_bytes, op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(10, op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_ocl_buf));

  OCL_CHECK(err, cl::Buffer op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_size_bytes, op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(11, op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_ocl_buf));

  OCL_CHECK(err, cl::Buffer op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_size_bytes, op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(12, op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_ocl_buf));

  OCL_CHECK(err, cl::Buffer op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_size_bytes, op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(13, op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_ocl_buf));

  OCL_CHECK(err, cl::Buffer op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_size_bytes, op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(14, op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_ocl_buf));

  OCL_CHECK(err, cl::Buffer op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_size_bytes, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(15, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_ocl_buf));


  OCL_CHECK(err, err = krnl_vector_add.setArg(16, num_epochs));

  std::cout << "Migrating memory" << std::endl;
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_ocl_buf, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_ocl_buf, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_ocl_buf, op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_ocl_buf}, 0));

  unsigned long start, end, nsduration;
  cl::Event event;

  std::cout << "Starting kernel" << std::endl;
  OCL_CHECK(err, err = q.enqueueTask(krnl_vector_add, NULL, &event));
  OCL_CHECK(err, err = event.wait());
  end =
  OCL_CHECK(err, event.getProfilingInfo<CL_PROFILING_COMMAND_END>(&err));
  start = OCL_CHECK(err,
  event.getProfilingInfo<CL_PROFILING_COMMAND_START>(&err));
  nsduration = end - start;
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));

  q.finish();

  double dnsduration = ((double)nsduration);
  double dsduration = dnsduration / ((double)1000000000);
  double dbytes = total_size_bytes;
  double bpersec = (dbytes / dsduration);
  double gbpersec = bpersec / ((double)1024 * 1024 * 1024);
  std::cout << "bytes       = " << dbytes << std::endl;
  std::cout << "bytes / sec = " << bpersec << std::endl;
  std::cout << "GB / sec    = " << gbpersec << std::endl;
  printf("Execution time = %f (sec) \n", dsduration);
{
    std::ofstream regression_result("op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_accel_result.csv");
    for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_DATA_SIZE; i++) {
      regression_result << ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0.data()))[i] << std::endl;
    }
}
{
    std::ofstream regression_result("op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_accel_result.csv");
    for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_DATA_SIZE; i++) {
      regression_result << ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0.data()))[i] << std::endl;
    }
}
{
    std::ofstream regression_result("op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_accel_result.csv");
    for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_DATA_SIZE; i++) {
      regression_result << ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0.data()))[i] << std::endl;
    }
}
{
    std::ofstream regression_result("op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_accel_result.csv");
    for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_DATA_SIZE; i++) {
      regression_result << ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0.data()))[i] << std::endl;
    }
}
{
    std::ofstream regression_result("op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_accel_result.csv");
    for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_DATA_SIZE; i++) {
      regression_result << ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0.data()))[i] << std::endl;
    }
}
{
    std::ofstream regression_result("op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_accel_result.csv");
    for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_DATA_SIZE; i++) {
      regression_result << ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0.data()))[i] << std::endl;
    }
}
{
    std::ofstream regression_result("op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_accel_result.csv");
    for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_DATA_SIZE; i++) {
      regression_result << ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_write_pipe0.data()))[i] << std::endl;
    }
}
{
    std::ofstream regression_result("op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_accel_result.csv");
    for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_DATA_SIZE; i++) {
      regression_result << ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0.data()))[i] << std::endl;
    }
}
{
    std::ofstream regression_result("op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_accel_result.csv");
    for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_DATA_SIZE; i++) {
      regression_result << ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0.data()))[i] << std::endl;
    }
}
{
    std::ofstream regression_result("op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_accel_result.csv");
    for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_DATA_SIZE; i++) {
      regression_result << ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0.data()))[i] << std::endl;
    }
}
{
    std::ofstream regression_result("op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_accel_result.csv");
    for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_DATA_SIZE; i++) {
      regression_result << ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0.data()))[i] << std::endl;
    }
}
{
    std::ofstream regression_result("op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_accel_result.csv");
    for (int i = 0; i < op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_DATA_SIZE; i++) {
      regression_result << ((uint16_t*) (op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0.data()))[i] << std::endl;
    }
}

  return 0;
}
