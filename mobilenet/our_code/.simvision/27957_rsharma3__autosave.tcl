
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
probe -create -database waves scverify_top.rtl.clk scverify_top.rst scverify_top.user_tb.cpp_testbench_active scverify_top.rtl.rst scverify_top.rtl.hw_filter_dw_stencil_clkwrk_0_values_rsc_rdy scverify_top.rtl.hw_filter_dw_stencil_clkwrk_0_values_rsc_vld scverify_top.rtl.hw_filter_dw_stencil_clkwrk_0_values_rsc_dat scverify_top.rtl.hw_filter_dw_stencil_clkwrk_1_values_rsc_rdy scverify_top.rtl.hw_filter_dw_stencil_clkwrk_1_values_rsc_vld scverify_top.rtl.hw_filter_dw_stencil_clkwrk_1_values_rsc_dat scverify_top.rtl.hw_filter_dw_stencil_clkwrk_2_values_rsc_rdy scverify_top.rtl.hw_filter_dw_stencil_clkwrk_2_values_rsc_vld scverify_top.rtl.hw_filter_dw_stencil_clkwrk_2_values_rsc_dat scverify_top.rtl.hw_filter_dw_stencil_clkwrk_3_values_rsc_rdy scverify_top.rtl.hw_filter_dw_stencil_clkwrk_3_values_rsc_vld scverify_top.rtl.hw_filter_dw_stencil_clkwrk_3_values_rsc_dat scverify_top.rtl.hw_filter_pw_stencil_values_rsc_rdy scverify_top.rtl.hw_filter_pw_stencil_values_rsc_vld scverify_top.rtl.hw_filter_pw_stencil_values_rsc_dat scverify_top.rtl.hw_input_stencil_clkwrk_4_values_rsc_rdy scverify_top.rtl.hw_input_stencil_clkwrk_4_values_rsc_vld scverify_top.rtl.hw_input_stencil_clkwrk_4_values_rsc_dat scverify_top.rtl.hw_input_stencil_clkwrk_5_values_rsc_rdy scverify_top.rtl.hw_input_stencil_clkwrk_5_values_rsc_vld scverify_top.rtl.hw_input_stencil_clkwrk_5_values_rsc_dat scverify_top.rtl.hw_input_stencil_clkwrk_6_values_rsc_rdy scverify_top.rtl.hw_input_stencil_clkwrk_6_values_rsc_vld scverify_top.rtl.hw_input_stencil_clkwrk_6_values_rsc_dat scverify_top.rtl.hw_input_stencil_clkwrk_7_values_rsc_rdy scverify_top.rtl.hw_input_stencil_clkwrk_7_values_rsc_vld scverify_top.rtl.hw_input_stencil_clkwrk_7_values_rsc_dat scverify_top.rtl.hw_output_stencil_clkwrk_10_values_rsc_rdy scverify_top.rtl.hw_output_stencil_clkwrk_10_values_rsc_vld scverify_top.rtl.hw_output_stencil_clkwrk_10_values_rsc_dat scverify_top.rtl.hw_output_stencil_clkwrk_8_values_rsc_rdy scverify_top.rtl.hw_output_stencil_clkwrk_8_values_rsc_vld scverify_top.rtl.hw_output_stencil_clkwrk_8_values_rsc_dat scverify_top.rtl.hw_output_stencil_clkwrk_9_values_rsc_rdy scverify_top.rtl.hw_output_stencil_clkwrk_9_values_rsc_vld scverify_top.rtl.hw_output_stencil_clkwrk_9_values_rsc_dat scverify_top.user_tb.hw_output_stencil_clkwrk_10_values_val_comp._compare_cnt_sig scverify_top.user_tb.hw_output_stencil_clkwrk_10_values_val_comp._golden_sig scverify_top.user_tb.hw_output_stencil_clkwrk_10_values_val_comp._dut_sig scverify_top.user_tb.hw_output_stencil_clkwrk_10_values_val_comp._error_cnt_sig scverify_top.user_tb.hw_output_stencil_clkwrk_8_values_val_comp._compare_cnt_sig scverify_top.user_tb.hw_output_stencil_clkwrk_8_values_val_comp._golden_sig scverify_top.user_tb.hw_output_stencil_clkwrk_8_values_val_comp._dut_sig scverify_top.user_tb.hw_output_stencil_clkwrk_8_values_val_comp._error_cnt_sig scverify_top.user_tb.hw_output_stencil_clkwrk_9_values_val_comp._compare_cnt_sig scverify_top.user_tb.hw_output_stencil_clkwrk_9_values_val_comp._golden_sig scverify_top.user_tb.hw_output_stencil_clkwrk_9_values_val_comp._dut_sig scverify_top.user_tb.hw_output_stencil_clkwrk_9_values_val_comp._error_cnt_sig scverify_top.rtl.mobilenet_struct_inst.mobilenet_core_inst.mobilenet_core_staller_inst.core_wen scverify_top.deadlocked

simvision -input /nobackup/rsharma3/Desktop/MICRO_PAPER/resnet_case/resnet88_with_slt_options/mobilenet/our_code/.simvision/27957_rsharma3__autosave.tcl.svcf
