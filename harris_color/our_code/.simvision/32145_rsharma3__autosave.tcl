
# XM-Sim Command File
# TOOL:	xmsim(64)	20.09-s007
#

set tcl_prompt1 {puts -nonewline "xcelium> "}
set tcl_prompt2 {puts -nonewline "> "}
set vlog_format %h
set vhdl_format %v
set real_precision 6
set display_unit auto
set time_unit module
set heap_garbage_size -200
set heap_garbage_time 0
set assert_report_level note
set assert_stop_level error
set autoscope yes
set assert_1164_warnings no
set pack_assert_off {std_logic_arith numeric_std}
set severity_pack_assert_off {note warning}
set assert_output_stop_level failed
set tcl_debug_level 0
set relax_path_name 1
set vhdl_vcdmap XX01ZX01X
set intovf_severity_level ERROR
set probe_screen_format 0
set rangecnst_severity_level ERROR
set textio_severity_level ERROR
set vital_timing_checks_on 1
set vlog_code_show_force 0
set assert_count_attempts 1
set tcl_all64 false
set tcl_runerror_exit false
set assert_report_incompletes 0
set show_force 1
set force_reset_by_reinvoke 0
set tcl_relaxed_literal 0
set probe_exclude_patterns {}
set probe_packed_limit 4k
set probe_unpacked_limit 16k
set assert_internal_msg no
set svseed 1
set assert_reporting_mode 0
set vcd_compact_mode 0
database -open -shm -into waves.shm waves -default
probe -create -database waves scverify_top.rtl.clk scverify_top.rtl.rst scverify_top.rtl.hw_input_stencil_clkwrk_0_values_rsc_rdy scverify_top.rtl.hw_input_stencil_clkwrk_0_values_rsc_vld scverify_top.rtl.hw_input_stencil_clkwrk_0_values_rsc_dat scverify_top.rtl.hw_input_stencil_clkwrk_1_values_rsc_rdy scverify_top.rtl.hw_input_stencil_clkwrk_1_values_rsc_vld scverify_top.rtl.hw_input_stencil_clkwrk_1_values_rsc_dat scverify_top.rtl.hw_input_stencil_clkwrk_2_values_rsc_rdy scverify_top.rtl.hw_input_stencil_clkwrk_2_values_rsc_vld scverify_top.rtl.hw_input_stencil_clkwrk_2_values_rsc_dat scverify_top.rtl.hw_input_stencil_clkwrk_3_values_rsc_rdy scverify_top.rtl.hw_input_stencil_clkwrk_3_values_rsc_vld scverify_top.rtl.hw_input_stencil_clkwrk_3_values_rsc_dat scverify_top.rtl.hw_input_stencil_clkwrk_4_values_rsc_rdy scverify_top.rtl.hw_input_stencil_clkwrk_4_values_rsc_vld scverify_top.rtl.hw_input_stencil_clkwrk_4_values_rsc_dat scverify_top.rtl.hw_input_stencil_clkwrk_5_values_rsc_rdy scverify_top.rtl.hw_input_stencil_clkwrk_5_values_rsc_vld scverify_top.rtl.hw_input_stencil_clkwrk_5_values_rsc_dat scverify_top.rtl.hw_output_global_wrapper_stencil_clkwrk_6_values_rsc_rdy scverify_top.rtl.hw_output_global_wrapper_stencil_clkwrk_6_values_rsc_vld scverify_top.rtl.hw_output_global_wrapper_stencil_clkwrk_6_values_rsc_dat scverify_top.rtl.hw_output_global_wrapper_stencil_clkwrk_7_values_rsc_rdy scverify_top.rtl.hw_output_global_wrapper_stencil_clkwrk_7_values_rsc_vld scverify_top.rtl.hw_output_global_wrapper_stencil_clkwrk_7_values_rsc_dat scverify_top.rtl.harris_color_struct_inst.harris_color_core_inst.harris_color_core_staller_inst.core_wen scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9_f3_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9_f3_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9_f3_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9_f3_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9_f3_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9_f3_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9_f7_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9_f7_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9_f7_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9_f7_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9_f7_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9_f7_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9_f3_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9_f3_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9_f3_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9_f3_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9_f3_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9_f3_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9_f7_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9_f7_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9_f7_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9_f7_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9_f7_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.cim_stencil_cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9_f7_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12_f3_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12_f3_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12_f3_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12_f3_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12_f3_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12_f3_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12_f7_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12_f7_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12_f7_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12_f7_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12_f7_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12_f7_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12_f3_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12_f3_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12_f3_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12_f3_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12_f3_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12_f3_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12_f7_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12_f7_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12_f7_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12_f7_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12_f7_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.gray_stencil_gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12_f7_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9_f3_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9_f3_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9_f3_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9_f3_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9_f3_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9_f3_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9_f7_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9_f7_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9_f7_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9_f7_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9_f7_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9_f7_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9_f3_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9_f3_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9_f3_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9_f3_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9_f3_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9_f3_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9_f7_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9_f7_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9_f7_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9_f7_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9_f7_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9_f7_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9_f3_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9_f3_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9_f3_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9_f3_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9_f3_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9_f3_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9_f7_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9_f7_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9_f7_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9_f7_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9_f7_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9_f7_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9_f3_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9_f3_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9_f3_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9_f3_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9_f3_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9_f3_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9_f7_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9_f7_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9_f7_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9_f7_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9_f7_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9_f7_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9_f3_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9_f3_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9_f3_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9_f3_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9_f3_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9_f3_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9_f7_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9_f7_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9_f7_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9_f7_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9_f7_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9_f7_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9_f3_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9_f3_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9_f3_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9_f3_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9_f3_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9_f3_vals_val_rsc_comp.re scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9_f7_vals_val_rsc_comp.radr scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9_f7_vals_val_rsc_comp.wadr scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9_f7_vals_val_rsc_comp.d scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9_f7_vals_val_rsc_comp.q scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9_f7_vals_val_rsc_comp.we scverify_top.rtl.harris_color_struct_inst.lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9_f7_vals_val_rsc_comp.re

simvision -input /nobackup/rsharma3/Desktop/MICRO_PAPER/updated_micro/harris_color/our_code/.simvision/32145_rsharma3__autosave.tcl.svcf