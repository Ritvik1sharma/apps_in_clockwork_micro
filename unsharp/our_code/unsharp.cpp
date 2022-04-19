#ifndef __SYNTHESIS__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__SYNTHESIS__
// compute file: unsharp_compute.h
#include "unsharp_compute.h"

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_164_to_blur_unnormalized_stencil_op_hcompute_sharpen_stencil_1_4_cache {
	// RAM Box: {[0, 65], [1, 64]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_117_to_blur_unnormalized_stencil_op_hcompute_sharpen_stencil_2_1_cache {
	// RAM Box: {[0, 65], [2, 65]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_211_to_blur_unnormalized_stencil_op_hcompute_sharpen_stencil_7_cache {
	// RAM Box: {[0, 65], [0, 63]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_cache {
  // Reader addrs...
    // { op_hcompute_sharpen_stencil_1[root = 0, sharpen_s0_y, sharpen_s0_x_x] -> blur_unnormalized_stencil[sharpen_s0_y, 1 + 3sharpen_s0_x_x] : 0 <= sharpen_s0_y <= 65 and 0 <= sharpen_s0_x_x <= 21 }
    // { op_hcompute_sharpen_stencil_2[root = 0, sharpen_s0_y, sharpen_s0_x_x] -> blur_unnormalized_stencil[sharpen_s0_y, 2 + 3sharpen_s0_x_x] : 0 <= sharpen_s0_y <= 65 and 0 <= sharpen_s0_x_x <= 21 }
    // { op_hcompute_sharpen_stencil[root = 0, sharpen_s0_y, sharpen_s0_x_x] -> blur_unnormalized_stencil[sharpen_s0_y, 3sharpen_s0_x_x] : 0 <= sharpen_s0_y <= 65 and 0 <= sharpen_s0_x_x <= 21 }
  // # of banks: 3
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_164_to_blur_unnormalized_stencil_op_hcompute_sharpen_stencil_1_4_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_164_to_blur_unnormalized_stencil_op_hcompute_sharpen_stencil_1_4;
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_117_to_blur_unnormalized_stencil_op_hcompute_sharpen_stencil_2_1_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_117_to_blur_unnormalized_stencil_op_hcompute_sharpen_stencil_2_1;
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_211_to_blur_unnormalized_stencil_op_hcompute_sharpen_stencil_7_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_211_to_blur_unnormalized_stencil_op_hcompute_sharpen_stencil_7;
};



inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_211_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_211, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_211_to_blur_unnormalized_stencil_op_hcompute_sharpen_stencil_7.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_211);
}

inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_164_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_164, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_164_to_blur_unnormalized_stencil_op_hcompute_sharpen_stencil_1_4.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_164);
}

inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_117_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_117, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_117_to_blur_unnormalized_stencil_op_hcompute_sharpen_stencil_2_1.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_117);
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_sharpen_stencil_1_4_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_sharpen_stencil_1_4 read pattern: { op_hcompute_sharpen_stencil_1[root = 0, sharpen_s0_y, sharpen_s0_x_x] -> blur_unnormalized_stencil[sharpen_s0_y, 1 + 3sharpen_s0_x_x] : 0 <= sharpen_s0_y <= 65 and 0 <= sharpen_s0_x_x <= 21 }
  // Read schedule : { op_hcompute_sharpen_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 31] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_164 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_164_to_blur_unnormalized_stencil_op_hcompute_sharpen_stencil_1_4.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_164;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_sharpen_stencil_2_1_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_sharpen_stencil_2_1 read pattern: { op_hcompute_sharpen_stencil_2[root = 0, sharpen_s0_y, sharpen_s0_x_x] -> blur_unnormalized_stencil[sharpen_s0_y, 2 + 3sharpen_s0_x_x] : 0 <= sharpen_s0_y <= 65 and 0 <= sharpen_s0_x_x <= 21 }
  // Read schedule : { op_hcompute_sharpen_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 32] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_117 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_117_to_blur_unnormalized_stencil_op_hcompute_sharpen_stencil_2_1.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_117;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_sharpen_stencil_7_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_sharpen_stencil_7 read pattern: { op_hcompute_sharpen_stencil[root = 0, sharpen_s0_y, sharpen_s0_x_x] -> blur_unnormalized_stencil[sharpen_s0_y, 3sharpen_s0_x_x] : 0 <= sharpen_s0_y <= 65 and 0 <= sharpen_s0_x_x <= 21 }
  // Read schedule : { op_hcompute_sharpen_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 30] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_211 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_211_to_blur_unnormalized_stencil_op_hcompute_sharpen_stencil_7.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_211;
  return 0;
}

// # of bundles = 6
// op_hcompute_blur_unnormalized_stencil_3_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_211
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_3_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_211_res = op_hcompute_blur_unnormalized_stencil_3_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_211_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_211_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_4_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_164
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_4_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_164_res = op_hcompute_blur_unnormalized_stencil_4_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_164_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_164_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_5_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_117
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_5_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_117_res = op_hcompute_blur_unnormalized_stencil_5_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_117_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_117_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
}

// op_hcompute_sharpen_stencil_1_read
//	blur_unnormalized_stencil_op_hcompute_sharpen_stencil_1_4
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_sharpen_stencil_1_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_sharpen_stencil_1_4

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_sharpen_stencil_1_4_res = blur_unnormalized_stencil_op_hcompute_sharpen_stencil_1_4_select(blur_unnormalized_stencil, root, sharpen_s0_y, sharpen_s0_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_sharpen_stencil_1_4_res);
	return result;
}

// op_hcompute_sharpen_stencil_2_read
//	blur_unnormalized_stencil_op_hcompute_sharpen_stencil_2_1
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_sharpen_stencil_2_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_sharpen_stencil_2_1

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_sharpen_stencil_2_1_res = blur_unnormalized_stencil_op_hcompute_sharpen_stencil_2_1_select(blur_unnormalized_stencil, root, sharpen_s0_y, sharpen_s0_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_sharpen_stencil_2_1_res);
	return result;
}

// op_hcompute_sharpen_stencil_read
//	blur_unnormalized_stencil_op_hcompute_sharpen_stencil_7
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_sharpen_stencil_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_sharpen_stencil_7

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_sharpen_stencil_7_res = blur_unnormalized_stencil_op_hcompute_sharpen_stencil_7_select(blur_unnormalized_stencil, root, sharpen_s0_y, sharpen_s0_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_sharpen_stencil_7_res);
	return result;
}

struct blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_260_to_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_3_212_cache {
	// RAM Box: {[0, 65], [0, 63]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_1_259_to_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_4_165_cache {
	// RAM Box: {[0, 65], [1, 64]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_2_258_to_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_5_118_cache {
	// RAM Box: {[0, 65], [2, 65]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_clkwrk_dsa18_cache {
  // Reader addrs...
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa18[blur_unnormalized_s1_y, 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa18[blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa18[blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // # of banks: 3
  blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_260_to_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_3_212_cache blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_260_to_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_3_212;
  blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_1_259_to_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_4_165_cache blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_1_259_to_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_4_165;
  blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_2_258_to_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_5_118_cache blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_2_258_to_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_5_118;
};



inline void blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_1_259_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_1_259, blur_unnormalized_stencil_clkwrk_dsa18_cache& blur_unnormalized_stencil_clkwrk_dsa18, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa18.blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_1_259_to_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_4_165.push(blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_1_259);
}

inline void blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_260_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_260, blur_unnormalized_stencil_clkwrk_dsa18_cache& blur_unnormalized_stencil_clkwrk_dsa18, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa18.blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_260_to_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_3_212.push(blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_260);
}

inline void blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_2_258_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_2_258, blur_unnormalized_stencil_clkwrk_dsa18_cache& blur_unnormalized_stencil_clkwrk_dsa18, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa18.blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_2_258_to_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_5_118.push(blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_2_258);
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_3_212_select(blur_unnormalized_stencil_clkwrk_dsa18_cache& blur_unnormalized_stencil_clkwrk_dsa18, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_3_212 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa18[blur_unnormalized_s1_y, 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 24] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_260 = blur_unnormalized_stencil_clkwrk_dsa18.blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_260_to_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_3_212.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_260;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_4_165_select(blur_unnormalized_stencil_clkwrk_dsa18_cache& blur_unnormalized_stencil_clkwrk_dsa18, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_4_165 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa18[blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 25] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_1_259 = blur_unnormalized_stencil_clkwrk_dsa18.blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_1_259_to_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_4_165.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_1_259;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_5_118_select(blur_unnormalized_stencil_clkwrk_dsa18_cache& blur_unnormalized_stencil_clkwrk_dsa18, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_5_118 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa18[blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 26] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_2_258 = blur_unnormalized_stencil_clkwrk_dsa18.blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_2_258_to_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_5_118.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_2_258;
  return 0;
}

// # of bundles = 6
// op_hcompute_blur_unnormalized_stencil_1_write
//	blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_1_259
inline void blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_1_write, blur_unnormalized_stencil_clkwrk_dsa18_cache& blur_unnormalized_stencil_clkwrk_dsa18, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_1_259_res = op_hcompute_blur_unnormalized_stencil_1_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_1_259_write(blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_1_259_res, blur_unnormalized_stencil_clkwrk_dsa18, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_2_write
//	blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_2_258
inline void blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_2_write, blur_unnormalized_stencil_clkwrk_dsa18_cache& blur_unnormalized_stencil_clkwrk_dsa18, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_2_258_res = op_hcompute_blur_unnormalized_stencil_2_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_2_258_write(blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_2_258_res, blur_unnormalized_stencil_clkwrk_dsa18, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_3_read
//	blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_3_212
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_3_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa18_cache& blur_unnormalized_stencil_clkwrk_dsa18, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_3_212

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_3_212_res = blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_3_212_select(blur_unnormalized_stencil_clkwrk_dsa18, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_3_212_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_4_read
//	blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_4_165
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_4_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa18_cache& blur_unnormalized_stencil_clkwrk_dsa18, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_4_165

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_4_165_res = blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_4_165_select(blur_unnormalized_stencil_clkwrk_dsa18, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_4_165_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_5_read
//	blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_5_118
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_5_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa18_cache& blur_unnormalized_stencil_clkwrk_dsa18, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_5_118

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_5_118_res = blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_5_118_select(blur_unnormalized_stencil_clkwrk_dsa18, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_5_118_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_write
//	blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_260
inline void blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_write, blur_unnormalized_stencil_clkwrk_dsa18_cache& blur_unnormalized_stencil_clkwrk_dsa18, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_260_res = op_hcompute_blur_unnormalized_stencil_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_260_write(blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_260_res, blur_unnormalized_stencil_clkwrk_dsa18, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, dynamic_address);
}

struct gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47_cache {
	// RAM Box: {[0, 71], [3, 69]}
	// Capacity: 146
	// # of read delays: 19
  // 0, 1, 24, 25, 26, 48, 49, 50, 72, 73, 74, 96, 97, 98, 120, 121, 122, 144, 145
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 22> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 21> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;
	hw_uint<16> f14;
	fifo<hw_uint<16>, 21> f15;
	hw_uint<16> f16;
	hw_uint<16> f18;
	hw_uint<16> f20;
	fifo<hw_uint<16>, 21> f21;
	hw_uint<16> f22;
	hw_uint<16> f24;
	hw_uint<16> f26;
	fifo<hw_uint<16>, 21> f27;
	hw_uint<16> f28;
	hw_uint<16> f30;
	hw_uint<16> f32;
	fifo<hw_uint<16>, 21> f33;
	hw_uint<16> f34;
	hw_uint<16> f36;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_23() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_24() {
		return f4;
	}

	inline hw_uint<16> peek_25() {
		return f6;
	}

	inline hw_uint<16> peek_26() {
		return f8;
	}

	inline hw_uint<16> peek_47() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f9.back();
	}

	inline hw_uint<16> peek_48() {
		return f10;
	}

	inline hw_uint<16> peek_49() {
		return f12;
	}

	inline hw_uint<16> peek_50() {
		return f14;
	}

	inline hw_uint<16> peek_71() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f15.back();
	}

	inline hw_uint<16> peek_72() {
		return f16;
	}

	inline hw_uint<16> peek_73() {
		return f18;
	}

	inline hw_uint<16> peek_74() {
		return f20;
	}

	inline hw_uint<16> peek_95() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f21.back();
	}

	inline hw_uint<16> peek_96() {
		return f22;
	}

	inline hw_uint<16> peek_97() {
		return f24;
	}

	inline hw_uint<16> peek_98() {
		return f26;
	}

	inline hw_uint<16> peek_119() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f27.back();
	}

	inline hw_uint<16> peek_120() {
		return f28;
	}

	inline hw_uint<16> peek_121() {
		return f30;
	}

	inline hw_uint<16> peek_122() {
		return f32;
	}

	inline hw_uint<16> peek_143() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f33.back();
	}

	inline hw_uint<16> peek_144() {
		return f34;
	}

	inline hw_uint<16> peek_145() {
		return f36;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f36 = f34;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 21
    f34 = f33.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 21 reading from capacity: 1
    f33.push(f32);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f32 = f30;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f30 = f28;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 21
    f28 = f27.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 21 reading from capacity: 1
    f27.push(f26);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f26 = f24;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f24 = f22;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 21
    f22 = f21.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 21 reading from capacity: 1
    f21.push(f20);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f20 = f18;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f18 = f16;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 21
    f16 = f15.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 21 reading from capacity: 1
    f15.push(f14);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 21
    f10 = f9.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 21 reading from capacity: 1
    f9.push(f8);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 22
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 22 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47_cache {
	// RAM Box: {[0, 71], [1, 70]}
	// Capacity: 147
	// # of read delays: 21
  // 0, 1, 2, 24, 25, 26, 48, 49, 50, 72, 73, 74, 96, 97, 98, 120, 121, 122, 144, 145, 146
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 21> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 21> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;
	fifo<hw_uint<16>, 21> f17;
	hw_uint<16> f18;
	hw_uint<16> f20;
	hw_uint<16> f22;
	fifo<hw_uint<16>, 21> f23;
	hw_uint<16> f24;
	hw_uint<16> f26;
	hw_uint<16> f28;
	fifo<hw_uint<16>, 21> f29;
	hw_uint<16> f30;
	hw_uint<16> f32;
	hw_uint<16> f34;
	fifo<hw_uint<16>, 21> f35;
	hw_uint<16> f36;
	hw_uint<16> f38;
	hw_uint<16> f40;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_23() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_24() {
		return f6;
	}

	inline hw_uint<16> peek_25() {
		return f8;
	}

	inline hw_uint<16> peek_26() {
		return f10;
	}

	inline hw_uint<16> peek_47() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f11.back();
	}

	inline hw_uint<16> peek_48() {
		return f12;
	}

	inline hw_uint<16> peek_49() {
		return f14;
	}

	inline hw_uint<16> peek_50() {
		return f16;
	}

	inline hw_uint<16> peek_71() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f17.back();
	}

	inline hw_uint<16> peek_72() {
		return f18;
	}

	inline hw_uint<16> peek_73() {
		return f20;
	}

	inline hw_uint<16> peek_74() {
		return f22;
	}

	inline hw_uint<16> peek_95() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f23.back();
	}

	inline hw_uint<16> peek_96() {
		return f24;
	}

	inline hw_uint<16> peek_97() {
		return f26;
	}

	inline hw_uint<16> peek_98() {
		return f28;
	}

	inline hw_uint<16> peek_119() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f29.back();
	}

	inline hw_uint<16> peek_120() {
		return f30;
	}

	inline hw_uint<16> peek_121() {
		return f32;
	}

	inline hw_uint<16> peek_122() {
		return f34;
	}

	inline hw_uint<16> peek_143() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f35.back();
	}

	inline hw_uint<16> peek_144() {
		return f36;
	}

	inline hw_uint<16> peek_145() {
		return f38;
	}

	inline hw_uint<16> peek_146() {
		return f40;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f40 = f38;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f38 = f36;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 21
    f36 = f35.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 21 reading from capacity: 1
    f35.push(f34);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f34 = f32;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f32 = f30;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 21
    f30 = f29.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 21 reading from capacity: 1
    f29.push(f28);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f28 = f26;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f26 = f24;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 21
    f24 = f23.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 21 reading from capacity: 1
    f23.push(f22);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f22 = f20;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f20 = f18;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 21
    f18 = f17.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 21 reading from capacity: 1
    f17.push(f16);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 21
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 21 reading from capacity: 1
    f11.push(f10);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 21
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 21 reading from capacity: 1
    f5.push(f4);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47_cache {
	// RAM Box: {[0, 71], [2, 68]}
	// Capacity: 147
	// # of read delays: 20
  // 0, 1, 2, 24, 25, 26, 48, 49, 50, 72, 73, 74, 96, 97, 98, 120, 121, 122, 145, 146
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 21> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 21> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;
	fifo<hw_uint<16>, 21> f17;
	hw_uint<16> f18;
	hw_uint<16> f20;
	hw_uint<16> f22;
	fifo<hw_uint<16>, 21> f23;
	hw_uint<16> f24;
	hw_uint<16> f26;
	hw_uint<16> f28;
	fifo<hw_uint<16>, 21> f29;
	hw_uint<16> f30;
	hw_uint<16> f32;
	hw_uint<16> f34;
	fifo<hw_uint<16>, 22> f35;
	hw_uint<16> f36;
	hw_uint<16> f38;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_23() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_24() {
		return f6;
	}

	inline hw_uint<16> peek_25() {
		return f8;
	}

	inline hw_uint<16> peek_26() {
		return f10;
	}

	inline hw_uint<16> peek_47() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f11.back();
	}

	inline hw_uint<16> peek_48() {
		return f12;
	}

	inline hw_uint<16> peek_49() {
		return f14;
	}

	inline hw_uint<16> peek_50() {
		return f16;
	}

	inline hw_uint<16> peek_71() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f17.back();
	}

	inline hw_uint<16> peek_72() {
		return f18;
	}

	inline hw_uint<16> peek_73() {
		return f20;
	}

	inline hw_uint<16> peek_74() {
		return f22;
	}

	inline hw_uint<16> peek_95() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f23.back();
	}

	inline hw_uint<16> peek_96() {
		return f24;
	}

	inline hw_uint<16> peek_97() {
		return f26;
	}

	inline hw_uint<16> peek_98() {
		return f28;
	}

	inline hw_uint<16> peek_119() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f29.back();
	}

	inline hw_uint<16> peek_120() {
		return f30;
	}

	inline hw_uint<16> peek_121() {
		return f32;
	}

	inline hw_uint<16> peek_122() {
		return f34;
	}

	inline hw_uint<16> peek_144() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f35.back();
	}

	inline hw_uint<16> peek_145() {
		return f36;
	}

	inline hw_uint<16> peek_146() {
		return f38;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f38 = f36;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 22
    f36 = f35.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 22 reading from capacity: 1
    f35.push(f34);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f34 = f32;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f32 = f30;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 21
    f30 = f29.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 21 reading from capacity: 1
    f29.push(f28);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f28 = f26;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f26 = f24;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 21
    f24 = f23.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 21 reading from capacity: 1
    f23.push(f22);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f22 = f20;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f20 = f18;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 21
    f18 = f17.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 21 reading from capacity: 1
    f17.push(f16);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 21
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 21 reading from capacity: 1
    f11.push(f10);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 21
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 21 reading from capacity: 1
    f5.push(f4);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct gray_stencil_cache {
  // Reader addrs...
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 8 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 8 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 8 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 8 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 8 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
    // { op_hcompute_reciprocal_stencil[root = 0, reciprocal_s0_y, reciprocal_s0_x_x] -> gray_stencil[3 + reciprocal_s0_y, 3 + 3reciprocal_s0_x_x] : 0 <= reciprocal_s0_y <= 65 and 0 <= reciprocal_s0_x_x <= 21 }
    // { op_hcompute_reciprocal_stencil_1[root = 0, reciprocal_s0_y, reciprocal_s0_x_x] -> gray_stencil[3 + reciprocal_s0_y, 4 + 3reciprocal_s0_x_x] : 0 <= reciprocal_s0_y <= 65 and 0 <= reciprocal_s0_x_x <= 21 }
    // { op_hcompute_reciprocal_stencil_2[root = 0, reciprocal_s0_y, reciprocal_s0_x_x] -> gray_stencil[3 + reciprocal_s0_y, 5 + 3reciprocal_s0_x_x] : 0 <= reciprocal_s0_y <= 65 and 0 <= reciprocal_s0_x_x <= 21 }
    // { op_hcompute_sharpen_stencil_1[root = 0, sharpen_s0_y, sharpen_s0_x_x] -> gray_stencil[3 + sharpen_s0_y, 4 + 3sharpen_s0_x_x] : 0 <= sharpen_s0_y <= 65 and 0 <= sharpen_s0_x_x <= 21 }
    // { op_hcompute_sharpen_stencil_2[root = 0, sharpen_s0_y, sharpen_s0_x_x] -> gray_stencil[3 + sharpen_s0_y, 5 + 3sharpen_s0_x_x] : 0 <= sharpen_s0_y <= 65 and 0 <= sharpen_s0_x_x <= 21 }
    // { op_hcompute_sharpen_stencil[root = 0, sharpen_s0_y, sharpen_s0_x_x] -> gray_stencil[3 + sharpen_s0_y, 3 + 3sharpen_s0_x_x] : 0 <= sharpen_s0_y <= 65 and 0 <= sharpen_s0_x_x <= 21 }
  // # of banks: 3
  gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47_cache gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47;
  gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47_cache gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47;
  gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47_cache gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47;
};



inline void gray_stencil_op_hcompute_gray_stencil_113_write(hw_uint<16>& gray_stencil_op_hcompute_gray_stencil_113, gray_stencil_cache& gray_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
  gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.push(gray_stencil_op_hcompute_gray_stencil_113);
}

inline void gray_stencil_op_hcompute_gray_stencil_1_109_write(hw_uint<16>& gray_stencil_op_hcompute_gray_stencil_1_109, gray_stencil_cache& gray_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
  gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.push(gray_stencil_op_hcompute_gray_stencil_1_109);
}

inline void gray_stencil_op_hcompute_gray_stencil_2_105_write(hw_uint<16>& gray_stencil_op_hcompute_gray_stencil_2_105, gray_stencil_cache& gray_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
  gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.push(gray_stencil_op_hcompute_gray_stencil_2_105);
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_213_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_213 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_122();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_214_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_214 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_122();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_215_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_215 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_121();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_216_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_216 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_121();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_217_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_217 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_121();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_218_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_218 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_120();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_219_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_219 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_98();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_220_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_220 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_98();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_221_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_221 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_98();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_222_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_222 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_97();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_223_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_223 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_97();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_224_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_224 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_97();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_225_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_225 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_96();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_226_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_226 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_74();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_227_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_227 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_74();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_228_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_228 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_74();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_229_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_229 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_230_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_230 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_231_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_231 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_232_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_232 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_72();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_233_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_233 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_50();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_234_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_234 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_50();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_235_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_235 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_50();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_236_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_236 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_49();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_237_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_237 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_49();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_238_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_238 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_49();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_239_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_239 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_48();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_240_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_240 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_26();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_241_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_241 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_26();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_242_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_242 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_26();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_243_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_243 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_146();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_244_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_244 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_25();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_245_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_245 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_25();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_246_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_246 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_25();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_247_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_247 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_24();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_248_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_248 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_2();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_249_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_249 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_2();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_250_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_250 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_1();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_251_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_251 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_1();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_252_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_252 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_1();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_253_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_253 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_146();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_254_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_254 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_145();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_255_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_255 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_145();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_256_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_256 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_145();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_257_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_257 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_122();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_166_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_166 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_146();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_167_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_167 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_145();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_168_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_168 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_145();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_169_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_169 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_145();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_170_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_170 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_144();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_171_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_171 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_122();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_172_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_172 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_122();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_173_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_173 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_121();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_174_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_174 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_121();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_175_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_175 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_121();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_176_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_176 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_120();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_177_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_177 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_120();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_178_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_178 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_98();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_179_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_179 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_98();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_180_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_180 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_97();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_181_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_181 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_97();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_182_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_182 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_97();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_183_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_183 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_96();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_184_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_184 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_96();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_185_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_185 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_74();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_186_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_186 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_74();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_187_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_187 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_188_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_188 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_189_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_189 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_190_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_190 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_72();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_191_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_191 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_72();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_192_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_192 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_50();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_193_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_193 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_50();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_194_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_194 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_49();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_195_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_195 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_49();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_196_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_196 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_49();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_197_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_197 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_48();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_198_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_198 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_48();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_199_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_199 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 1 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_26();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_200_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_200 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_26();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_201_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_201 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_25();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_202_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_202 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_25();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_203_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_203 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_25();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_204_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_204 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_24();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_205_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_205 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_24();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_206_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_206 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_2();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_207_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_207 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_1();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_208_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_208 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_1();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_209_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_209 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_0();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_210_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_210 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_1();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_119_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_119 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_121();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_120_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_120 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_121();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_121_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_121 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_121();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_122_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_122 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_120();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_123_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_123 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_120();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_124_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_124 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 8 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_120();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_125_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_125 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_98();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_126_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_126 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_97();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_127_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_127 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_97();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_128_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_128 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_97();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_129_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_129 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_96();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_130_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_130 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_96();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_131_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_131 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 8 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_96();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_132_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_132 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_74();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_133_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_133 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_134_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_134 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_135_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_135 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_136_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_136 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_72();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_137_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_137 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_72();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_138_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_138 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 8 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_72();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_139_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_139 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_50();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_140_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_140 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_49();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_141_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_141 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_49();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_142_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_142 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_49();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_143_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_143 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_48();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_144_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_144 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_48();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_145_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_145 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 8 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_48();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_146_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_146 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_26();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_147_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_147 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_25();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_148_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_148 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_25();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_149_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_149 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_25();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_150_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_150 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_24();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_151_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_151 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_24();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_152_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_152 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[5 + blur_unnormalized_s1_y, 8 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_24();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_153_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_153 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_1();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_154_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_154 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_1();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_155_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_155 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_1();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_156_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_156 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_0();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_157_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_157 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[6 + blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_0();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_158_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_158 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 3 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_145();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_159_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_159 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 4 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_145();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_160_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_160 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 5 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_145();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_161_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_161 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 6 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_144();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_162_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_162 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[blur_unnormalized_s1_y, 7 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_144();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_163_select(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_163 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 2 + 3blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 65 and 0 <= blur_unnormalized_s1_x_x <= 21 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_122();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_reciprocal_stencil_14_select(gray_stencil_cache& gray_stencil, int root, int reciprocal_s0_y, int reciprocal_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_reciprocal_stencil_14 read pattern: { op_hcompute_reciprocal_stencil[root = 0, reciprocal_s0_y, reciprocal_s0_x_x] -> gray_stencil[3 + reciprocal_s0_y, 3 + 3reciprocal_s0_x_x] : 0 <= reciprocal_s0_y <= 65 and 0 <= reciprocal_s0_x_x <= 21 }
  // Read schedule : { op_hcompute_reciprocal_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 21] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_reciprocal_stencil_1_12_select(gray_stencil_cache& gray_stencil, int root, int reciprocal_s0_y, int reciprocal_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_reciprocal_stencil_1_12 read pattern: { op_hcompute_reciprocal_stencil_1[root = 0, reciprocal_s0_y, reciprocal_s0_x_x] -> gray_stencil[3 + reciprocal_s0_y, 4 + 3reciprocal_s0_x_x] : 0 <= reciprocal_s0_y <= 65 and 0 <= reciprocal_s0_x_x <= 21 }
  // Read schedule : { op_hcompute_reciprocal_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 22] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_reciprocal_stencil_2_10_select(gray_stencil_cache& gray_stencil, int root, int reciprocal_s0_y, int reciprocal_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_reciprocal_stencil_2_10 read pattern: { op_hcompute_reciprocal_stencil_2[root = 0, reciprocal_s0_y, reciprocal_s0_x_x] -> gray_stencil[3 + reciprocal_s0_y, 5 + 3reciprocal_s0_x_x] : 0 <= reciprocal_s0_y <= 65 and 0 <= reciprocal_s0_x_x <= 21 }
  // Read schedule : { op_hcompute_reciprocal_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 23] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_sharpen_stencil_1_5_select(gray_stencil_cache& gray_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_sharpen_stencil_1_5 read pattern: { op_hcompute_sharpen_stencil_1[root = 0, sharpen_s0_y, sharpen_s0_x_x] -> gray_stencil[3 + sharpen_s0_y, 4 + 3sharpen_s0_x_x] : 0 <= sharpen_s0_y <= 65 and 0 <= sharpen_s0_x_x <= 21 }
  // Read schedule : { op_hcompute_sharpen_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 31] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_109 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_1_109;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_sharpen_stencil_2_2_select(gray_stencil_cache& gray_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_sharpen_stencil_2_2 read pattern: { op_hcompute_sharpen_stencil_2[root = 0, sharpen_s0_y, sharpen_s0_x_x] -> gray_stencil[3 + sharpen_s0_y, 5 + 3sharpen_s0_x_x] : 0 <= sharpen_s0_y <= 65 and 0 <= sharpen_s0_x_x <= 21 }
  // Read schedule : { op_hcompute_sharpen_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 32] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_2_105 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_2_105;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_sharpen_stencil_8_select(gray_stencil_cache& gray_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_sharpen_stencil_8 read pattern: { op_hcompute_sharpen_stencil[root = 0, sharpen_s0_y, sharpen_s0_x_x] -> gray_stencil[3 + sharpen_s0_y, 3 + 3sharpen_s0_x_x] : 0 <= sharpen_s0_y <= 65 and 0 <= sharpen_s0_x_x <= 21 }
  // Read schedule : { op_hcompute_sharpen_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 30] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_gray_stencil_op_hcompute_gray_stencil_113 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_113;
  return 0;
}

// # of bundles = 12
// op_hcompute_blur_unnormalized_stencil_3_read
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_213
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_214
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_215
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_216
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_217
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_218
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_219
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_220
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_221
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_222
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_223
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_224
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_225
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_226
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_227
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_228
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_229
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_230
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_231
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_232
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_233
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_234
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_235
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_236
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_237
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_238
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_239
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_240
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_241
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_242
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_243
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_244
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_245
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_246
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_247
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_248
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_249
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_250
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_251
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_252
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_253
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_254
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_255
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_256
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_3_257
inline hw_uint<720> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_read_bundle_read(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 45
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_213
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_214
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_215
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_216
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_217
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_218
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_219
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_220
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_221
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_222
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_223
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_224
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_225
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_226
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_227
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_228
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_229
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_230
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_231
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_232
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_233
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_234
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_235
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_236
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_237
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_238
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_239
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_240
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_241
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_242
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_243
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_244
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_245
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_246
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_247
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_248
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_249
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_250
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_251
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_252
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_253
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_254
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_255
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_256
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_3_257

	hw_uint<720> result;
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_213_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_213_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_213_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_214_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_214_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<16, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_214_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_215_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_215_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<32, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_215_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_216_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_216_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<48, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_216_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_217_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_217_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<64, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_217_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_218_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_218_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<80, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_218_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_219_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_219_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<96, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_219_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_220_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_220_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<112, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_220_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_221_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_221_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<128, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_221_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_222_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_222_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<144, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_222_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_223_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_223_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<160, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_223_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_224_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_224_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<176, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_224_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_225_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_225_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<192, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_225_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_226_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_226_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<208, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_226_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_227_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_227_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<224, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_227_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_228_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_228_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<240, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_228_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_229_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_229_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<256, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_229_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_230_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_230_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<272, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_230_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_231_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_231_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<288, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_231_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_232_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_232_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<304, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_232_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_233_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_233_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<320, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_233_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_234_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_234_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<336, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_234_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_235_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_235_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<352, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_235_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_236_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_236_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<368, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_236_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_237_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_237_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<384, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_237_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_238_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_238_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<400, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_238_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_239_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_239_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<416, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_239_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_240_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_240_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<432, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_240_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_241_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_241_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<448, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_241_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_242_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_242_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<464, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_242_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_243_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_243_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<480, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_243_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_244_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_244_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<496, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_244_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_245_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_245_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<512, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_245_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_246_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_246_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<528, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_246_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_247_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_247_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<544, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_247_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_248_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_248_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<560, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_248_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_249_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_249_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<576, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_249_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_250_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_250_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<592, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_250_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_251_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_251_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<608, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_251_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_252_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_252_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<624, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_252_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_253_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_253_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<640, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_253_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_254_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_254_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<656, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_254_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_255_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_255_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<672, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_255_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_256_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_256_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<688, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_256_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_3_257_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_257_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<704, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_3_257_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_4_read
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_166
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_167
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_168
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_169
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_170
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_171
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_172
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_173
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_174
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_175
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_176
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_177
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_178
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_179
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_180
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_181
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_182
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_183
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_184
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_185
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_186
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_187
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_188
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_189
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_190
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_191
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_192
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_193
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_194
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_195
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_196
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_197
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_198
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_199
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_200
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_201
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_202
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_203
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_204
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_205
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_206
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_207
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_208
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_209
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_4_210
inline hw_uint<720> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_read_bundle_read(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 45
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_166
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_167
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_168
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_169
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_170
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_171
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_172
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_173
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_174
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_175
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_176
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_177
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_178
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_179
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_180
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_181
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_182
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_183
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_184
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_185
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_186
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_187
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_188
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_189
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_190
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_191
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_192
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_193
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_194
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_195
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_196
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_197
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_198
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_199
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_200
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_201
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_202
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_203
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_204
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_205
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_206
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_207
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_208
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_209
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_4_210

	hw_uint<720> result;
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_166_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_166_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_166_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_167_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_167_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<16, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_167_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_168_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_168_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<32, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_168_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_169_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_169_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<48, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_169_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_170_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_170_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<64, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_170_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_171_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_171_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<80, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_171_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_172_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_172_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<96, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_172_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_173_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_173_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<112, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_173_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_174_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_174_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<128, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_174_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_175_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_175_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<144, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_175_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_176_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_176_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<160, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_176_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_177_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_177_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<176, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_177_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_178_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_178_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<192, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_178_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_179_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_179_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<208, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_179_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_180_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_180_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<224, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_180_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_181_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_181_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<240, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_181_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_182_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_182_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<256, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_182_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_183_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_183_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<272, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_183_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_184_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_184_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<288, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_184_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_185_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_185_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<304, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_185_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_186_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_186_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<320, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_186_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_187_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_187_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<336, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_187_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_188_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_188_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<352, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_188_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_189_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_189_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<368, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_189_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_190_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_190_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<384, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_190_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_191_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_191_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<400, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_191_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_192_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_192_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<416, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_192_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_193_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_193_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<432, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_193_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_194_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_194_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<448, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_194_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_195_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_195_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<464, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_195_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_196_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_196_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<480, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_196_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_197_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_197_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<496, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_197_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_198_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_198_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<512, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_198_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_199_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_199_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<528, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_199_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_200_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_200_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<544, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_200_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_201_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_201_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<560, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_201_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_202_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_202_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<576, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_202_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_203_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_203_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<592, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_203_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_204_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_204_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<608, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_204_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_205_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_205_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<624, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_205_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_206_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_206_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<640, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_206_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_207_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_207_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<656, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_207_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_208_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_208_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<672, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_208_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_209_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_209_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<688, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_209_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_4_210_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_210_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<704, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_4_210_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_5_read
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_119
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_120
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_121
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_122
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_123
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_124
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_125
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_126
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_127
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_128
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_129
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_130
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_131
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_132
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_133
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_134
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_135
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_136
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_137
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_138
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_139
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_140
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_141
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_142
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_143
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_144
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_145
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_146
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_147
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_148
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_149
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_150
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_151
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_152
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_153
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_154
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_155
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_156
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_157
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_158
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_159
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_160
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_161
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_162
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_5_163
inline hw_uint<720> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_read_bundle_read(gray_stencil_cache& gray_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 45
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_119
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_120
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_121
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_122
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_123
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_124
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_125
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_126
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_127
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_128
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_129
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_130
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_131
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_132
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_133
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_134
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_135
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_136
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_137
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_138
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_139
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_140
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_141
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_142
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_143
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_144
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_145
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_146
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_147
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_148
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_149
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_150
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_151
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_152
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_153
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_154
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_155
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_156
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_157
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_158
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_159
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_160
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_161
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_162
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_5_163

	hw_uint<720> result;
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_119_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_119_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_119_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_120_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_120_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<16, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_120_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_121_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_121_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<32, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_121_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_122_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_122_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<48, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_122_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_123_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_123_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<64, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_123_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_124_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_124_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<80, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_124_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_125_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_125_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<96, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_125_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_126_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_126_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<112, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_126_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_127_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_127_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<128, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_127_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_128_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_128_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<144, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_128_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_129_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_129_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<160, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_129_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_130_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_130_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<176, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_130_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_131_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_131_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<192, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_131_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_132_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_132_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<208, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_132_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_133_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_133_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<224, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_133_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_134_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_134_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<240, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_134_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_135_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_135_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<256, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_135_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_136_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_136_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<272, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_136_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_137_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_137_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<288, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_137_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_138_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_138_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<304, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_138_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_139_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_139_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<320, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_139_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_140_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_140_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<336, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_140_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_141_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_141_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<352, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_141_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_142_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_142_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<368, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_142_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_143_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_143_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<384, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_143_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_144_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_144_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<400, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_144_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_145_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_145_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<416, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_145_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_146_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_146_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<432, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_146_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_147_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_147_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<448, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_147_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_148_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_148_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<464, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_148_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_149_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_149_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<480, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_149_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_150_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_150_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<496, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_150_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_151_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_151_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<512, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_151_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_152_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_152_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<528, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_152_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_153_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_153_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<544, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_153_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_154_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_154_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<560, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_154_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_155_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_155_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<576, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_155_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_156_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_156_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<592, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_156_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_157_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_157_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<608, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_157_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_158_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_158_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<624, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_158_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_159_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_159_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<640, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_159_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_160_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_160_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<656, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_160_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_161_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_161_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<672, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_161_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_162_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_162_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<688, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_162_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_5_163_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_163_select(gray_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<704, 720>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_5_163_res);
	return result;
}

// op_hcompute_gray_stencil_1_write
//	gray_stencil_op_hcompute_gray_stencil_1_109
inline void gray_stencil_op_hcompute_gray_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_gray_stencil_1_write, gray_stencil_cache& gray_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
	hw_uint<16> gray_stencil_op_hcompute_gray_stencil_1_109_res = op_hcompute_gray_stencil_1_write.extract<0, 15>();
	gray_stencil_op_hcompute_gray_stencil_1_109_write(gray_stencil_op_hcompute_gray_stencil_1_109_res, gray_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
}

// op_hcompute_gray_stencil_2_write
//	gray_stencil_op_hcompute_gray_stencil_2_105
inline void gray_stencil_op_hcompute_gray_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_gray_stencil_2_write, gray_stencil_cache& gray_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
	hw_uint<16> gray_stencil_op_hcompute_gray_stencil_2_105_res = op_hcompute_gray_stencil_2_write.extract<0, 15>();
	gray_stencil_op_hcompute_gray_stencil_2_105_write(gray_stencil_op_hcompute_gray_stencil_2_105_res, gray_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
}

// op_hcompute_gray_stencil_write
//	gray_stencil_op_hcompute_gray_stencil_113
inline void gray_stencil_op_hcompute_gray_stencil_write_bundle_write(hw_uint<16>& op_hcompute_gray_stencil_write, gray_stencil_cache& gray_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
	hw_uint<16> gray_stencil_op_hcompute_gray_stencil_113_res = op_hcompute_gray_stencil_write.extract<0, 15>();
	gray_stencil_op_hcompute_gray_stencil_113_write(gray_stencil_op_hcompute_gray_stencil_113_res, gray_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
}

// op_hcompute_reciprocal_stencil_1_read
//	gray_stencil_op_hcompute_reciprocal_stencil_1_12
inline hw_uint<16> gray_stencil_op_hcompute_reciprocal_stencil_1_read_bundle_read(gray_stencil_cache& gray_stencil, int root, int reciprocal_s0_y, int reciprocal_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_stencil_op_hcompute_reciprocal_stencil_1_12

	hw_uint<16> result;
	hw_uint<16> gray_stencil_op_hcompute_reciprocal_stencil_1_12_res = gray_stencil_op_hcompute_reciprocal_stencil_1_12_select(gray_stencil, root, reciprocal_s0_y, reciprocal_s0_x_x, dynamic_address);
	set_at<0, 16>(result, gray_stencil_op_hcompute_reciprocal_stencil_1_12_res);
	return result;
}

// op_hcompute_reciprocal_stencil_2_read
//	gray_stencil_op_hcompute_reciprocal_stencil_2_10
inline hw_uint<16> gray_stencil_op_hcompute_reciprocal_stencil_2_read_bundle_read(gray_stencil_cache& gray_stencil, int root, int reciprocal_s0_y, int reciprocal_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_stencil_op_hcompute_reciprocal_stencil_2_10

	hw_uint<16> result;
	hw_uint<16> gray_stencil_op_hcompute_reciprocal_stencil_2_10_res = gray_stencil_op_hcompute_reciprocal_stencil_2_10_select(gray_stencil, root, reciprocal_s0_y, reciprocal_s0_x_x, dynamic_address);
	set_at<0, 16>(result, gray_stencil_op_hcompute_reciprocal_stencil_2_10_res);
	return result;
}

// op_hcompute_reciprocal_stencil_read
//	gray_stencil_op_hcompute_reciprocal_stencil_14
inline hw_uint<16> gray_stencil_op_hcompute_reciprocal_stencil_read_bundle_read(gray_stencil_cache& gray_stencil, int root, int reciprocal_s0_y, int reciprocal_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_stencil_op_hcompute_reciprocal_stencil_14

	hw_uint<16> result;
	hw_uint<16> gray_stencil_op_hcompute_reciprocal_stencil_14_res = gray_stencil_op_hcompute_reciprocal_stencil_14_select(gray_stencil, root, reciprocal_s0_y, reciprocal_s0_x_x, dynamic_address);
	set_at<0, 16>(result, gray_stencil_op_hcompute_reciprocal_stencil_14_res);
	return result;
}

// op_hcompute_sharpen_stencil_1_read
//	gray_stencil_op_hcompute_sharpen_stencil_1_5
inline hw_uint<16> gray_stencil_op_hcompute_sharpen_stencil_1_read_bundle_read(gray_stencil_cache& gray_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_stencil_op_hcompute_sharpen_stencil_1_5

	hw_uint<16> result;
	hw_uint<16> gray_stencil_op_hcompute_sharpen_stencil_1_5_res = gray_stencil_op_hcompute_sharpen_stencil_1_5_select(gray_stencil, root, sharpen_s0_y, sharpen_s0_x_x, dynamic_address);
	set_at<0, 16>(result, gray_stencil_op_hcompute_sharpen_stencil_1_5_res);
	return result;
}

// op_hcompute_sharpen_stencil_2_read
//	gray_stencil_op_hcompute_sharpen_stencil_2_2
inline hw_uint<16> gray_stencil_op_hcompute_sharpen_stencil_2_read_bundle_read(gray_stencil_cache& gray_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_stencil_op_hcompute_sharpen_stencil_2_2

	hw_uint<16> result;
	hw_uint<16> gray_stencil_op_hcompute_sharpen_stencil_2_2_res = gray_stencil_op_hcompute_sharpen_stencil_2_2_select(gray_stencil, root, sharpen_s0_y, sharpen_s0_x_x, dynamic_address);
	set_at<0, 16>(result, gray_stencil_op_hcompute_sharpen_stencil_2_2_res);
	return result;
}

// op_hcompute_sharpen_stencil_read
//	gray_stencil_op_hcompute_sharpen_stencil_8
inline hw_uint<16> gray_stencil_op_hcompute_sharpen_stencil_read_bundle_read(gray_stencil_cache& gray_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_stencil_op_hcompute_sharpen_stencil_8

	hw_uint<16> result;
	hw_uint<16> gray_stencil_op_hcompute_sharpen_stencil_8_res = gray_stencil_op_hcompute_sharpen_stencil_8_select(gray_stencil, root, sharpen_s0_y, sharpen_s0_x_x, dynamic_address);
	set_at<0, 16>(result, gray_stencil_op_hcompute_sharpen_stencil_8_res);
	return result;
}

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_101_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_84_cache {
	// RAM Box: {[0, 71], [0, 69], [1, 1]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_99_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_82_cache {
	// RAM Box: {[0, 71], [0, 69], [2, 2]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_97_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_80_cache {
	// RAM Box: {[0, 71], [1, 70], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_95_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_78_cache {
	// RAM Box: {[0, 71], [1, 70], [1, 1]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_93_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_76_cache {
	// RAM Box: {[0, 71], [1, 70], [2, 2]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_91_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_74_cache {
	// RAM Box: {[0, 71], [2, 71], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_89_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_72_cache {
	// RAM Box: {[0, 71], [2, 71], [1, 1]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_103_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_86_cache {
	// RAM Box: {[0, 71], [0, 69], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_8_87_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_70_cache {
	// RAM Box: {[0, 71], [2, 71], [2, 2]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_cache {
  // Reader addrs...
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 3hw_input_global_wrapper_global_wrapper_s0_x_x, 1] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 23 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 3hw_input_global_wrapper_global_wrapper_s0_x_x, 2] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 23 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 1 + 3hw_input_global_wrapper_global_wrapper_s0_x_x, 0] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 23 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 1 + 3hw_input_global_wrapper_global_wrapper_s0_x_x, 1] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 23 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 1 + 3hw_input_global_wrapper_global_wrapper_s0_x_x, 2] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 23 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 2 + 3hw_input_global_wrapper_global_wrapper_s0_x_x, 0] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 23 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 2 + 3hw_input_global_wrapper_global_wrapper_s0_x_x, 1] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 23 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 3hw_input_global_wrapper_global_wrapper_s0_x_x, 0] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 23 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 2 + 3hw_input_global_wrapper_global_wrapper_s0_x_x, 2] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 23 }
  // # of banks: 9
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_101_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_84_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_101_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_84;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_99_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_82_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_99_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_82;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_97_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_80_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_97_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_80;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_95_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_78_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_95_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_78;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_93_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_76_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_93_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_76;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_91_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_74_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_91_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_74;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_89_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_72_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_89_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_72;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_103_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_86_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_103_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_86;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_8_87_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_70_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_8_87_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_70;
};



inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_103_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_103, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_103_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_86.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_103);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_101_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_101, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_101_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_84.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_101);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_99_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_99, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_99_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_82.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_99);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_97_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_97, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_97_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_80.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_97);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_95_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_95, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_95_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_78.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_95);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_93_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_93, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_93_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_76.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_93);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_91_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_91, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_91_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_74.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_91);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_89_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_89, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_89_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_72.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_89);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_8_87_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_8_87, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_8_87_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_70.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_8_87);
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_84_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_84 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 3hw_input_global_wrapper_global_wrapper_s0_x_x, 1] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 23 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 10] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 1] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_101 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_101_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_84.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_101;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_82_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_82 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 3hw_input_global_wrapper_global_wrapper_s0_x_x, 2] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 23 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 11] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 2] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_99 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_99_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_82.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_99;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_80_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_80 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 1 + 3hw_input_global_wrapper_global_wrapper_s0_x_x, 0] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 23 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 3] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_97 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_97_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_80.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_97;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_78_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_78 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 1 + 3hw_input_global_wrapper_global_wrapper_s0_x_x, 1] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 23 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 4] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_95 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_95_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_78.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_95;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_76_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_76 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 1 + 3hw_input_global_wrapper_global_wrapper_s0_x_x, 2] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 23 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 14] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 5] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_93 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_93_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_76.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_93;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_74_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_74 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 2 + 3hw_input_global_wrapper_global_wrapper_s0_x_x, 0] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 23 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 15] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 6] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_91 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_91_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_74.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_91;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_72_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_72 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 2 + 3hw_input_global_wrapper_global_wrapper_s0_x_x, 1] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 23 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 16] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 7] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_89 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_89_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_72.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_89;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_86_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_86 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 3hw_input_global_wrapper_global_wrapper_s0_x_x, 0] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 23 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 9] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_103 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_103_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_86.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_103;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_70_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_70 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 2 + 3hw_input_global_wrapper_global_wrapper_s0_x_x, 2] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 23 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8[d0 = 0, d1, d2] -> [0, d1, d2, 17] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_8[d0 = 0, d1, d2] -> [0, d1, d2, 8] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_8_87 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_8_87_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_70.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_8_87;
  return 0;
}

// # of bundles = 18
// op_hcompute_hw_input_global_wrapper_glb_stencil_1_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_101
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_1_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_101_res = op_hcompute_hw_input_global_wrapper_glb_stencil_1_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_101_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_101_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_2_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_99
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_2_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_99_res = op_hcompute_hw_input_global_wrapper_glb_stencil_2_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_99_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_99_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_3_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_97
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_3_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_97_res = op_hcompute_hw_input_global_wrapper_glb_stencil_3_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_97_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_97_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_4_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_95
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_4_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_95_res = op_hcompute_hw_input_global_wrapper_glb_stencil_4_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_95_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_95_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_5_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_93
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_5_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_93_res = op_hcompute_hw_input_global_wrapper_glb_stencil_5_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_93_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_93_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_6_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_91
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_6_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_91_res = op_hcompute_hw_input_global_wrapper_glb_stencil_6_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_91_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_91_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_7_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_89
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_7_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_89_res = op_hcompute_hw_input_global_wrapper_glb_stencil_7_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_89_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_89_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_8_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_8_87
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_8_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_8_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_8_87_res = op_hcompute_hw_input_global_wrapper_glb_stencil_8_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_8_87_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_8_87_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_103
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_103_res = op_hcompute_hw_input_global_wrapper_glb_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_103_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_103_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_84
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_84

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_84_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_84_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_84_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_82
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_82

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_82_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_82_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_82_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_80
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_80

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_80_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_80_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_80_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_78
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_78

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_78_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_78_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_78_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_76
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_76

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_76_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_76_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_76_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_74
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_74

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_74_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_74_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_74_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_72
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_72

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_72_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_72_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_72_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_70
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_70

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_70_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_70_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_70_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_86
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_86

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_86_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_86_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_86_res);
	return result;
}

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83_merged_banks_2_cache {
	// RAM Box: {[0, 71], [0, 69], [1, 1]}
	// Capacity: 74
	// # of read delays: 2
  // 0, 73
	hw_uint<16> f0;
	fifo<hw_uint<16>, 72> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_72() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_73() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 72
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 72 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81_merged_banks_2_cache {
	// RAM Box: {[0, 71], [0, 69], [2, 2]}
	// Capacity: 74
	// # of read delays: 2
  // 0, 73
	hw_uint<16> f0;
	fifo<hw_uint<16>, 72> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_72() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_73() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 72
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 72 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79_merged_banks_2_cache {
	// RAM Box: {[0, 71], [1, 70], [0, 0]}
	// Capacity: 74
	// # of read delays: 2
  // 0, 73
	hw_uint<16> f0;
	fifo<hw_uint<16>, 72> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_72() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_73() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 72
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 72 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77_merged_banks_2_cache {
	// RAM Box: {[0, 71], [1, 70], [1, 1]}
	// Capacity: 74
	// # of read delays: 2
  // 0, 73
	hw_uint<16> f0;
	fifo<hw_uint<16>, 72> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_72() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_73() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 72
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 72 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75_merged_banks_2_cache {
	// RAM Box: {[0, 71], [1, 70], [2, 2]}
	// Capacity: 74
	// # of read delays: 2
  // 0, 73
	hw_uint<16> f0;
	fifo<hw_uint<16>, 72> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_72() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_73() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 72
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 72 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73_merged_banks_2_cache {
	// RAM Box: {[0, 71], [2, 71], [0, 0]}
	// Capacity: 74
	// # of read delays: 2
  // 0, 73
	hw_uint<16> f0;
	fifo<hw_uint<16>, 72> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_72() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_73() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 72
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 72 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71_merged_banks_2_cache {
	// RAM Box: {[0, 71], [2, 71], [1, 1]}
	// Capacity: 74
	// # of read delays: 2
  // 0, 73
	hw_uint<16> f0;
	fifo<hw_uint<16>, 72> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_72() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_73() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 72
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 72 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85_merged_banks_2_cache {
	// RAM Box: {[0, 71], [0, 69], [0, 0]}
	// Capacity: 74
	// # of read delays: 2
  // 0, 73
	hw_uint<16> f0;
	fifo<hw_uint<16>, 72> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_72() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_73() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 72
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 72 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69_merged_banks_2_cache {
	// RAM Box: {[0, 71], [2, 71], [2, 2]}
	// Capacity: 74
	// # of read delays: 2
  // 0, 73
	hw_uint<16> f0;
	fifo<hw_uint<16>, 72> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_72() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_73() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 72
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 72 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_cache {
  // Reader addrs...
    // { op_hcompute_gray_stencil[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 3gray_s0_x_x, 1] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 23 }
    // { op_hcompute_gray_stencil[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 3gray_s0_x_x, 2] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 23 }
    // { op_hcompute_gray_stencil[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 3gray_s0_x_x, 0] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 23 }
    // { op_hcompute_gray_stencil_1[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 1 + 3gray_s0_x_x, 1] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 23 }
    // { op_hcompute_gray_stencil_1[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 1 + 3gray_s0_x_x, 2] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 23 }
    // { op_hcompute_gray_stencil_1[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 1 + 3gray_s0_x_x, 0] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 23 }
    // { op_hcompute_gray_stencil_2[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 2 + 3gray_s0_x_x, 1] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 23 }
    // { op_hcompute_gray_stencil_2[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 2 + 3gray_s0_x_x, 2] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 23 }
    // { op_hcompute_gray_stencil_2[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 2 + 3gray_s0_x_x, 0] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 23 }
    // { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> hw_input_global_wrapper_global_wrapper_stencil[3 + hw_output_s0_y_yi, 3 + 3hw_output_s0_x_xi_xi, 1] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_glb_stencil_2[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> hw_input_global_wrapper_global_wrapper_stencil[3 + hw_output_s0_y_yi, 3 + 3hw_output_s0_x_xi_xi, 2] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_glb_stencil_3[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> hw_input_global_wrapper_global_wrapper_stencil[3 + hw_output_s0_y_yi, 4 + 3hw_output_s0_x_xi_xi, 0] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_glb_stencil_4[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> hw_input_global_wrapper_global_wrapper_stencil[3 + hw_output_s0_y_yi, 4 + 3hw_output_s0_x_xi_xi, 1] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_glb_stencil_5[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> hw_input_global_wrapper_global_wrapper_stencil[3 + hw_output_s0_y_yi, 4 + 3hw_output_s0_x_xi_xi, 2] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> hw_input_global_wrapper_global_wrapper_stencil[3 + hw_output_s0_y_yi, 3 + 3hw_output_s0_x_xi_xi, 0] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_glb_stencil_6[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> hw_input_global_wrapper_global_wrapper_stencil[3 + hw_output_s0_y_yi, 5 + 3hw_output_s0_x_xi_xi, 0] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_glb_stencil_7[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> hw_input_global_wrapper_global_wrapper_stencil[3 + hw_output_s0_y_yi, 5 + 3hw_output_s0_x_xi_xi, 1] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_glb_stencil_8[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> hw_input_global_wrapper_global_wrapper_stencil[3 + hw_output_s0_y_yi, 5 + 3hw_output_s0_x_xi_xi, 2] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // # of banks: 9
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83_merged_banks_2_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83_merged_banks_2;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81_merged_banks_2_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81_merged_banks_2;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79_merged_banks_2_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79_merged_banks_2;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77_merged_banks_2_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77_merged_banks_2;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75_merged_banks_2_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75_merged_banks_2;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73_merged_banks_2_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73_merged_banks_2;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71_merged_banks_2_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71_merged_banks_2;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85_merged_banks_2_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85_merged_banks_2;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69_merged_banks_2_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69_merged_banks_2;
};



inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83_merged_banks_2.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81_merged_banks_2.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79_merged_banks_2.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77_merged_banks_2.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75_merged_banks_2.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73_merged_banks_2.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71_merged_banks_2.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85_merged_banks_2.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69_merged_banks_2.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69);
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_114_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_114 read pattern: { op_hcompute_gray_stencil[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 3gray_s0_x_x, 1] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 23 }
  // Read schedule : { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 10] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83_merged_banks_2.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_115_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_115 read pattern: { op_hcompute_gray_stencil[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 3gray_s0_x_x, 2] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 23 }
  // Read schedule : { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 11] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81_merged_banks_2.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_116_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_116 read pattern: { op_hcompute_gray_stencil[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 3gray_s0_x_x, 0] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 23 }
  // Read schedule : { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 9] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85_merged_banks_2.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_110_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_110 read pattern: { op_hcompute_gray_stencil_1[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 1 + 3gray_s0_x_x, 1] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 23 }
  // Read schedule : { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77_merged_banks_2.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_111_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_111 read pattern: { op_hcompute_gray_stencil_1[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 1 + 3gray_s0_x_x, 2] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 23 }
  // Read schedule : { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 14] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75_merged_banks_2.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_112_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_112 read pattern: { op_hcompute_gray_stencil_1[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 1 + 3gray_s0_x_x, 0] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 23 }
  // Read schedule : { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79_merged_banks_2.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_106_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_106 read pattern: { op_hcompute_gray_stencil_2[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 2 + 3gray_s0_x_x, 1] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 23 }
  // Read schedule : { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 16] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71_merged_banks_2.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_107_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_107 read pattern: { op_hcompute_gray_stencil_2[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 2 + 3gray_s0_x_x, 2] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 23 }
  // Read schedule : { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8[d0 = 0, d1, d2] -> [0, d1, d2, 17] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69_merged_banks_2.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_108_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_108 read pattern: { op_hcompute_gray_stencil_2[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 2 + 3gray_s0_x_x, 0] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 23 }
  // Read schedule : { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 15] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73_merged_banks_2.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_1_64_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_1_64 read pattern: { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> hw_input_global_wrapper_global_wrapper_stencil[3 + hw_output_s0_y_yi, 3 + 3hw_output_s0_x_xi_xi, 1] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 37] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 10] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83_merged_banks_2.peek_73();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_2_61_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_2_61 read pattern: { op_hcompute_hw_output_glb_stencil_2[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> hw_input_global_wrapper_global_wrapper_stencil[3 + hw_output_s0_y_yi, 3 + 3hw_output_s0_x_xi_xi, 2] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 38] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 11] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81_merged_banks_2.peek_73();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_3_58_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_3_58 read pattern: { op_hcompute_hw_output_glb_stencil_3[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> hw_input_global_wrapper_global_wrapper_stencil[3 + hw_output_s0_y_yi, 4 + 3hw_output_s0_x_xi_xi, 0] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 39] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79_merged_banks_2.peek_73();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_4_55_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_4_55 read pattern: { op_hcompute_hw_output_glb_stencil_4[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> hw_input_global_wrapper_global_wrapper_stencil[3 + hw_output_s0_y_yi, 4 + 3hw_output_s0_x_xi_xi, 1] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 40] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77_merged_banks_2.peek_73();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_5_52_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_5_52 read pattern: { op_hcompute_hw_output_glb_stencil_5[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> hw_input_global_wrapper_global_wrapper_stencil[3 + hw_output_s0_y_yi, 4 + 3hw_output_s0_x_xi_xi, 2] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 41] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 14] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75_merged_banks_2.peek_73();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_67_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_67 read pattern: { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> hw_input_global_wrapper_global_wrapper_stencil[3 + hw_output_s0_y_yi, 3 + 3hw_output_s0_x_xi_xi, 0] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 36] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 9] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85_merged_banks_2.peek_73();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_6_49_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_6_49 read pattern: { op_hcompute_hw_output_glb_stencil_6[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> hw_input_global_wrapper_global_wrapper_stencil[3 + hw_output_s0_y_yi, 5 + 3hw_output_s0_x_xi_xi, 0] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 42] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 15] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73_merged_banks_2.peek_73();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_7_46_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_7_46 read pattern: { op_hcompute_hw_output_glb_stencil_7[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> hw_input_global_wrapper_global_wrapper_stencil[3 + hw_output_s0_y_yi, 5 + 3hw_output_s0_x_xi_xi, 1] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 43] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 16] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71_merged_banks_2.peek_73();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_8_43_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_8_43 read pattern: { op_hcompute_hw_output_glb_stencil_8[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> hw_input_global_wrapper_global_wrapper_stencil[3 + hw_output_s0_y_yi, 5 + 3hw_output_s0_x_xi_xi, 2] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_8[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 44] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8[d0 = 0, d1, d2] -> [0, d1, d2, 17] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69_merged_banks_2.peek_73();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69;
  return 0;
}

// # of bundles = 21
// op_hcompute_gray_stencil_1_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_110
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_111
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_112
inline hw_uint<48> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_110
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_111
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_112

	hw_uint<48> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_110_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_110_select(hw_input_global_wrapper_global_wrapper_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
	set_at<0, 48>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_110_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_111_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_111_select(hw_input_global_wrapper_global_wrapper_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
	set_at<16, 48>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_111_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_112_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_112_select(hw_input_global_wrapper_global_wrapper_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
	set_at<32, 48>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_112_res);
	return result;
}

// op_hcompute_gray_stencil_2_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_106
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_107
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_108
inline hw_uint<48> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_106
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_107
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_108

	hw_uint<48> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_106_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_106_select(hw_input_global_wrapper_global_wrapper_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
	set_at<0, 48>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_106_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_107_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_107_select(hw_input_global_wrapper_global_wrapper_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
	set_at<16, 48>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_107_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_108_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_108_select(hw_input_global_wrapper_global_wrapper_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
	set_at<32, 48>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_108_res);
	return result;
}

// op_hcompute_gray_stencil_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_114
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_115
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_116
inline hw_uint<48> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_114
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_115
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_116

	hw_uint<48> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_114_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_114_select(hw_input_global_wrapper_global_wrapper_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
	set_at<0, 48>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_114_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_115_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_115_select(hw_input_global_wrapper_global_wrapper_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
	set_at<16, 48>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_115_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_116_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_116_select(hw_input_global_wrapper_global_wrapper_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
	set_at<32, 48>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_116_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_1_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_1_64
inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_1_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_1_64

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_1_64_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_1_64_select(hw_input_global_wrapper_global_wrapper_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_1_64_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_2_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_2_61
inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_2_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_2_61

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_2_61_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_2_61_select(hw_input_global_wrapper_global_wrapper_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_2_61_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_3_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_3_58
inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_3_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_3_58

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_3_58_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_3_58_select(hw_input_global_wrapper_global_wrapper_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_3_58_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_4_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_4_55
inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_4_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_4_55

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_4_55_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_4_55_select(hw_input_global_wrapper_global_wrapper_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_4_55_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_5_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_5_52
inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_5_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_5_52

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_5_52_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_5_52_select(hw_input_global_wrapper_global_wrapper_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_5_52_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_6_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_6_49
inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_6_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_6_49

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_6_49_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_6_49_select(hw_input_global_wrapper_global_wrapper_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_6_49_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_7_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_7_46
inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_7_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_7_46

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_7_46_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_7_46_select(hw_input_global_wrapper_global_wrapper_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_7_46_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_8_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_8_43
inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_8_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_8_43

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_8_43_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_8_43_select(hw_input_global_wrapper_global_wrapper_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_8_43_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_67
inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_67

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_67_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_67_select(hw_input_global_wrapper_global_wrapper_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_67_res);
	return result;
}

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_63_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_39_cache {
	// RAM Box: {[0, 65], [0, 63], [1, 1]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_60_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_37_cache {
	// RAM Box: {[0, 65], [0, 63], [2, 2]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_57_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_35_cache {
	// RAM Box: {[0, 65], [1, 64], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_66_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_41_cache {
	// RAM Box: {[0, 65], [0, 63], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_54_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_33_cache {
	// RAM Box: {[0, 65], [1, 64], [1, 1]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_51_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_31_cache {
	// RAM Box: {[0, 65], [1, 64], [2, 2]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_48_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_29_cache {
	// RAM Box: {[0, 65], [2, 65], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_45_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_27_cache {
	// RAM Box: {[0, 65], [2, 65], [1, 1]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_42_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_25_cache {
	// RAM Box: {[0, 65], [2, 65], [2, 2]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_cache {
  // Reader addrs...
    // { op_hcompute_hw_output_global_wrapper_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 3hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_global_wrapper_stencil_2[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 3hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_global_wrapper_stencil_3[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 1 + 3hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_global_wrapper_stencil[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 3hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_global_wrapper_stencil_4[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 1 + 3hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_global_wrapper_stencil_5[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 1 + 3hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_global_wrapper_stencil_6[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 2 + 3hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_global_wrapper_stencil_7[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 2 + 3hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_global_wrapper_stencil_8[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 2 + 3hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
  // # of banks: 9
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_63_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_39_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_63_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_39;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_60_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_37_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_60_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_37;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_57_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_35_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_57_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_35;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_66_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_41_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_66_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_41;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_54_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_33_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_54_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_33;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_51_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_31_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_51_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_31;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_48_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_29_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_48_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_29;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_45_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_27_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_45_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_27;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_42_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_25_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_42_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_25;
};



inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_63_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_63, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_63_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_39.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_63);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_60_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_60, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_60_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_37.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_60);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_57_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_57, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_57_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_35.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_57);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_54_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_54, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_54_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_33.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_54);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_51_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_51, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_51_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_31.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_51);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_66_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_66, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_66_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_41.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_66);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_48_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_48, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_48_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_29.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_48);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_45_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_45, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_45_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_27.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_45);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_42_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_42, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_42_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_25.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_42);
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_39_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_39 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 3hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 46] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 37] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_63 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_63_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_39.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_63;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_37_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_37 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_2[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 3hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 47] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 38] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_60 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_60_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_37.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_60;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_35_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_35 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_3[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 1 + 3hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 48] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 39] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_57 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_57_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_35.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_57;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_41_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_41 read pattern: { op_hcompute_hw_output_global_wrapper_stencil[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 3hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 45] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 36] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_66 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_66_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_41.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_66;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_33_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_33 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_4[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 1 + 3hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 49] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 40] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_54 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_54_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_33.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_54;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_31_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_31 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_5[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 1 + 3hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 50] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 41] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_51 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_51_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_31.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_51;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_29_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_29 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_6[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 2 + 3hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 51] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 42] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_48 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_48_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_29.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_48;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_27_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_27 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_7[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 2 + 3hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 52] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 43] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_45 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_45_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_27.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_45;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_25_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_25 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_8[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 2 + 3hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_8[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 53] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_8[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 44] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_42 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_42_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_25.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_42;
  return 0;
}

// # of bundles = 18
// op_hcompute_hw_output_glb_stencil_1_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_63
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_1_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_63_res = op_hcompute_hw_output_glb_stencil_1_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_63_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_63_res, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_2_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_60
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_2_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_60_res = op_hcompute_hw_output_glb_stencil_2_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_60_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_60_res, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_3_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_57
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_3_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_57_res = op_hcompute_hw_output_glb_stencil_3_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_57_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_57_res, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_4_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_54
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_4_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_54_res = op_hcompute_hw_output_glb_stencil_4_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_54_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_54_res, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_5_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_51
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_5_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_51_res = op_hcompute_hw_output_glb_stencil_5_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_51_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_51_res, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_6_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_48
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_6_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_48_res = op_hcompute_hw_output_glb_stencil_6_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_48_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_48_res, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_7_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_45
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_7_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_45_res = op_hcompute_hw_output_glb_stencil_7_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_45_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_45_res, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_8_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_42
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_8_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_42_res = op_hcompute_hw_output_glb_stencil_8_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_42_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_42_res, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_66
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_66_res = op_hcompute_hw_output_glb_stencil_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_66_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_66_res, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_global_wrapper_stencil_1_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_39
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_39

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_39_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_39_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_39_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_2_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_37
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_37

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_37_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_37_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_37_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_3_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_35
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_35

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_35_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_35_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_35_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_4_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_33
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_33

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_33_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_33_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_33_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_5_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_31
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_31

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_31_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_31_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_31_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_6_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_29
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_29

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_29_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_29_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_29_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_7_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_27
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_27

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_27_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_27_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_27_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_8_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_25
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_25

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_25_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_25_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_25_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_41
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_41

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_41_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_41_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_41_res);
	return result;
}

struct ratio_stencil_op_hcompute_ratio_stencil_21_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_1_65_cache {
	// RAM Box: {[0, 65], [0, 63]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct ratio_stencil_op_hcompute_ratio_stencil_21_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_2_62_cache {
	// RAM Box: {[0, 65], [0, 63]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct ratio_stencil_op_hcompute_ratio_stencil_1_18_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_3_59_cache {
	// RAM Box: {[0, 65], [1, 64]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct ratio_stencil_op_hcompute_ratio_stencil_1_18_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_4_56_cache {
	// RAM Box: {[0, 65], [1, 64]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct ratio_stencil_op_hcompute_ratio_stencil_1_18_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_5_53_cache {
	// RAM Box: {[0, 65], [1, 64]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct ratio_stencil_op_hcompute_ratio_stencil_21_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_68_cache {
	// RAM Box: {[0, 65], [0, 63]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct ratio_stencil_op_hcompute_ratio_stencil_2_15_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_6_50_cache {
	// RAM Box: {[0, 65], [2, 65]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct ratio_stencil_op_hcompute_ratio_stencil_2_15_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_7_47_cache {
	// RAM Box: {[0, 65], [2, 65]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct ratio_stencil_op_hcompute_ratio_stencil_2_15_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_8_44_cache {
	// RAM Box: {[0, 65], [2, 65]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct ratio_stencil_cache {
  // Reader addrs...
    // { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> ratio_stencil[hw_output_s0_y_yi, 3hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_glb_stencil_2[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> ratio_stencil[hw_output_s0_y_yi, 3hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_glb_stencil_3[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> ratio_stencil[hw_output_s0_y_yi, 1 + 3hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_glb_stencil_4[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> ratio_stencil[hw_output_s0_y_yi, 1 + 3hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_glb_stencil_5[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> ratio_stencil[hw_output_s0_y_yi, 1 + 3hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> ratio_stencil[hw_output_s0_y_yi, 3hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_glb_stencil_6[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> ratio_stencil[hw_output_s0_y_yi, 2 + 3hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_glb_stencil_7[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> ratio_stencil[hw_output_s0_y_yi, 2 + 3hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
    // { op_hcompute_hw_output_glb_stencil_8[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> ratio_stencil[hw_output_s0_y_yi, 2 + 3hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // # of banks: 9
  ratio_stencil_op_hcompute_ratio_stencil_21_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_1_65_cache ratio_stencil_op_hcompute_ratio_stencil_21_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_1_65;
  ratio_stencil_op_hcompute_ratio_stencil_21_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_2_62_cache ratio_stencil_op_hcompute_ratio_stencil_21_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_2_62;
  ratio_stencil_op_hcompute_ratio_stencil_1_18_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_3_59_cache ratio_stencil_op_hcompute_ratio_stencil_1_18_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_3_59;
  ratio_stencil_op_hcompute_ratio_stencil_1_18_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_4_56_cache ratio_stencil_op_hcompute_ratio_stencil_1_18_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_4_56;
  ratio_stencil_op_hcompute_ratio_stencil_1_18_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_5_53_cache ratio_stencil_op_hcompute_ratio_stencil_1_18_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_5_53;
  ratio_stencil_op_hcompute_ratio_stencil_21_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_68_cache ratio_stencil_op_hcompute_ratio_stencil_21_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_68;
  ratio_stencil_op_hcompute_ratio_stencil_2_15_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_6_50_cache ratio_stencil_op_hcompute_ratio_stencil_2_15_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_6_50;
  ratio_stencil_op_hcompute_ratio_stencil_2_15_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_7_47_cache ratio_stencil_op_hcompute_ratio_stencil_2_15_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_7_47;
  ratio_stencil_op_hcompute_ratio_stencil_2_15_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_8_44_cache ratio_stencil_op_hcompute_ratio_stencil_2_15_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_8_44;
};



inline void ratio_stencil_op_hcompute_ratio_stencil_1_18_write(hw_uint<16>& ratio_stencil_op_hcompute_ratio_stencil_1_18, ratio_stencil_cache& ratio_stencil, int root, int ratio_s0_y, int ratio_s0_x_x, int dynamic_address) {
  ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_1_18_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_3_59.push(ratio_stencil_op_hcompute_ratio_stencil_1_18);
  ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_1_18_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_4_56.push(ratio_stencil_op_hcompute_ratio_stencil_1_18);
  ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_1_18_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_5_53.push(ratio_stencil_op_hcompute_ratio_stencil_1_18);
}

inline void ratio_stencil_op_hcompute_ratio_stencil_21_write(hw_uint<16>& ratio_stencil_op_hcompute_ratio_stencil_21, ratio_stencil_cache& ratio_stencil, int root, int ratio_s0_y, int ratio_s0_x_x, int dynamic_address) {
  ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_21_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_1_65.push(ratio_stencil_op_hcompute_ratio_stencil_21);
  ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_21_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_2_62.push(ratio_stencil_op_hcompute_ratio_stencil_21);
  ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_21_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_68.push(ratio_stencil_op_hcompute_ratio_stencil_21);
}

inline void ratio_stencil_op_hcompute_ratio_stencil_2_15_write(hw_uint<16>& ratio_stencil_op_hcompute_ratio_stencil_2_15, ratio_stencil_cache& ratio_stencil, int root, int ratio_s0_y, int ratio_s0_x_x, int dynamic_address) {
  ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_2_15_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_6_50.push(ratio_stencil_op_hcompute_ratio_stencil_2_15);
  ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_2_15_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_7_47.push(ratio_stencil_op_hcompute_ratio_stencil_2_15);
  ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_2_15_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_8_44.push(ratio_stencil_op_hcompute_ratio_stencil_2_15);
}

inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_1_65_select(ratio_stencil_cache& ratio_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // ratio_stencil_op_hcompute_hw_output_glb_stencil_1_65 read pattern: { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> ratio_stencil[hw_output_s0_y_yi, 3hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 37] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_ratio_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 33] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_ratio_stencil_op_hcompute_ratio_stencil_21 = ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_21_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_1_65.peek(/* one reader or all rams */ 0);
  return value_ratio_stencil_op_hcompute_ratio_stencil_21;
  return 0;
}

inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_2_62_select(ratio_stencil_cache& ratio_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // ratio_stencil_op_hcompute_hw_output_glb_stencil_2_62 read pattern: { op_hcompute_hw_output_glb_stencil_2[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> ratio_stencil[hw_output_s0_y_yi, 3hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 38] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_ratio_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 33] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_ratio_stencil_op_hcompute_ratio_stencil_21 = ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_21_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_2_62.peek(/* one reader or all rams */ 0);
  return value_ratio_stencil_op_hcompute_ratio_stencil_21;
  return 0;
}

inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_3_59_select(ratio_stencil_cache& ratio_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // ratio_stencil_op_hcompute_hw_output_glb_stencil_3_59 read pattern: { op_hcompute_hw_output_glb_stencil_3[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> ratio_stencil[hw_output_s0_y_yi, 1 + 3hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 39] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_ratio_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 34] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_ratio_stencil_op_hcompute_ratio_stencil_1_18 = ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_1_18_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_3_59.peek(/* one reader or all rams */ 0);
  return value_ratio_stencil_op_hcompute_ratio_stencil_1_18;
  return 0;
}

inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_4_56_select(ratio_stencil_cache& ratio_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // ratio_stencil_op_hcompute_hw_output_glb_stencil_4_56 read pattern: { op_hcompute_hw_output_glb_stencil_4[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> ratio_stencil[hw_output_s0_y_yi, 1 + 3hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 40] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_ratio_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 34] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_ratio_stencil_op_hcompute_ratio_stencil_1_18 = ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_1_18_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_4_56.peek(/* one reader or all rams */ 0);
  return value_ratio_stencil_op_hcompute_ratio_stencil_1_18;
  return 0;
}

inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_5_53_select(ratio_stencil_cache& ratio_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // ratio_stencil_op_hcompute_hw_output_glb_stencil_5_53 read pattern: { op_hcompute_hw_output_glb_stencil_5[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> ratio_stencil[hw_output_s0_y_yi, 1 + 3hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 41] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_ratio_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 34] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_ratio_stencil_op_hcompute_ratio_stencil_1_18 = ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_1_18_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_5_53.peek(/* one reader or all rams */ 0);
  return value_ratio_stencil_op_hcompute_ratio_stencil_1_18;
  return 0;
}

inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_68_select(ratio_stencil_cache& ratio_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // ratio_stencil_op_hcompute_hw_output_glb_stencil_68 read pattern: { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> ratio_stencil[hw_output_s0_y_yi, 3hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 36] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_ratio_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 33] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_ratio_stencil_op_hcompute_ratio_stencil_21 = ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_21_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_68.peek(/* one reader or all rams */ 0);
  return value_ratio_stencil_op_hcompute_ratio_stencil_21;
  return 0;
}

inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_6_50_select(ratio_stencil_cache& ratio_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // ratio_stencil_op_hcompute_hw_output_glb_stencil_6_50 read pattern: { op_hcompute_hw_output_glb_stencil_6[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> ratio_stencil[hw_output_s0_y_yi, 2 + 3hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 42] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_ratio_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 35] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_ratio_stencil_op_hcompute_ratio_stencil_2_15 = ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_2_15_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_6_50.peek(/* one reader or all rams */ 0);
  return value_ratio_stencil_op_hcompute_ratio_stencil_2_15;
  return 0;
}

inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_7_47_select(ratio_stencil_cache& ratio_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // ratio_stencil_op_hcompute_hw_output_glb_stencil_7_47 read pattern: { op_hcompute_hw_output_glb_stencil_7[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> ratio_stencil[hw_output_s0_y_yi, 2 + 3hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 43] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_ratio_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 35] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_ratio_stencil_op_hcompute_ratio_stencil_2_15 = ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_2_15_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_7_47.peek(/* one reader or all rams */ 0);
  return value_ratio_stencil_op_hcompute_ratio_stencil_2_15;
  return 0;
}

inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_8_44_select(ratio_stencil_cache& ratio_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // ratio_stencil_op_hcompute_hw_output_glb_stencil_8_44 read pattern: { op_hcompute_hw_output_glb_stencil_8[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> ratio_stencil[hw_output_s0_y_yi, 2 + 3hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 21 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_8[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 44] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_ratio_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 35] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_ratio_stencil_op_hcompute_ratio_stencil_2_15 = ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_2_15_to_ratio_stencil_op_hcompute_hw_output_glb_stencil_8_44.peek(/* one reader or all rams */ 0);
  return value_ratio_stencil_op_hcompute_ratio_stencil_2_15;
  return 0;
}

// # of bundles = 12
// op_hcompute_hw_output_glb_stencil_1_read
//	ratio_stencil_op_hcompute_hw_output_glb_stencil_1_65
inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_1_read_bundle_read(ratio_stencil_cache& ratio_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // ratio_stencil_op_hcompute_hw_output_glb_stencil_1_65

	hw_uint<16> result;
	hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_1_65_res = ratio_stencil_op_hcompute_hw_output_glb_stencil_1_65_select(ratio_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, ratio_stencil_op_hcompute_hw_output_glb_stencil_1_65_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_2_read
//	ratio_stencil_op_hcompute_hw_output_glb_stencil_2_62
inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_2_read_bundle_read(ratio_stencil_cache& ratio_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // ratio_stencil_op_hcompute_hw_output_glb_stencil_2_62

	hw_uint<16> result;
	hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_2_62_res = ratio_stencil_op_hcompute_hw_output_glb_stencil_2_62_select(ratio_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, ratio_stencil_op_hcompute_hw_output_glb_stencil_2_62_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_3_read
//	ratio_stencil_op_hcompute_hw_output_glb_stencil_3_59
inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_3_read_bundle_read(ratio_stencil_cache& ratio_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // ratio_stencil_op_hcompute_hw_output_glb_stencil_3_59

	hw_uint<16> result;
	hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_3_59_res = ratio_stencil_op_hcompute_hw_output_glb_stencil_3_59_select(ratio_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, ratio_stencil_op_hcompute_hw_output_glb_stencil_3_59_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_4_read
//	ratio_stencil_op_hcompute_hw_output_glb_stencil_4_56
inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_4_read_bundle_read(ratio_stencil_cache& ratio_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // ratio_stencil_op_hcompute_hw_output_glb_stencil_4_56

	hw_uint<16> result;
	hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_4_56_res = ratio_stencil_op_hcompute_hw_output_glb_stencil_4_56_select(ratio_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, ratio_stencil_op_hcompute_hw_output_glb_stencil_4_56_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_5_read
//	ratio_stencil_op_hcompute_hw_output_glb_stencil_5_53
inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_5_read_bundle_read(ratio_stencil_cache& ratio_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // ratio_stencil_op_hcompute_hw_output_glb_stencil_5_53

	hw_uint<16> result;
	hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_5_53_res = ratio_stencil_op_hcompute_hw_output_glb_stencil_5_53_select(ratio_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, ratio_stencil_op_hcompute_hw_output_glb_stencil_5_53_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_6_read
//	ratio_stencil_op_hcompute_hw_output_glb_stencil_6_50
inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_6_read_bundle_read(ratio_stencil_cache& ratio_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // ratio_stencil_op_hcompute_hw_output_glb_stencil_6_50

	hw_uint<16> result;
	hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_6_50_res = ratio_stencil_op_hcompute_hw_output_glb_stencil_6_50_select(ratio_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, ratio_stencil_op_hcompute_hw_output_glb_stencil_6_50_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_7_read
//	ratio_stencil_op_hcompute_hw_output_glb_stencil_7_47
inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_7_read_bundle_read(ratio_stencil_cache& ratio_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // ratio_stencil_op_hcompute_hw_output_glb_stencil_7_47

	hw_uint<16> result;
	hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_7_47_res = ratio_stencil_op_hcompute_hw_output_glb_stencil_7_47_select(ratio_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, ratio_stencil_op_hcompute_hw_output_glb_stencil_7_47_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_8_read
//	ratio_stencil_op_hcompute_hw_output_glb_stencil_8_44
inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_8_read_bundle_read(ratio_stencil_cache& ratio_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // ratio_stencil_op_hcompute_hw_output_glb_stencil_8_44

	hw_uint<16> result;
	hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_8_44_res = ratio_stencil_op_hcompute_hw_output_glb_stencil_8_44_select(ratio_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, ratio_stencil_op_hcompute_hw_output_glb_stencil_8_44_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_read
//	ratio_stencil_op_hcompute_hw_output_glb_stencil_68
inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_read_bundle_read(ratio_stencil_cache& ratio_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // ratio_stencil_op_hcompute_hw_output_glb_stencil_68

	hw_uint<16> result;
	hw_uint<16> ratio_stencil_op_hcompute_hw_output_glb_stencil_68_res = ratio_stencil_op_hcompute_hw_output_glb_stencil_68_select(ratio_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, ratio_stencil_op_hcompute_hw_output_glb_stencil_68_res);
	return result;
}

// op_hcompute_ratio_stencil_1_write
//	ratio_stencil_op_hcompute_ratio_stencil_1_18
inline void ratio_stencil_op_hcompute_ratio_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_ratio_stencil_1_write, ratio_stencil_cache& ratio_stencil, int root, int ratio_s0_y, int ratio_s0_x_x, int dynamic_address) {
	hw_uint<16> ratio_stencil_op_hcompute_ratio_stencil_1_18_res = op_hcompute_ratio_stencil_1_write.extract<0, 15>();
	ratio_stencil_op_hcompute_ratio_stencil_1_18_write(ratio_stencil_op_hcompute_ratio_stencil_1_18_res, ratio_stencil, root, ratio_s0_y, ratio_s0_x_x, dynamic_address);
}

// op_hcompute_ratio_stencil_2_write
//	ratio_stencil_op_hcompute_ratio_stencil_2_15
inline void ratio_stencil_op_hcompute_ratio_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_ratio_stencil_2_write, ratio_stencil_cache& ratio_stencil, int root, int ratio_s0_y, int ratio_s0_x_x, int dynamic_address) {
	hw_uint<16> ratio_stencil_op_hcompute_ratio_stencil_2_15_res = op_hcompute_ratio_stencil_2_write.extract<0, 15>();
	ratio_stencil_op_hcompute_ratio_stencil_2_15_write(ratio_stencil_op_hcompute_ratio_stencil_2_15_res, ratio_stencil, root, ratio_s0_y, ratio_s0_x_x, dynamic_address);
}

// op_hcompute_ratio_stencil_write
//	ratio_stencil_op_hcompute_ratio_stencil_21
inline void ratio_stencil_op_hcompute_ratio_stencil_write_bundle_write(hw_uint<16>& op_hcompute_ratio_stencil_write, ratio_stencil_cache& ratio_stencil, int root, int ratio_s0_y, int ratio_s0_x_x, int dynamic_address) {
	hw_uint<16> ratio_stencil_op_hcompute_ratio_stencil_21_res = op_hcompute_ratio_stencil_write.extract<0, 15>();
	ratio_stencil_op_hcompute_ratio_stencil_21_write(ratio_stencil_op_hcompute_ratio_stencil_21_res, ratio_stencil, root, ratio_s0_y, ratio_s0_x_x, dynamic_address);
}

struct reciprocal_stencil_op_hcompute_reciprocal_stencil_1_11_to_reciprocal_stencil_op_hcompute_ratio_stencil_1_19_cache {
	// RAM Box: {[0, 65], [1, 64]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct reciprocal_stencil_op_hcompute_reciprocal_stencil_13_to_reciprocal_stencil_op_hcompute_ratio_stencil_22_cache {
	// RAM Box: {[0, 65], [0, 63]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct reciprocal_stencil_op_hcompute_reciprocal_stencil_2_9_to_reciprocal_stencil_op_hcompute_ratio_stencil_2_16_cache {
	// RAM Box: {[0, 65], [2, 65]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct reciprocal_stencil_cache {
  // Reader addrs...
    // { op_hcompute_ratio_stencil_1[root = 0, ratio_s0_y, ratio_s0_x_x] -> reciprocal_stencil[ratio_s0_y, 1 + 3ratio_s0_x_x] : 0 <= ratio_s0_y <= 65 and 0 <= ratio_s0_x_x <= 21 }
    // { op_hcompute_ratio_stencil[root = 0, ratio_s0_y, ratio_s0_x_x] -> reciprocal_stencil[ratio_s0_y, 3ratio_s0_x_x] : 0 <= ratio_s0_y <= 65 and 0 <= ratio_s0_x_x <= 21 }
    // { op_hcompute_ratio_stencil_2[root = 0, ratio_s0_y, ratio_s0_x_x] -> reciprocal_stencil[ratio_s0_y, 2 + 3ratio_s0_x_x] : 0 <= ratio_s0_y <= 65 and 0 <= ratio_s0_x_x <= 21 }
  // # of banks: 3
  reciprocal_stencil_op_hcompute_reciprocal_stencil_1_11_to_reciprocal_stencil_op_hcompute_ratio_stencil_1_19_cache reciprocal_stencil_op_hcompute_reciprocal_stencil_1_11_to_reciprocal_stencil_op_hcompute_ratio_stencil_1_19;
  reciprocal_stencil_op_hcompute_reciprocal_stencil_13_to_reciprocal_stencil_op_hcompute_ratio_stencil_22_cache reciprocal_stencil_op_hcompute_reciprocal_stencil_13_to_reciprocal_stencil_op_hcompute_ratio_stencil_22;
  reciprocal_stencil_op_hcompute_reciprocal_stencil_2_9_to_reciprocal_stencil_op_hcompute_ratio_stencil_2_16_cache reciprocal_stencil_op_hcompute_reciprocal_stencil_2_9_to_reciprocal_stencil_op_hcompute_ratio_stencil_2_16;
};



inline void reciprocal_stencil_op_hcompute_reciprocal_stencil_13_write(hw_uint<16>& reciprocal_stencil_op_hcompute_reciprocal_stencil_13, reciprocal_stencil_cache& reciprocal_stencil, int root, int reciprocal_s0_y, int reciprocal_s0_x_x, int dynamic_address) {
  reciprocal_stencil.reciprocal_stencil_op_hcompute_reciprocal_stencil_13_to_reciprocal_stencil_op_hcompute_ratio_stencil_22.push(reciprocal_stencil_op_hcompute_reciprocal_stencil_13);
}

inline void reciprocal_stencil_op_hcompute_reciprocal_stencil_1_11_write(hw_uint<16>& reciprocal_stencil_op_hcompute_reciprocal_stencil_1_11, reciprocal_stencil_cache& reciprocal_stencil, int root, int reciprocal_s0_y, int reciprocal_s0_x_x, int dynamic_address) {
  reciprocal_stencil.reciprocal_stencil_op_hcompute_reciprocal_stencil_1_11_to_reciprocal_stencil_op_hcompute_ratio_stencil_1_19.push(reciprocal_stencil_op_hcompute_reciprocal_stencil_1_11);
}

inline void reciprocal_stencil_op_hcompute_reciprocal_stencil_2_9_write(hw_uint<16>& reciprocal_stencil_op_hcompute_reciprocal_stencil_2_9, reciprocal_stencil_cache& reciprocal_stencil, int root, int reciprocal_s0_y, int reciprocal_s0_x_x, int dynamic_address) {
  reciprocal_stencil.reciprocal_stencil_op_hcompute_reciprocal_stencil_2_9_to_reciprocal_stencil_op_hcompute_ratio_stencil_2_16.push(reciprocal_stencil_op_hcompute_reciprocal_stencil_2_9);
}

inline hw_uint<16> reciprocal_stencil_op_hcompute_ratio_stencil_1_19_select(reciprocal_stencil_cache& reciprocal_stencil, int root, int ratio_s0_y, int ratio_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // reciprocal_stencil_op_hcompute_ratio_stencil_1_19 read pattern: { op_hcompute_ratio_stencil_1[root = 0, ratio_s0_y, ratio_s0_x_x] -> reciprocal_stencil[ratio_s0_y, 1 + 3ratio_s0_x_x] : 0 <= ratio_s0_y <= 65 and 0 <= ratio_s0_x_x <= 21 }
  // Read schedule : { op_hcompute_ratio_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 34] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_reciprocal_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 22] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_reciprocal_stencil_op_hcompute_reciprocal_stencil_1_11 = reciprocal_stencil.reciprocal_stencil_op_hcompute_reciprocal_stencil_1_11_to_reciprocal_stencil_op_hcompute_ratio_stencil_1_19.peek(/* one reader or all rams */ 0);
  return value_reciprocal_stencil_op_hcompute_reciprocal_stencil_1_11;
  return 0;
}

inline hw_uint<16> reciprocal_stencil_op_hcompute_ratio_stencil_22_select(reciprocal_stencil_cache& reciprocal_stencil, int root, int ratio_s0_y, int ratio_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // reciprocal_stencil_op_hcompute_ratio_stencil_22 read pattern: { op_hcompute_ratio_stencil[root = 0, ratio_s0_y, ratio_s0_x_x] -> reciprocal_stencil[ratio_s0_y, 3ratio_s0_x_x] : 0 <= ratio_s0_y <= 65 and 0 <= ratio_s0_x_x <= 21 }
  // Read schedule : { op_hcompute_ratio_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 33] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_reciprocal_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 21] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_reciprocal_stencil_op_hcompute_reciprocal_stencil_13 = reciprocal_stencil.reciprocal_stencil_op_hcompute_reciprocal_stencil_13_to_reciprocal_stencil_op_hcompute_ratio_stencil_22.peek(/* one reader or all rams */ 0);
  return value_reciprocal_stencil_op_hcompute_reciprocal_stencil_13;
  return 0;
}

inline hw_uint<16> reciprocal_stencil_op_hcompute_ratio_stencil_2_16_select(reciprocal_stencil_cache& reciprocal_stencil, int root, int ratio_s0_y, int ratio_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // reciprocal_stencil_op_hcompute_ratio_stencil_2_16 read pattern: { op_hcompute_ratio_stencil_2[root = 0, ratio_s0_y, ratio_s0_x_x] -> reciprocal_stencil[ratio_s0_y, 2 + 3ratio_s0_x_x] : 0 <= ratio_s0_y <= 65 and 0 <= ratio_s0_x_x <= 21 }
  // Read schedule : { op_hcompute_ratio_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 35] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_reciprocal_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 23] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_reciprocal_stencil_op_hcompute_reciprocal_stencil_2_9 = reciprocal_stencil.reciprocal_stencil_op_hcompute_reciprocal_stencil_2_9_to_reciprocal_stencil_op_hcompute_ratio_stencil_2_16.peek(/* one reader or all rams */ 0);
  return value_reciprocal_stencil_op_hcompute_reciprocal_stencil_2_9;
  return 0;
}

// # of bundles = 6
// op_hcompute_ratio_stencil_1_read
//	reciprocal_stencil_op_hcompute_ratio_stencil_1_19
inline hw_uint<16> reciprocal_stencil_op_hcompute_ratio_stencil_1_read_bundle_read(reciprocal_stencil_cache& reciprocal_stencil, int root, int ratio_s0_y, int ratio_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // reciprocal_stencil_op_hcompute_ratio_stencil_1_19

	hw_uint<16> result;
	hw_uint<16> reciprocal_stencil_op_hcompute_ratio_stencil_1_19_res = reciprocal_stencil_op_hcompute_ratio_stencil_1_19_select(reciprocal_stencil, root, ratio_s0_y, ratio_s0_x_x, dynamic_address);
	set_at<0, 16>(result, reciprocal_stencil_op_hcompute_ratio_stencil_1_19_res);
	return result;
}

// op_hcompute_ratio_stencil_2_read
//	reciprocal_stencil_op_hcompute_ratio_stencil_2_16
inline hw_uint<16> reciprocal_stencil_op_hcompute_ratio_stencil_2_read_bundle_read(reciprocal_stencil_cache& reciprocal_stencil, int root, int ratio_s0_y, int ratio_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // reciprocal_stencil_op_hcompute_ratio_stencil_2_16

	hw_uint<16> result;
	hw_uint<16> reciprocal_stencil_op_hcompute_ratio_stencil_2_16_res = reciprocal_stencil_op_hcompute_ratio_stencil_2_16_select(reciprocal_stencil, root, ratio_s0_y, ratio_s0_x_x, dynamic_address);
	set_at<0, 16>(result, reciprocal_stencil_op_hcompute_ratio_stencil_2_16_res);
	return result;
}

// op_hcompute_ratio_stencil_read
//	reciprocal_stencil_op_hcompute_ratio_stencil_22
inline hw_uint<16> reciprocal_stencil_op_hcompute_ratio_stencil_read_bundle_read(reciprocal_stencil_cache& reciprocal_stencil, int root, int ratio_s0_y, int ratio_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // reciprocal_stencil_op_hcompute_ratio_stencil_22

	hw_uint<16> result;
	hw_uint<16> reciprocal_stencil_op_hcompute_ratio_stencil_22_res = reciprocal_stencil_op_hcompute_ratio_stencil_22_select(reciprocal_stencil, root, ratio_s0_y, ratio_s0_x_x, dynamic_address);
	set_at<0, 16>(result, reciprocal_stencil_op_hcompute_ratio_stencil_22_res);
	return result;
}

// op_hcompute_reciprocal_stencil_1_write
//	reciprocal_stencil_op_hcompute_reciprocal_stencil_1_11
inline void reciprocal_stencil_op_hcompute_reciprocal_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_reciprocal_stencil_1_write, reciprocal_stencil_cache& reciprocal_stencil, int root, int reciprocal_s0_y, int reciprocal_s0_x_x, int dynamic_address) {
	hw_uint<16> reciprocal_stencil_op_hcompute_reciprocal_stencil_1_11_res = op_hcompute_reciprocal_stencil_1_write.extract<0, 15>();
	reciprocal_stencil_op_hcompute_reciprocal_stencil_1_11_write(reciprocal_stencil_op_hcompute_reciprocal_stencil_1_11_res, reciprocal_stencil, root, reciprocal_s0_y, reciprocal_s0_x_x, dynamic_address);
}

// op_hcompute_reciprocal_stencil_2_write
//	reciprocal_stencil_op_hcompute_reciprocal_stencil_2_9
inline void reciprocal_stencil_op_hcompute_reciprocal_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_reciprocal_stencil_2_write, reciprocal_stencil_cache& reciprocal_stencil, int root, int reciprocal_s0_y, int reciprocal_s0_x_x, int dynamic_address) {
	hw_uint<16> reciprocal_stencil_op_hcompute_reciprocal_stencil_2_9_res = op_hcompute_reciprocal_stencil_2_write.extract<0, 15>();
	reciprocal_stencil_op_hcompute_reciprocal_stencil_2_9_write(reciprocal_stencil_op_hcompute_reciprocal_stencil_2_9_res, reciprocal_stencil, root, reciprocal_s0_y, reciprocal_s0_x_x, dynamic_address);
}

// op_hcompute_reciprocal_stencil_write
//	reciprocal_stencil_op_hcompute_reciprocal_stencil_13
inline void reciprocal_stencil_op_hcompute_reciprocal_stencil_write_bundle_write(hw_uint<16>& op_hcompute_reciprocal_stencil_write, reciprocal_stencil_cache& reciprocal_stencil, int root, int reciprocal_s0_y, int reciprocal_s0_x_x, int dynamic_address) {
	hw_uint<16> reciprocal_stencil_op_hcompute_reciprocal_stencil_13_res = op_hcompute_reciprocal_stencil_write.extract<0, 15>();
	reciprocal_stencil_op_hcompute_reciprocal_stencil_13_write(reciprocal_stencil_op_hcompute_reciprocal_stencil_13_res, reciprocal_stencil, root, reciprocal_s0_y, reciprocal_s0_x_x, dynamic_address);
}

struct sharpen_stencil_op_hcompute_sharpen_stencil_1_3_to_sharpen_stencil_op_hcompute_ratio_stencil_1_20_cache {
	// RAM Box: {[0, 65], [1, 64]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct sharpen_stencil_op_hcompute_sharpen_stencil_6_to_sharpen_stencil_op_hcompute_ratio_stencil_23_cache {
	// RAM Box: {[0, 65], [0, 63]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct sharpen_stencil_op_hcompute_sharpen_stencil_2_0_to_sharpen_stencil_op_hcompute_ratio_stencil_2_17_cache {
	// RAM Box: {[0, 65], [2, 65]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct sharpen_stencil_cache {
  // Reader addrs...
    // { op_hcompute_ratio_stencil_1[root = 0, ratio_s0_y, ratio_s0_x_x] -> sharpen_stencil[ratio_s0_y, 1 + 3ratio_s0_x_x] : 0 <= ratio_s0_y <= 65 and 0 <= ratio_s0_x_x <= 21 }
    // { op_hcompute_ratio_stencil[root = 0, ratio_s0_y, ratio_s0_x_x] -> sharpen_stencil[ratio_s0_y, 3ratio_s0_x_x] : 0 <= ratio_s0_y <= 65 and 0 <= ratio_s0_x_x <= 21 }
    // { op_hcompute_ratio_stencil_2[root = 0, ratio_s0_y, ratio_s0_x_x] -> sharpen_stencil[ratio_s0_y, 2 + 3ratio_s0_x_x] : 0 <= ratio_s0_y <= 65 and 0 <= ratio_s0_x_x <= 21 }
  // # of banks: 3
  sharpen_stencil_op_hcompute_sharpen_stencil_1_3_to_sharpen_stencil_op_hcompute_ratio_stencil_1_20_cache sharpen_stencil_op_hcompute_sharpen_stencil_1_3_to_sharpen_stencil_op_hcompute_ratio_stencil_1_20;
  sharpen_stencil_op_hcompute_sharpen_stencil_6_to_sharpen_stencil_op_hcompute_ratio_stencil_23_cache sharpen_stencil_op_hcompute_sharpen_stencil_6_to_sharpen_stencil_op_hcompute_ratio_stencil_23;
  sharpen_stencil_op_hcompute_sharpen_stencil_2_0_to_sharpen_stencil_op_hcompute_ratio_stencil_2_17_cache sharpen_stencil_op_hcompute_sharpen_stencil_2_0_to_sharpen_stencil_op_hcompute_ratio_stencil_2_17;
};



inline void sharpen_stencil_op_hcompute_sharpen_stencil_1_3_write(hw_uint<16>& sharpen_stencil_op_hcompute_sharpen_stencil_1_3, sharpen_stencil_cache& sharpen_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x, int dynamic_address) {
  sharpen_stencil.sharpen_stencil_op_hcompute_sharpen_stencil_1_3_to_sharpen_stencil_op_hcompute_ratio_stencil_1_20.push(sharpen_stencil_op_hcompute_sharpen_stencil_1_3);
}

inline void sharpen_stencil_op_hcompute_sharpen_stencil_2_0_write(hw_uint<16>& sharpen_stencil_op_hcompute_sharpen_stencil_2_0, sharpen_stencil_cache& sharpen_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x, int dynamic_address) {
  sharpen_stencil.sharpen_stencil_op_hcompute_sharpen_stencil_2_0_to_sharpen_stencil_op_hcompute_ratio_stencil_2_17.push(sharpen_stencil_op_hcompute_sharpen_stencil_2_0);
}

inline void sharpen_stencil_op_hcompute_sharpen_stencil_6_write(hw_uint<16>& sharpen_stencil_op_hcompute_sharpen_stencil_6, sharpen_stencil_cache& sharpen_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x, int dynamic_address) {
  sharpen_stencil.sharpen_stencil_op_hcompute_sharpen_stencil_6_to_sharpen_stencil_op_hcompute_ratio_stencil_23.push(sharpen_stencil_op_hcompute_sharpen_stencil_6);
}

inline hw_uint<16> sharpen_stencil_op_hcompute_ratio_stencil_1_20_select(sharpen_stencil_cache& sharpen_stencil, int root, int ratio_s0_y, int ratio_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // sharpen_stencil_op_hcompute_ratio_stencil_1_20 read pattern: { op_hcompute_ratio_stencil_1[root = 0, ratio_s0_y, ratio_s0_x_x] -> sharpen_stencil[ratio_s0_y, 1 + 3ratio_s0_x_x] : 0 <= ratio_s0_y <= 65 and 0 <= ratio_s0_x_x <= 21 }
  // Read schedule : { op_hcompute_ratio_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 34] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_sharpen_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 31] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_sharpen_stencil_op_hcompute_sharpen_stencil_1_3 = sharpen_stencil.sharpen_stencil_op_hcompute_sharpen_stencil_1_3_to_sharpen_stencil_op_hcompute_ratio_stencil_1_20.peek(/* one reader or all rams */ 0);
  return value_sharpen_stencil_op_hcompute_sharpen_stencil_1_3;
  return 0;
}

inline hw_uint<16> sharpen_stencil_op_hcompute_ratio_stencil_23_select(sharpen_stencil_cache& sharpen_stencil, int root, int ratio_s0_y, int ratio_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // sharpen_stencil_op_hcompute_ratio_stencil_23 read pattern: { op_hcompute_ratio_stencil[root = 0, ratio_s0_y, ratio_s0_x_x] -> sharpen_stencil[ratio_s0_y, 3ratio_s0_x_x] : 0 <= ratio_s0_y <= 65 and 0 <= ratio_s0_x_x <= 21 }
  // Read schedule : { op_hcompute_ratio_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 33] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_sharpen_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 30] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_sharpen_stencil_op_hcompute_sharpen_stencil_6 = sharpen_stencil.sharpen_stencil_op_hcompute_sharpen_stencil_6_to_sharpen_stencil_op_hcompute_ratio_stencil_23.peek(/* one reader or all rams */ 0);
  return value_sharpen_stencil_op_hcompute_sharpen_stencil_6;
  return 0;
}

inline hw_uint<16> sharpen_stencil_op_hcompute_ratio_stencil_2_17_select(sharpen_stencil_cache& sharpen_stencil, int root, int ratio_s0_y, int ratio_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // sharpen_stencil_op_hcompute_ratio_stencil_2_17 read pattern: { op_hcompute_ratio_stencil_2[root = 0, ratio_s0_y, ratio_s0_x_x] -> sharpen_stencil[ratio_s0_y, 2 + 3ratio_s0_x_x] : 0 <= ratio_s0_y <= 65 and 0 <= ratio_s0_x_x <= 21 }
  // Read schedule : { op_hcompute_ratio_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 35] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  // Write schedule: { op_hcompute_sharpen_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 32] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
  auto value_sharpen_stencil_op_hcompute_sharpen_stencil_2_0 = sharpen_stencil.sharpen_stencil_op_hcompute_sharpen_stencil_2_0_to_sharpen_stencil_op_hcompute_ratio_stencil_2_17.peek(/* one reader or all rams */ 0);
  return value_sharpen_stencil_op_hcompute_sharpen_stencil_2_0;
  return 0;
}

// # of bundles = 6
// op_hcompute_ratio_stencil_1_read
//	sharpen_stencil_op_hcompute_ratio_stencil_1_20
inline hw_uint<16> sharpen_stencil_op_hcompute_ratio_stencil_1_read_bundle_read(sharpen_stencil_cache& sharpen_stencil, int root, int ratio_s0_y, int ratio_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // sharpen_stencil_op_hcompute_ratio_stencil_1_20

	hw_uint<16> result;
	hw_uint<16> sharpen_stencil_op_hcompute_ratio_stencil_1_20_res = sharpen_stencil_op_hcompute_ratio_stencil_1_20_select(sharpen_stencil, root, ratio_s0_y, ratio_s0_x_x, dynamic_address);
	set_at<0, 16>(result, sharpen_stencil_op_hcompute_ratio_stencil_1_20_res);
	return result;
}

// op_hcompute_ratio_stencil_2_read
//	sharpen_stencil_op_hcompute_ratio_stencil_2_17
inline hw_uint<16> sharpen_stencil_op_hcompute_ratio_stencil_2_read_bundle_read(sharpen_stencil_cache& sharpen_stencil, int root, int ratio_s0_y, int ratio_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // sharpen_stencil_op_hcompute_ratio_stencil_2_17

	hw_uint<16> result;
	hw_uint<16> sharpen_stencil_op_hcompute_ratio_stencil_2_17_res = sharpen_stencil_op_hcompute_ratio_stencil_2_17_select(sharpen_stencil, root, ratio_s0_y, ratio_s0_x_x, dynamic_address);
	set_at<0, 16>(result, sharpen_stencil_op_hcompute_ratio_stencil_2_17_res);
	return result;
}

// op_hcompute_ratio_stencil_read
//	sharpen_stencil_op_hcompute_ratio_stencil_23
inline hw_uint<16> sharpen_stencil_op_hcompute_ratio_stencil_read_bundle_read(sharpen_stencil_cache& sharpen_stencil, int root, int ratio_s0_y, int ratio_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // sharpen_stencil_op_hcompute_ratio_stencil_23

	hw_uint<16> result;
	hw_uint<16> sharpen_stencil_op_hcompute_ratio_stencil_23_res = sharpen_stencil_op_hcompute_ratio_stencil_23_select(sharpen_stencil, root, ratio_s0_y, ratio_s0_x_x, dynamic_address);
	set_at<0, 16>(result, sharpen_stencil_op_hcompute_ratio_stencil_23_res);
	return result;
}

// op_hcompute_sharpen_stencil_1_write
//	sharpen_stencil_op_hcompute_sharpen_stencil_1_3
inline void sharpen_stencil_op_hcompute_sharpen_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_sharpen_stencil_1_write, sharpen_stencil_cache& sharpen_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x, int dynamic_address) {
	hw_uint<16> sharpen_stencil_op_hcompute_sharpen_stencil_1_3_res = op_hcompute_sharpen_stencil_1_write.extract<0, 15>();
	sharpen_stencil_op_hcompute_sharpen_stencil_1_3_write(sharpen_stencil_op_hcompute_sharpen_stencil_1_3_res, sharpen_stencil, root, sharpen_s0_y, sharpen_s0_x_x, dynamic_address);
}

// op_hcompute_sharpen_stencil_2_write
//	sharpen_stencil_op_hcompute_sharpen_stencil_2_0
inline void sharpen_stencil_op_hcompute_sharpen_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_sharpen_stencil_2_write, sharpen_stencil_cache& sharpen_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x, int dynamic_address) {
	hw_uint<16> sharpen_stencil_op_hcompute_sharpen_stencil_2_0_res = op_hcompute_sharpen_stencil_2_write.extract<0, 15>();
	sharpen_stencil_op_hcompute_sharpen_stencil_2_0_write(sharpen_stencil_op_hcompute_sharpen_stencil_2_0_res, sharpen_stencil, root, sharpen_s0_y, sharpen_s0_x_x, dynamic_address);
}

// op_hcompute_sharpen_stencil_write
//	sharpen_stencil_op_hcompute_sharpen_stencil_6
inline void sharpen_stencil_op_hcompute_sharpen_stencil_write_bundle_write(hw_uint<16>& op_hcompute_sharpen_stencil_write, sharpen_stencil_cache& sharpen_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x, int dynamic_address) {
	hw_uint<16> sharpen_stencil_op_hcompute_sharpen_stencil_6_res = op_hcompute_sharpen_stencil_write.extract<0, 15>();
	sharpen_stencil_op_hcompute_sharpen_stencil_6_write(sharpen_stencil_op_hcompute_sharpen_stencil_6_res, sharpen_stencil, root, sharpen_s0_y, sharpen_s0_x_x, dynamic_address);
}

// Total re-use buffer capacity: 17504 bits


// Operation logic
inline void op_hcompute_hw_input_global_wrapper_glb_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_0, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_0
	auto hw_input_stencil_clkwrk_0_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_3_rp___p___m_3_rp__c__0_value = hw_input_stencil_clkwrk_0.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil(hw_input_stencil_clkwrk_0_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_3_rp___p___m_3_rp__c__0_value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_1(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_1, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_1
	auto hw_input_stencil_clkwrk_1_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_3_rp___p___m_3_rp__c__1_value = hw_input_stencil_clkwrk_1.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_1(hw_input_stencil_clkwrk_1_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_3_rp___p___m_3_rp__c__1_value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_2(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_2, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_2
	auto hw_input_stencil_clkwrk_2_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_3_rp___p___m_3_rp__c__2_value = hw_input_stencil_clkwrk_2.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_2(hw_input_stencil_clkwrk_2_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_3_rp___p___m_3_rp__c__2_value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_3(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_3, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_3
	auto hw_input_stencil_clkwrk_3_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_3_rp___p___m_2_rp__c__0_value = hw_input_stencil_clkwrk_3.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_3(hw_input_stencil_clkwrk_3_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_3_rp___p___m_2_rp__c__0_value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_4(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_4, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_4
	auto hw_input_stencil_clkwrk_4_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_3_rp___p___m_2_rp__c__1_value = hw_input_stencil_clkwrk_4.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_4(hw_input_stencil_clkwrk_4_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_3_rp___p___m_2_rp__c__1_value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_5(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_5, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_5
	auto hw_input_stencil_clkwrk_5_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_3_rp___p___m_2_rp__c__2_value = hw_input_stencil_clkwrk_5.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_5(hw_input_stencil_clkwrk_5_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_3_rp___p___m_2_rp__c__2_value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_6(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_6, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_6
	auto hw_input_stencil_clkwrk_6_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_3_rp___p___m_1_rp__c__0_value = hw_input_stencil_clkwrk_6.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_6(hw_input_stencil_clkwrk_6_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_3_rp___p___m_1_rp__c__0_value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_7(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_7, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_7
	auto hw_input_stencil_clkwrk_7_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_3_rp___p___m_1_rp__c__1_value = hw_input_stencil_clkwrk_7.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_7(hw_input_stencil_clkwrk_7_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_3_rp___p___m_1_rp__c__1_value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_8(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_8, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_8
	auto hw_input_stencil_clkwrk_8_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_3_rp___p___m_1_rp__c__2_value = hw_input_stencil_clkwrk_8.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_8(hw_input_stencil_clkwrk_8_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_3_rp___p___m_1_rp__c__2_value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_8_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_3_rp__c__0_value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_3_rp__c__0_value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_3_rp__c__1_value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_3_rp__c__1_value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_3_rp__c__2_value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_3_rp__c__2_value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_3_rp___p__1_rp__c__0_value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_3_rp___p__1_rp__c__0_value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_3_rp___p__1_rp__c__1_value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_3_rp___p__1_rp__c__1_value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_3_rp___p__1_rp__c__2_value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_3_rp___p__1_rp__c__2_value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_3_rp___p__2_rp__c__0_value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_6(hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_3_rp___p__2_rp__c__0_value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_3_rp___p__2_rp__c__1_value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_7(hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_3_rp___p__2_rp__c__1_value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_3_rp___p__2_rp__c__2_value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_8(hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_3_rp___p__2_rp__c__2_value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_gray_stencil(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, gray_stencil_cache& gray_stencil, int root, int gray_s0_y, int gray_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp_gray_s0_y__p__3_rp__c___lp_gray_s0_x_x_m_3_rp__c__1_value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, gray_s0_y, gray_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_gray_stencil(hw_input_global_wrapper_global_wrapper_stencil__lp_gray_s0_y__p__3_rp__c___lp_gray_s0_x_x_m_3_rp__c__1_value);
	// Produce: gray_stencil
	gray_stencil_op_hcompute_gray_stencil_write_bundle_write(/* arg names */compute_result, gray_stencil, root, gray_s0_y, gray_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_gray_stencil_1(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, gray_stencil_cache& gray_stencil, int root, int gray_s0_y, int gray_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp_gray_s0_y__p__3_rp__c___lp__lp_gray_s0_x_x_m_3_rp___p__1_rp__c__1_value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, gray_s0_y, gray_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_gray_stencil_1(hw_input_global_wrapper_global_wrapper_stencil__lp_gray_s0_y__p__3_rp__c___lp__lp_gray_s0_x_x_m_3_rp___p__1_rp__c__1_value);
	// Produce: gray_stencil
	gray_stencil_op_hcompute_gray_stencil_1_write_bundle_write(/* arg names */compute_result, gray_stencil, root, gray_s0_y, gray_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_gray_stencil_2(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, gray_stencil_cache& gray_stencil, int root, int gray_s0_y, int gray_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp_gray_s0_y__p__3_rp__c___lp__lp_gray_s0_x_x_m_3_rp___p__2_rp__c__1_value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_2_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, gray_s0_y, gray_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_gray_stencil_2(hw_input_global_wrapper_global_wrapper_stencil__lp_gray_s0_y__p__3_rp__c___lp__lp_gray_s0_x_x_m_3_rp___p__2_rp__c__1_value);
	// Produce: gray_stencil
	gray_stencil_op_hcompute_gray_stencil_2_write_bundle_write(/* arg names */compute_result, gray_stencil, root, gray_s0_y, gray_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_reciprocal_stencil(gray_stencil_cache& gray_stencil, reciprocal_stencil_cache& reciprocal_stencil, int root, int reciprocal_s0_y, int reciprocal_s0_x_x) {
  // Dynamic address computation

	// Consume: gray_stencil
	auto gray_stencil__lp_reciprocal_s0_y__p__3_rp__c___lp__lp_reciprocal_s0_x_x_m_3_rp___p__3_rp__value = gray_stencil_op_hcompute_reciprocal_stencil_read_bundle_read(gray_stencil/* source_delay */, root, reciprocal_s0_y, reciprocal_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_reciprocal_stencil(gray_stencil__lp_reciprocal_s0_y__p__3_rp__c___lp__lp_reciprocal_s0_x_x_m_3_rp___p__3_rp__value);
	// Produce: reciprocal_stencil
	reciprocal_stencil_op_hcompute_reciprocal_stencil_write_bundle_write(/* arg names */compute_result, reciprocal_stencil, root, reciprocal_s0_y, reciprocal_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_reciprocal_stencil_1(gray_stencil_cache& gray_stencil, reciprocal_stencil_cache& reciprocal_stencil, int root, int reciprocal_s0_y, int reciprocal_s0_x_x) {
  // Dynamic address computation

	// Consume: gray_stencil
	auto gray_stencil__lp_reciprocal_s0_y__p__3_rp__c___lp__lp_reciprocal_s0_x_x_m_3_rp___p__4_rp__value = gray_stencil_op_hcompute_reciprocal_stencil_1_read_bundle_read(gray_stencil/* source_delay */, root, reciprocal_s0_y, reciprocal_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_reciprocal_stencil_1(gray_stencil__lp_reciprocal_s0_y__p__3_rp__c___lp__lp_reciprocal_s0_x_x_m_3_rp___p__4_rp__value);
	// Produce: reciprocal_stencil
	reciprocal_stencil_op_hcompute_reciprocal_stencil_1_write_bundle_write(/* arg names */compute_result, reciprocal_stencil, root, reciprocal_s0_y, reciprocal_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_reciprocal_stencil_2(gray_stencil_cache& gray_stencil, reciprocal_stencil_cache& reciprocal_stencil, int root, int reciprocal_s0_y, int reciprocal_s0_x_x) {
  // Dynamic address computation

	// Consume: gray_stencil
	auto gray_stencil__lp_reciprocal_s0_y__p__3_rp__c___lp__lp_reciprocal_s0_x_x_m_3_rp___p__5_rp__value = gray_stencil_op_hcompute_reciprocal_stencil_2_read_bundle_read(gray_stencil/* source_delay */, root, reciprocal_s0_y, reciprocal_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_reciprocal_stencil_2(gray_stencil__lp_reciprocal_s0_y__p__3_rp__c___lp__lp_reciprocal_s0_x_x_m_3_rp___p__5_rp__value);
	// Produce: reciprocal_stencil
	reciprocal_stencil_op_hcompute_reciprocal_stencil_2_write_bundle_write(/* arg names */compute_result, reciprocal_stencil, root, reciprocal_s0_y, reciprocal_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_clkwrk_dsa18_cache& blur_unnormalized_stencil_clkwrk_dsa18, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa18
	blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa18, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa18_cache& blur_unnormalized_stencil_clkwrk_dsa18, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil_1();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa18
	blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_1_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa18, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_2(blur_unnormalized_stencil_clkwrk_dsa18_cache& blur_unnormalized_stencil_clkwrk_dsa18, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil_2();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa18
	blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_2_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa18, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_3(blur_unnormalized_stencil_clkwrk_dsa18_cache& blur_unnormalized_stencil_clkwrk_dsa18, gray_stencil_cache& gray_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa18
	auto blur_unnormalized_stencil_clkwrk_dsa18_blur_unnormalized_s1_y_c___lp_blur_unnormalized_s1_x_x_m_3_rp__value = blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_3_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa18/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: gray_stencil
	auto gray_stencil__lp_blur_unnormalized_s1_y__p__1_rp__c___lp__lp_blur_unnormalized_s1_x_x_m_3_rp___p__1_rp__value = gray_stencil_op_hcompute_blur_unnormalized_stencil_3_read_bundle_read(gray_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_unnormalized_stencil_3(blur_unnormalized_stencil_clkwrk_dsa18_blur_unnormalized_s1_y_c___lp_blur_unnormalized_s1_x_x_m_3_rp__value, gray_stencil__lp_blur_unnormalized_s1_y__p__1_rp__c___lp__lp_blur_unnormalized_s1_x_x_m_3_rp___p__1_rp__value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_4(blur_unnormalized_stencil_clkwrk_dsa18_cache& blur_unnormalized_stencil_clkwrk_dsa18, gray_stencil_cache& gray_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa18
	auto blur_unnormalized_stencil_clkwrk_dsa18_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_3_rp___p__1_rp__value = blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_4_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa18/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: gray_stencil
	auto gray_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_3_rp___p__2_rp__value = gray_stencil_op_hcompute_blur_unnormalized_stencil_4_read_bundle_read(gray_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_unnormalized_stencil_4(blur_unnormalized_stencil_clkwrk_dsa18_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_3_rp___p__1_rp__value, gray_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_3_rp___p__2_rp__value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_5(blur_unnormalized_stencil_clkwrk_dsa18_cache& blur_unnormalized_stencil_clkwrk_dsa18, gray_stencil_cache& gray_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa18
	auto blur_unnormalized_stencil_clkwrk_dsa18_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_3_rp___p__2_rp__value = blur_unnormalized_stencil_clkwrk_dsa18_op_hcompute_blur_unnormalized_stencil_5_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa18/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: gray_stencil
	auto gray_stencil__lp_blur_unnormalized_s1_y__p__1_rp__c___lp__lp_blur_unnormalized_s1_x_x_m_3_rp___p__3_rp__value = gray_stencil_op_hcompute_blur_unnormalized_stencil_5_read_bundle_read(gray_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_unnormalized_stencil_5(blur_unnormalized_stencil_clkwrk_dsa18_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_3_rp___p__2_rp__value, gray_stencil__lp_blur_unnormalized_s1_y__p__1_rp__c___lp__lp_blur_unnormalized_s1_x_x_m_3_rp___p__3_rp__value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_sharpen_stencil(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, gray_stencil_cache& gray_stencil, sharpen_stencil_cache& sharpen_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_sharpen_s0_y_c___lp_sharpen_s0_x_x_m_3_rp__value = blur_unnormalized_stencil_op_hcompute_sharpen_stencil_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, sharpen_s0_y, sharpen_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: gray_stencil
	auto gray_stencil__lp_sharpen_s0_y__p__3_rp__c___lp__lp_sharpen_s0_x_x_m_3_rp___p__3_rp__value = gray_stencil_op_hcompute_sharpen_stencil_read_bundle_read(gray_stencil/* source_delay */, root, sharpen_s0_y, sharpen_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_sharpen_stencil(blur_unnormalized_stencil_sharpen_s0_y_c___lp_sharpen_s0_x_x_m_3_rp__value, gray_stencil__lp_sharpen_s0_y__p__3_rp__c___lp__lp_sharpen_s0_x_x_m_3_rp___p__3_rp__value);
	// Produce: sharpen_stencil
	sharpen_stencil_op_hcompute_sharpen_stencil_write_bundle_write(/* arg names */compute_result, sharpen_stencil, root, sharpen_s0_y, sharpen_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_sharpen_stencil_1(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, gray_stencil_cache& gray_stencil, sharpen_stencil_cache& sharpen_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_sharpen_s0_y_c___lp__lp_sharpen_s0_x_x_m_3_rp___p__1_rp__value = blur_unnormalized_stencil_op_hcompute_sharpen_stencil_1_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, sharpen_s0_y, sharpen_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: gray_stencil
	auto gray_stencil__lp_sharpen_s0_y__p__3_rp__c___lp__lp_sharpen_s0_x_x_m_3_rp___p__4_rp__value = gray_stencil_op_hcompute_sharpen_stencil_1_read_bundle_read(gray_stencil/* source_delay */, root, sharpen_s0_y, sharpen_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_sharpen_stencil_1(blur_unnormalized_stencil_sharpen_s0_y_c___lp__lp_sharpen_s0_x_x_m_3_rp___p__1_rp__value, gray_stencil__lp_sharpen_s0_y__p__3_rp__c___lp__lp_sharpen_s0_x_x_m_3_rp___p__4_rp__value);
	// Produce: sharpen_stencil
	sharpen_stencil_op_hcompute_sharpen_stencil_1_write_bundle_write(/* arg names */compute_result, sharpen_stencil, root, sharpen_s0_y, sharpen_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_sharpen_stencil_2(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, gray_stencil_cache& gray_stencil, sharpen_stencil_cache& sharpen_stencil, int root, int sharpen_s0_y, int sharpen_s0_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_sharpen_s0_y_c___lp__lp_sharpen_s0_x_x_m_3_rp___p__2_rp__value = blur_unnormalized_stencil_op_hcompute_sharpen_stencil_2_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, sharpen_s0_y, sharpen_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: gray_stencil
	auto gray_stencil__lp_sharpen_s0_y__p__3_rp__c___lp__lp_sharpen_s0_x_x_m_3_rp___p__5_rp__value = gray_stencil_op_hcompute_sharpen_stencil_2_read_bundle_read(gray_stencil/* source_delay */, root, sharpen_s0_y, sharpen_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_sharpen_stencil_2(blur_unnormalized_stencil_sharpen_s0_y_c___lp__lp_sharpen_s0_x_x_m_3_rp___p__2_rp__value, gray_stencil__lp_sharpen_s0_y__p__3_rp__c___lp__lp_sharpen_s0_x_x_m_3_rp___p__5_rp__value);
	// Produce: sharpen_stencil
	sharpen_stencil_op_hcompute_sharpen_stencil_2_write_bundle_write(/* arg names */compute_result, sharpen_stencil, root, sharpen_s0_y, sharpen_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_ratio_stencil(reciprocal_stencil_cache& reciprocal_stencil, sharpen_stencil_cache& sharpen_stencil, ratio_stencil_cache& ratio_stencil, int root, int ratio_s0_y, int ratio_s0_x_x) {
  // Dynamic address computation

	// Consume: reciprocal_stencil
	auto reciprocal_stencil_ratio_s0_y_c___lp_ratio_s0_x_x_m_3_rp__value = reciprocal_stencil_op_hcompute_ratio_stencil_read_bundle_read(reciprocal_stencil/* source_delay */, root, ratio_s0_y, ratio_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: sharpen_stencil
	auto sharpen_stencil_ratio_s0_y_c___lp_ratio_s0_x_x_m_3_rp__value = sharpen_stencil_op_hcompute_ratio_stencil_read_bundle_read(sharpen_stencil/* source_delay */, root, ratio_s0_y, ratio_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_ratio_stencil(reciprocal_stencil_ratio_s0_y_c___lp_ratio_s0_x_x_m_3_rp__value, sharpen_stencil_ratio_s0_y_c___lp_ratio_s0_x_x_m_3_rp__value);
	// Produce: ratio_stencil
	ratio_stencil_op_hcompute_ratio_stencil_write_bundle_write(/* arg names */compute_result, ratio_stencil, root, ratio_s0_y, ratio_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_ratio_stencil_1(reciprocal_stencil_cache& reciprocal_stencil, sharpen_stencil_cache& sharpen_stencil, ratio_stencil_cache& ratio_stencil, int root, int ratio_s0_y, int ratio_s0_x_x) {
  // Dynamic address computation

	// Consume: reciprocal_stencil
	auto reciprocal_stencil_ratio_s0_y_c___lp__lp_ratio_s0_x_x_m_3_rp___p__1_rp__value = reciprocal_stencil_op_hcompute_ratio_stencil_1_read_bundle_read(reciprocal_stencil/* source_delay */, root, ratio_s0_y, ratio_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: sharpen_stencil
	auto sharpen_stencil_ratio_s0_y_c___lp__lp_ratio_s0_x_x_m_3_rp___p__1_rp__value = sharpen_stencil_op_hcompute_ratio_stencil_1_read_bundle_read(sharpen_stencil/* source_delay */, root, ratio_s0_y, ratio_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_ratio_stencil_1(reciprocal_stencil_ratio_s0_y_c___lp__lp_ratio_s0_x_x_m_3_rp___p__1_rp__value, sharpen_stencil_ratio_s0_y_c___lp__lp_ratio_s0_x_x_m_3_rp___p__1_rp__value);
	// Produce: ratio_stencil
	ratio_stencil_op_hcompute_ratio_stencil_1_write_bundle_write(/* arg names */compute_result, ratio_stencil, root, ratio_s0_y, ratio_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_ratio_stencil_2(reciprocal_stencil_cache& reciprocal_stencil, sharpen_stencil_cache& sharpen_stencil, ratio_stencil_cache& ratio_stencil, int root, int ratio_s0_y, int ratio_s0_x_x) {
  // Dynamic address computation

	// Consume: reciprocal_stencil
	auto reciprocal_stencil_ratio_s0_y_c___lp__lp_ratio_s0_x_x_m_3_rp___p__2_rp__value = reciprocal_stencil_op_hcompute_ratio_stencil_2_read_bundle_read(reciprocal_stencil/* source_delay */, root, ratio_s0_y, ratio_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: sharpen_stencil
	auto sharpen_stencil_ratio_s0_y_c___lp__lp_ratio_s0_x_x_m_3_rp___p__2_rp__value = sharpen_stencil_op_hcompute_ratio_stencil_2_read_bundle_read(sharpen_stencil/* source_delay */, root, ratio_s0_y, ratio_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_ratio_stencil_2(reciprocal_stencil_ratio_s0_y_c___lp__lp_ratio_s0_x_x_m_3_rp___p__2_rp__value, sharpen_stencil_ratio_s0_y_c___lp__lp_ratio_s0_x_x_m_3_rp___p__2_rp__value);
	// Produce: ratio_stencil
	ratio_stencil_op_hcompute_ratio_stencil_2_write_bundle_write(/* arg names */compute_result, ratio_stencil, root, ratio_s0_y, ratio_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, ratio_stencil_cache& ratio_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp_hw_output_s0_y_yi__p__3_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__3_rp__c__0_value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: ratio_stencil
	auto ratio_stencil_hw_output_s0_y_yi_c___lp_hw_output_s0_x_xi_xi_m_3_rp__value = ratio_stencil_op_hcompute_hw_output_glb_stencil_read_bundle_read(ratio_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil(hw_input_global_wrapper_global_wrapper_stencil__lp_hw_output_s0_y_yi__p__3_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__3_rp__c__0_value, ratio_stencil_hw_output_s0_y_yi_c___lp_hw_output_s0_x_xi_xi_m_3_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_1(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, ratio_stencil_cache& ratio_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp_hw_output_s0_y_yi__p__3_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__3_rp__c__1_value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_1_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: ratio_stencil
	auto ratio_stencil_hw_output_s0_y_yi_c___lp_hw_output_s0_x_xi_xi_m_3_rp__value = ratio_stencil_op_hcompute_hw_output_glb_stencil_1_read_bundle_read(ratio_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_1(hw_input_global_wrapper_global_wrapper_stencil__lp_hw_output_s0_y_yi__p__3_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__3_rp__c__1_value, ratio_stencil_hw_output_s0_y_yi_c___lp_hw_output_s0_x_xi_xi_m_3_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_2(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, ratio_stencil_cache& ratio_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp_hw_output_s0_y_yi__p__3_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__3_rp__c__2_value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_2_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: ratio_stencil
	auto ratio_stencil_hw_output_s0_y_yi_c___lp_hw_output_s0_x_xi_xi_m_3_rp__value = ratio_stencil_op_hcompute_hw_output_glb_stencil_2_read_bundle_read(ratio_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_2(hw_input_global_wrapper_global_wrapper_stencil__lp_hw_output_s0_y_yi__p__3_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__3_rp__c__2_value, ratio_stencil_hw_output_s0_y_yi_c___lp_hw_output_s0_x_xi_xi_m_3_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_3(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, ratio_stencil_cache& ratio_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp_hw_output_s0_y_yi__p__3_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__4_rp__c__0_value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_3_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: ratio_stencil
	auto ratio_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__1_rp__value = ratio_stencil_op_hcompute_hw_output_glb_stencil_3_read_bundle_read(ratio_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_3(hw_input_global_wrapper_global_wrapper_stencil__lp_hw_output_s0_y_yi__p__3_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__4_rp__c__0_value, ratio_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__1_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_4(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, ratio_stencil_cache& ratio_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp_hw_output_s0_y_yi__p__3_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__4_rp__c__1_value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_4_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: ratio_stencil
	auto ratio_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__1_rp__value = ratio_stencil_op_hcompute_hw_output_glb_stencil_4_read_bundle_read(ratio_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_4(hw_input_global_wrapper_global_wrapper_stencil__lp_hw_output_s0_y_yi__p__3_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__4_rp__c__1_value, ratio_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__1_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_5(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, ratio_stencil_cache& ratio_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp_hw_output_s0_y_yi__p__3_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__4_rp__c__2_value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_5_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: ratio_stencil
	auto ratio_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__1_rp__value = ratio_stencil_op_hcompute_hw_output_glb_stencil_5_read_bundle_read(ratio_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_5(hw_input_global_wrapper_global_wrapper_stencil__lp_hw_output_s0_y_yi__p__3_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__4_rp__c__2_value, ratio_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__1_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_6(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, ratio_stencil_cache& ratio_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp_hw_output_s0_y_yi__p__3_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__5_rp__c__0_value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_6_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: ratio_stencil
	auto ratio_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__2_rp__value = ratio_stencil_op_hcompute_hw_output_glb_stencil_6_read_bundle_read(ratio_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_6(hw_input_global_wrapper_global_wrapper_stencil__lp_hw_output_s0_y_yi__p__3_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__5_rp__c__0_value, ratio_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__2_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_7(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, ratio_stencil_cache& ratio_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp_hw_output_s0_y_yi__p__3_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__5_rp__c__1_value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_7_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: ratio_stencil
	auto ratio_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__2_rp__value = ratio_stencil_op_hcompute_hw_output_glb_stencil_7_read_bundle_read(ratio_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_7(hw_input_global_wrapper_global_wrapper_stencil__lp_hw_output_s0_y_yi__p__3_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__5_rp__c__1_value, ratio_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__2_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_8(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, ratio_stencil_cache& ratio_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp_hw_output_s0_y_yi__p__3_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__5_rp__c__2_value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_output_glb_stencil_8_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: ratio_stencil
	auto ratio_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__2_rp__value = ratio_stencil_op_hcompute_hw_output_glb_stencil_8_read_bundle_read(ratio_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_8(hw_input_global_wrapper_global_wrapper_stencil__lp_hw_output_s0_y_yi__p__3_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__5_rp__c__2_value, ratio_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_3_rp___p__2_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_9, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_3_rp__c__0_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil(hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_3_rp__c__0_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_9
	hw_output_global_wrapper_stencil_clkwrk_9.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_1(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_10, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_3_rp__c__1_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_1(hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_3_rp__c__1_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_10
	hw_output_global_wrapper_stencil_clkwrk_10.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_2(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_11, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_3_rp__c__2_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_2(hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_3_rp__c__2_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_11
	hw_output_global_wrapper_stencil_clkwrk_11.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_3(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_12, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_3_rp___p__1_rp__c__0_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_3(hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_3_rp___p__1_rp__c__0_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_12
	hw_output_global_wrapper_stencil_clkwrk_12.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_4(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_13, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_3_rp___p__1_rp__c__1_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_4(hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_3_rp___p__1_rp__c__1_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_13
	hw_output_global_wrapper_stencil_clkwrk_13.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_5(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_14, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_3_rp___p__1_rp__c__2_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_5(hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_3_rp___p__1_rp__c__2_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_14
	hw_output_global_wrapper_stencil_clkwrk_14.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_6(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_15, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_3_rp___p__2_rp__c__0_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_6(hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_3_rp___p__2_rp__c__0_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_15
	hw_output_global_wrapper_stencil_clkwrk_15.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_7(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_16, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_3_rp___p__2_rp__c__1_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_7(hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_3_rp___p__2_rp__c__1_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_16
	hw_output_global_wrapper_stencil_clkwrk_16.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_8(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_17, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_3_rp___p__2_rp__c__2_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_8(hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_3_rp___p__2_rp__c__2_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_17
	hw_output_global_wrapper_stencil_clkwrk_17.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

// Driver function
void unsharp(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_2, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_3, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_4, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_5, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_6, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_7, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_8, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_10, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_11, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_12, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_13, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_14, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_15, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_16, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_17, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_9) {

#ifndef __SYNTHESIS__
  ofstream debug_file("unsharp_debug.csv");
  global_debug_handle = &debug_file;
#endif //__SYNTHESIS__
  blur_unnormalized_stencil_cache blur_unnormalized_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  blur_unnormalized_stencil_clkwrk_dsa18_cache blur_unnormalized_stencil_clkwrk_dsa18;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  gray_stencil_cache gray_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  hw_input_global_wrapper_glb_stencil_cache hw_input_global_wrapper_glb_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  hw_input_global_wrapper_global_wrapper_stencil_cache hw_input_global_wrapper_global_wrapper_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  hw_output_glb_stencil_cache hw_output_glb_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  ratio_stencil_cache ratio_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  reciprocal_stencil_cache reciprocal_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  sharpen_stencil_cache sharpen_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
#ifdef __SYNTHESIS__
#pragma HLS inline recursive
#endif // __SYNTHESIS__

// schedule: { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 26] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_ratio_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 35] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 37] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_reciprocal_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 22] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_sharpen_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 31] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_output_glb_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 38] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_output_glb_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 42] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_sharpen_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 32] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 24] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_output_glb_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 40] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8[d0 = 0, d1, d2] -> [0, d1, d2, 17] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_ratio_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 34] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 9] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_hw_output_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 52] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_output_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 50] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_hw_output_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 47] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_output_glb_stencil_8[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 44] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_input_global_wrapper_glb_stencil_8[d0 = 0, d1, d2] -> [0, d1, d2, 8] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_reciprocal_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 21] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_ratio_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 33] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_output_glb_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 43] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_hw_input_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 1] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_hw_input_global_wrapper_glb_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 7] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_hw_output_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 49] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_sharpen_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 30] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_input_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 2] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 16] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_hw_input_global_wrapper_glb_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 4] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 25] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_input_global_wrapper_glb_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 6] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_hw_output_glb_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 41] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 14] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 36] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_hw_input_global_wrapper_glb_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 5] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_hw_output_global_wrapper_stencil_8[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 53] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_output_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 45] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_output_glb_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 39] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 15] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_hw_input_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 3] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_hw_output_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 48] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_output_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 46] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 11] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 10] : -3 <= d1 <= 68 and 0 <= d2 <= 23; op_hcompute_reciprocal_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 23] : 0 <= d1 <= 65 and 0 <= d2 <= 21; op_hcompute_hw_output_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 51] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
//   { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 26] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_blur_unnormalized_stencil_2(((((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_ratio_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 35] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_ratio_stencil_2(((((-35 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 37] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_hw_output_glb_stencil_1(((((-37 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 19] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_gray_stencil_1(((((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_reciprocal_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 22] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_reciprocal_stencil_1(((((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_sharpen_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 31] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_sharpen_stencil_1(((((-31 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 38] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_hw_output_glb_stencil_2(((((-38 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 42] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_hw_output_glb_stencil_6(((((-42 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_sharpen_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 32] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_sharpen_stencil_2(((((-32 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 24] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_blur_unnormalized_stencil(((((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 40] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_hw_output_glb_stencil_4(((((-40 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8[d0 = 0, d1, d2] -> [0, d1, d2, 17] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_ratio_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 34] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_ratio_stencil_1(((((-34 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 9] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 52] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_7(((((-52 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 50] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_5(((((-50 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 18] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_gray_stencil(((((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 47] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_2(((((-47 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_8[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 44] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_hw_output_glb_stencil_8(((((-44 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_8[d0 = 0, d1, d2] -> [0, d1, d2, 8] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_8(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_reciprocal_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 21] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_reciprocal_stencil(((((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_ratio_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 33] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_ratio_stencil(((((-33 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 43] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_hw_output_glb_stencil_7(((((-43 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_gray_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 20] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_gray_stencil_2(((((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 1] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_1(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 7] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_7(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 49] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_4(((((-49 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_sharpen_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 30] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_sharpen_stencil(((((-30 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 2] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_2(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 16] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 4] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_4(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 28] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_blur_unnormalized_stencil_4(((((-28 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 29] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_blur_unnormalized_stencil_5(((((-29 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 25] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_blur_unnormalized_stencil_1(((((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 6] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_6(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 41] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_hw_output_glb_stencil_5(((((-41 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 27] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_blur_unnormalized_stencil_3(((((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 14] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil(((((1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 36] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_hw_output_glb_stencil(((((-36 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 5] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_5(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_8[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 53] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_8(((((-53 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 45] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil(((((-45 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 39] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_hw_output_glb_stencil_3(((((-39 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 15] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 3] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_3(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 48] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_3(((((-48 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 46] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_1(((((-46 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 11] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 10] : -3 <= d1 <= 68 and 0 <= d2 <= 23 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_reciprocal_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 23] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_reciprocal_stencil_2(((((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 51] : 0 <= d1 <= 65 and 0 <= d2 <= 21 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_6(((((-51 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((23 + -1*i2)) >= 0)))

	for (int c1 = -3; c1 <= 68; c1 += 1){ 
	#pragma hls_pipeline_init_interval 1 
	  for (int c2 = 0; c2 <= 23; c2 += 1) { 
	    op_hcompute_hw_input_global_wrapper_glb_stencil(hw_input_stencil_clkwrk_0 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_1(hw_input_stencil_clkwrk_1 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_2(hw_input_stencil_clkwrk_2 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_3(hw_input_stencil_clkwrk_3 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_4(hw_input_stencil_clkwrk_4 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_5(hw_input_stencil_clkwrk_5 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_6(hw_input_stencil_clkwrk_6 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_7(hw_input_stencil_clkwrk_7 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_8(hw_input_stencil_clkwrk_8 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_gray_stencil(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, gray_stencil, 0, c1, c2);
	    op_hcompute_gray_stencil_1(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, gray_stencil, 0, c1, c2);
	    op_hcompute_gray_stencil_2(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, gray_stencil, 0, c1, c2);
	    if (c1 >= 3 && c2 >= 2) {
	      op_hcompute_reciprocal_stencil(gray_stencil /* buf name */, reciprocal_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_reciprocal_stencil_1(gray_stencil /* buf name */, reciprocal_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_reciprocal_stencil_2(gray_stencil /* buf name */, reciprocal_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_clkwrk_dsa18, 0, c1 - 3, c2 - 2);
	      op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa18, 0, c1 - 3, c2 - 2);
	      op_hcompute_blur_unnormalized_stencil_2(blur_unnormalized_stencil_clkwrk_dsa18, 0, c1 - 3, c2 - 2);
	      op_hcompute_blur_unnormalized_stencil_3(blur_unnormalized_stencil_clkwrk_dsa18 /* buf name */, gray_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_blur_unnormalized_stencil_4(blur_unnormalized_stencil_clkwrk_dsa18 /* buf name */, gray_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_blur_unnormalized_stencil_5(blur_unnormalized_stencil_clkwrk_dsa18 /* buf name */, gray_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_sharpen_stencil(blur_unnormalized_stencil /* buf name */, gray_stencil /* buf name */, sharpen_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_sharpen_stencil_1(blur_unnormalized_stencil /* buf name */, gray_stencil /* buf name */, sharpen_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_sharpen_stencil_2(blur_unnormalized_stencil /* buf name */, gray_stencil /* buf name */, sharpen_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_ratio_stencil(reciprocal_stencil /* buf name */, sharpen_stencil /* buf name */, ratio_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_ratio_stencil_1(reciprocal_stencil /* buf name */, sharpen_stencil /* buf name */, ratio_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_ratio_stencil_2(reciprocal_stencil /* buf name */, sharpen_stencil /* buf name */, ratio_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_hw_output_glb_stencil(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, ratio_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_hw_output_glb_stencil_1(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, ratio_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_hw_output_glb_stencil_2(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, ratio_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_hw_output_glb_stencil_3(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, ratio_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_hw_output_glb_stencil_4(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, ratio_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_hw_output_glb_stencil_5(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, ratio_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_hw_output_glb_stencil_6(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, ratio_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_hw_output_glb_stencil_7(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, ratio_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_hw_output_glb_stencil_8(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, ratio_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 3, c2 - 2);
	      op_hcompute_hw_output_global_wrapper_stencil(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_9, 0, c1 - 3, c2 - 2);
	      op_hcompute_hw_output_global_wrapper_stencil_1(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_10, 0, c1 - 3, c2 - 2);
	      op_hcompute_hw_output_global_wrapper_stencil_2(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_11, 0, c1 - 3, c2 - 2);
	      op_hcompute_hw_output_global_wrapper_stencil_3(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_12, 0, c1 - 3, c2 - 2);
	      op_hcompute_hw_output_global_wrapper_stencil_4(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_13, 0, c1 - 3, c2 - 2);
	      op_hcompute_hw_output_global_wrapper_stencil_5(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_14, 0, c1 - 3, c2 - 2);
	      op_hcompute_hw_output_global_wrapper_stencil_6(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_15, 0, c1 - 3, c2 - 2);
	      op_hcompute_hw_output_global_wrapper_stencil_7(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_16, 0, c1 - 3, c2 - 2);
	      op_hcompute_hw_output_global_wrapper_stencil_8(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_17, 0, c1 - 3, c2 - 2);
	    }
	  }
	
	 } 
	
#ifndef __SYNTHESIS__
  debug_file.close();
#endif //__SYNTHESIS__
}

void unsharp_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_2, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_3, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_4, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_5, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_6, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_7, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_8, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_10, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_11, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_12, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_13, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_14, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_15, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_16, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_17, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_9, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    unsharp(hw_input_stencil_clkwrk_0, hw_input_stencil_clkwrk_1, hw_input_stencil_clkwrk_2, hw_input_stencil_clkwrk_3, hw_input_stencil_clkwrk_4, hw_input_stencil_clkwrk_5, hw_input_stencil_clkwrk_6, hw_input_stencil_clkwrk_7, hw_input_stencil_clkwrk_8, hw_output_global_wrapper_stencil_clkwrk_10, hw_output_global_wrapper_stencil_clkwrk_11, hw_output_global_wrapper_stencil_clkwrk_12, hw_output_global_wrapper_stencil_clkwrk_13, hw_output_global_wrapper_stencil_clkwrk_14, hw_output_global_wrapper_stencil_clkwrk_15, hw_output_global_wrapper_stencil_clkwrk_16, hw_output_global_wrapper_stencil_clkwrk_17, hw_output_global_wrapper_stencil_clkwrk_9);
  }
}
#ifdef __SYNTHESIS__
  // { op_hcompute_hw_input_global_wrapper_glb_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_0[hw_input_global_wrapper_s0_y, -3 + 3hw_input_global_wrapper_s0_x_x, 0] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_num_transfers = 1728;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_1[hw_input_global_wrapper_s0_y, -3 + 3hw_input_global_wrapper_s0_x_x, 1] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_num_transfers = 1728;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_2[hw_input_global_wrapper_s0_y, -3 + 3hw_input_global_wrapper_s0_x_x, 2] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_num_transfers = 1728;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_3[hw_input_global_wrapper_s0_y, -2 + 3hw_input_global_wrapper_s0_x_x, 0] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_num_transfers = 1728;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_4[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_4[hw_input_global_wrapper_s0_y, -2 + 3hw_input_global_wrapper_s0_x_x, 1] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0_num_transfers = 1728;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_5[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_5[hw_input_global_wrapper_s0_y, -2 + 3hw_input_global_wrapper_s0_x_x, 2] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0_num_transfers = 1728;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_6[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_6[hw_input_global_wrapper_s0_y, -1 + 3hw_input_global_wrapper_s0_x_x, 0] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0_num_transfers = 1728;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_7[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_7[hw_input_global_wrapper_s0_y, -1 + 3hw_input_global_wrapper_s0_x_x, 1] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0_num_transfers = 1728;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_8[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_8[hw_input_global_wrapper_s0_y, -1 + 3hw_input_global_wrapper_s0_x_x, 2] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 23 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_8_read_pipe0_num_transfers = 1728;
  // { op_hcompute_hw_output_global_wrapper_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_10[hw_output_global_wrapper_s0_y_yi, 3hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
const int op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_num_transfers = 1452;
  // { op_hcompute_hw_output_global_wrapper_stencil_2[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_11[hw_output_global_wrapper_s0_y_yi, 3hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
const int op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_num_transfers = 1452;
  // { op_hcompute_hw_output_global_wrapper_stencil_3[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_12[hw_output_global_wrapper_s0_y_yi, 1 + 3hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
const int op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_num_transfers = 1452;
  // { op_hcompute_hw_output_global_wrapper_stencil_4[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_13[hw_output_global_wrapper_s0_y_yi, 1 + 3hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
const int op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_num_transfers = 1452;
  // { op_hcompute_hw_output_global_wrapper_stencil_5[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_14[hw_output_global_wrapper_s0_y_yi, 1 + 3hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
const int op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_num_transfers = 1452;
  // { op_hcompute_hw_output_global_wrapper_stencil_6[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_15[hw_output_global_wrapper_s0_y_yi, 2 + 3hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
const int op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_num_transfers = 1452;
  // { op_hcompute_hw_output_global_wrapper_stencil_7[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_16[hw_output_global_wrapper_s0_y_yi, 2 + 3hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
const int op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_num_transfers = 1452;
  // { op_hcompute_hw_output_global_wrapper_stencil_8[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_17[hw_output_global_wrapper_s0_y_yi, 2 + 3hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
const int op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_num_transfers = 1452;
  // { op_hcompute_hw_output_global_wrapper_stencil[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_9[hw_output_global_wrapper_s0_y_yi, 3hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 21 }
const int op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_num_transfers = 1452;


extern "C" {

void unsharp_accel(hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_8_read_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0 offset = slave depth = 65536 bundle = gmem2
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_8_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem3

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_8_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_8_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_8_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_8_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_8_read_pipe0_num_transfers*size);

  unsharp_wrapper(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_8_read_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void unsharp_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_8_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_8_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  unsharp(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_8_read_pipe0, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0);

}

}
#endif //__SYNTHESIS__

