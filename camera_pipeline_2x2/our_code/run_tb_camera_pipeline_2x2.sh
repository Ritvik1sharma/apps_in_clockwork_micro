g++ -std=c++0x regression_tb_camera_pipeline_2x2.cpp camera_pipeline_2x2.cpp -I ../../.. -I /cad/xilinx/vivado/2017.2/Vivado_HLS/2017.2/include/ || { echo 'testbench compilation failed'; exit 1; }
./a.out
