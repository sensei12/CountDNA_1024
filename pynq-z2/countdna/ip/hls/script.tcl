############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project countdna
set_top countdna
add_files countdna.c
add_files countdna.h
add_files -tb countdna_tb.c -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution3"
set_part {xc7z020-clg400-1}
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog
#source "./countdna/solution3/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all
export_design -flow impl -rtl verilog -format ip_catalog
