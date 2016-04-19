sim_tool="modelsim"
top_module="main"
action = "simulation"
target = "xilinx"
fetchto = "../../ip_cores"
syn_device="xc6slx45t"
include_dirs=["../include","gn4124_bfm", "ddr3"]

files = [
    "main.sv",
    "ddr3/ddr3.v",
    "../../../ip_cores/adc_serdes.vhd",
    "../../../ip_cores/monostable/monostable_rtl.vhd",
    "../../../ip_cores/ext_pulse_sync/ext_pulse_sync_rtl.vhd",
    "../../../ip_cores/utils/utils_pkg.vhd"]

modules = { "local" :  [ "../../rtl",
                         "gn4124_bfm",
                         "../../../adc/rtl",
                         "../../../ip_cores/timetag_core/rtl",
			 "../../../ip_cores/general-cores",
			 "../../../ip_cores/ddr3-sp6-core",
                         "../../../ip_cores/gn4124-core" ]};

ctrls = ["bank3_64b_32b" ]
