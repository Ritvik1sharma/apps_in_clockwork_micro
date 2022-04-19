project new
solution file add ./regression_tb_micro.cpp -exclude true
solution file add ./harris_color.cpp -exclude false
options set Flows/NCSim/NC_ROOT /cad/cadence/XCELIUMMAIN_20.09.007_lnx86
options set Input/CppStandard c++14
options set Flows/SCVerify/USE_NCSIM true
go analyze
solution design set harris_color -top
go compile
solution library add nangate-45nm_beh -- -rtlsyntool DesignCompiler -vendor Nangate -technology 045nm
solution library add ccs_sample_mem
solution library add amba
go libraries
directive set -CLOCKS {clk {-CLOCK_PERIOD 2 -CLOCK_EDGE rising -CLOCK_HIGH_TIME 1 -CLOCK_OFFSET 0.000000 -CLOCK_UNCERTAINTY 0.0 -RESET_KIND sync -RESET_SYNC_NAME rst -RESET_SYNC_ACTIVE high -RESET_ASYNC_NAME arst_n -RESET_ASYNC_ACTIVE low -ENABLE_NAME {} -ENABLE_ACTIVE high}}
go assembly
go architect
ignore_memory_precedences -from *read_mem(*cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9.f3.vals.val:rsc.@) -to *write_mem(*cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9.f7.vals.val:rsc.@) -to *write_mem(*cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9.f7.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9.f3.vals.val:rsc.@) -to *write_mem(*cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9.f7.vals.val:rsc.@) -to *write_mem(*cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9.f7.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12.f3.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12.f7.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12.f7.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12.f3.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12.f7.vals.val:rsc.@) -to *write_mem(*gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12.f7.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9.f3.vals.val:rsc.@) -to *write_mem(*lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9.f7.vals.val:rsc.@) -to *write_mem(*lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9.f7.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9.f3.vals.val:rsc.@) -to *write_mem(*lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9.f7.vals.val:rsc.@) -to *write_mem(*lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9.f7.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9.f3.vals.val:rsc.@) -to *write_mem(*lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9.f7.vals.val:rsc.@) -to *write_mem(*lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9.f7.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9.f3.vals.val:rsc.@) -to *write_mem(*lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9.f7.vals.val:rsc.@) -to *write_mem(*lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9.f7.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9.f3.vals.val:rsc.@) -to *write_mem(*lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9.f7.vals.val:rsc.@) -to *write_mem(*lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9.f7.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.f3.vals.val:rsc.@) -to *write_mem(*lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.f3.vals.val:rsc.@)
ignore_memory_precedences -from *read_mem(*lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.f7.vals.val:rsc.@) -to *write_mem(*lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.f7.vals.val:rsc.@)
go allocate
go extract
flow run /SCVerify/launch_make ./scverify/Verify_orig_cxx_osci.mk {} SIMTOOL=osci sim
flow run /SCVerify/launch_make ./scverify/Verify_concat_sim_rtl_v_ncsim.mk {} SIMTOOL=ncsim simgui
project save
