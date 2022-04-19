project new
solution file add ./regression_tb_micro.cpp -exclude true
solution file add ./unsharp.cpp -exclude false
options set Flows/NCSim/NC_ROOT /cad/cadence/XCELIUMMAIN_20.09.007_lnx86
options set Input/CppStandard c++14
options set Flows/SCVerify/USE_NCSIM true
go analyze
solution design set unsharp -top
go compile
solution library add nangate-45nm_beh -- -rtlsyntool DesignCompiler -vendor Nangate -technology 045nm
solution library add ccs_sample_mem
solution library add amba
go libraries
directive set -CLOCKS {clk {-CLOCK_PERIOD 2 -CLOCK_EDGE rising -CLOCK_HIGH_TIME 1 -CLOCK_OFFSET 0.000000 -CLOCK_UNCERTAINTY 0.0 -RESET_KIND sync -RESET_SYNC_NAME rst -RESET_SYNC_ACTIVE high -RESET_ASYNC_NAME arst_n -RESET_ASYNC_ACTIVE low -ENABLE_NAME {} -ENABLE_ACTIVE high}}
go assembly
go architect
#ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.f15.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.f15.vals.val:rsc.@)
#ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.f21.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.f21.vals.val:rsc.@)
#ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.f27.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.f27.vals.val:rsc.@)
#ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.f3.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.f3.vals.val:rsc.@)
#ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.f33.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.f33.vals.val:rsc.@)
#ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.f9.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_113_merged_banks_47.f9.vals.val:rsc.@)
#ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.f11.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.f11.vals.val:rsc.@)
#ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.f17.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.f17.vals.val:rsc.@)
#ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.f23.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.f23.vals.val:rsc.@)
#ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.f29.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.f29.vals.val:rsc.@)
#ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.f35.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.f35.vals.val:rsc.@)
#ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.f5.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_1_109_merged_banks_47.f5.vals.val:rsc.@)
#ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.f11.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.f11.vals.val:rsc.@)
#ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.f17.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.f17.vals.val:rsc.@)
#ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.f23.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.f23.vals.val:rsc.@)
#ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.f29.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.f29.vals.val:rsc.@)
#ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.f35.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.f35.vals.val:rsc.@)
#ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.f5.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_2_105_merged_banks_47.f5.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83_merged_banks_2.f1.vals.val:rsc.@) -to *write_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_83_merged_banks_2.f1.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81_merged_banks_2.f1.vals.val:rsc.@) -to *write_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_81_merged_banks_2.f1.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79_merged_banks_2.f1.vals.val:rsc.@) -to *write_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_79_merged_banks_2.f1.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77_merged_banks_2.f1.vals.val:rsc.@) -to *write_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_77_merged_banks_2.f1.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75_merged_banks_2.f1.vals.val:rsc.@) -to *write_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_75_merged_banks_2.f1.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73_merged_banks_2.f1.vals.val:rsc.@) -to *write_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_73_merged_banks_2.f1.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71_merged_banks_2.f1.vals.val:rsc.@) -to *write_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_71_merged_banks_2.f1.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85_merged_banks_2.f1.vals.val:rsc.@) -to *write_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_85_merged_banks_2.f1.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69_merged_banks_2.f1.vals.val:rsc.@) -to *write_mem(*hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8_69_merged_banks_2.f1.vals.val:rsc.@)
go allocate
go extract
flow run /SCVerify/launch_make ./scverify/Verify_orig_cxx_osci.mk {} SIMTOOL=osci sim
flow run /SCVerify/launch_make ./scverify/Verify_concat_sim_rtl_v_ncsim.mk {} SIMTOOL=ncsim simgui
project save
