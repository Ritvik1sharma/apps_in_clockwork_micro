project new
solution file add ./regression_tb_micro.cpp -exclude true
solution file add ./camera_pipeline_2x2.cpp -exclude false
options set Flows/NCSim/NC_ROOT /cad/cadence/XCELIUMMAIN_20.09.007_lnx86
options set Input/CppStandard c++14
options set Flows/SCVerify/USE_NCSIM true
go analyze
solution design set camera_pipeline_2x2 -top
go compile
solution library add nangate-45nm_beh -- -rtlsyntool DesignCompiler -vendor Nangate -technology 045nm
solution library add ccs_sample_mem
solution library add amba
go libraries
directive set -CLOCKS {clk {-CLOCK_PERIOD 2 -CLOCK_EDGE rising -CLOCK_HIGH_TIME 1 -CLOCK_OFFSET 0.000000 -CLOCK_UNCERTAINTY 0.0 -RESET_KIND sync -RESET_SYNC_NAME rst -RESET_SYNC_ACTIVE high -RESET_ASYNC_NAME arst_n -RESET_ASYNC_ACTIVE low -ENABLE_NAME {} -ENABLE_ACTIVE high}}
go assembly
go architect
ignore_memory_precedences -from *read_mem(*b_b_stencil_op_hcompute_b_b_stencil_244_merged_banks_9.f3.vals.val:rsc.@) -to *write_mem(*b_b_stencil_op_hcompute_b_b_stencil_244_merged_banks_9.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*g_b_stencil_op_hcompute_g_b_stencil_97_merged_banks_10.f3.vals.val:rsc.@) -to *write_mem(*g_b_stencil_op_hcompute_g_b_stencil_97_merged_banks_10.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*g_gb_stencil_op_hcompute_g_gb_stencil_95_merged_banks_7.f3.vals.val:rsc.@) -to *write_mem(*g_gb_stencil_op_hcompute_g_gb_stencil_95_merged_banks_7.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*g_gr_stencil_op_hcompute_g_gr_stencil_93_merged_banks_7.f3.vals.val:rsc.@) -to *write_mem(*g_gr_stencil_op_hcompute_g_gr_stencil_93_merged_banks_7.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*g_r_stencil_op_hcompute_g_r_stencil_88_merged_banks_10.f3.vals.val:rsc.@) -to *write_mem(*g_r_stencil_op_hcompute_g_r_stencil_88_merged_banks_10.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76_merged_banks_5.f3.vals.val:rsc.@) -to *write_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76_merged_banks_5.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76_merged_banks_5.f9.vals.val:rsc.@) -to *write_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76_merged_banks_5.f9.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74_merged_banks_5.f3.vals.val:rsc.@) -to *write_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74_merged_banks_5.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74_merged_banks_5.f9.vals.val:rsc.@) -to *write_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74_merged_banks_5.f9.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72_merged_banks_5.f3.vals.val:rsc.@) -to *write_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72_merged_banks_5.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72_merged_banks_5.f9.vals.val:rsc.@) -to *write_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72_merged_banks_5.f9.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78_merged_banks_5.f3.vals.val:rsc.@) -to *write_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78_merged_banks_5.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78_merged_banks_5.f9.vals.val:rsc.@) -to *write_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78_merged_banks_5.f9.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*r_gr_stencil_op_hcompute_r_gr_stencil_2_to_r_gr_stencil_op_hcompute_demosaicked_1_stencil_149.f.vals.val:rsc.@) -to *write_mem(*r_gr_stencil_op_hcompute_r_gr_stencil_2_to_r_gr_stencil_op_hcompute_demosaicked_1_stencil_149.f.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*r_r_stencil_op_hcompute_r_r_stencil_0_merged_banks_9.f3.vals.val:rsc.@) -to *write_mem(*r_r_stencil_op_hcompute_r_r_stencil_0_merged_banks_9.f3.vals.val:rsc.@)
go allocate
go extract
flow run /SCVerify/launch_make ./scverify/Verify_orig_cxx_osci.mk {} SIMTOOL=osci sim
flow run /SCVerify/launch_make ./scverify/Verify_concat_sim_rtl_v_ncsim.mk {} SIMTOOL=ncsim simgui
project save
