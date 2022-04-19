project new
solution file add ./regression_tb_resnet_output_stationary.cpp -exclude true
solution file add ./resnet_output_stationary.cpp -exclude false
options set Flows/NCSim/NC_ROOT /cad/cadence/XCELIUMMAIN_20.09.007_lnx86
options set Input/CppStandard c++14
options set Flows/SCVerify/USE_NCSIM true
go analyze
solution design set resnet_output_stationary -top
go compile
solution library add nangate-45nm_beh -- -rtlsyntool DesignCompiler -vendor Nangate -technology 045nm
solution library add ccs_sample_mem
solution library add amba
go libraries
directive set -CLOCKS {clk {-CLOCK_PERIOD 2 -CLOCK_EDGE rising -CLOCK_HIGH_TIME 1 -CLOCK_OFFSET 0.000000 -CLOCK_UNCERTAINTY 0.0 -RESET_KIND sync -RESET_SYNC_NAME rst -RESET_SYNC_ACTIVE high -RESET_ASYNC_NAME arst_n -RESET_ASYNC_ACTIVE low -ENABLE_NAME {} -ENABLE_ACTIVE high}}
go assembly
go architect
ignore_memory_precedences -from "*read_mem(output_cgra_stencil_cache.output_cgra_stencil_op_hcompute_output_cgra_stencil_*" -to "*write_mem(output_cgra_stencil_cache.output_cgra_stencil_op_hcompute_output_cgra_stencil_*"
go allocate
go extract
flow run /SCVerify/launch_make ./scverify/Verify_orig_cxx_osci.mk {} SIMTOOL=osci sim
flow run /SCVerify/launch_make ./scverify/Verify_concat_sim_rtl_v_ncsim.mk {} SIMTOOL=ncsim simgui
project save
