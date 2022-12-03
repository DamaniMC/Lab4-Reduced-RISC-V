rm -rf oj_dir
rm -f CPU.vcd

verilator -cc -trace CPU.sv --exe CPU_tb.cpp

make -j -C obj_dir/ -f VCPU.mk VCPU

obj_dir/VCPU