make clean
make
qemu-system-x86_64 -serial stdio -fda bin/kernel.bin 