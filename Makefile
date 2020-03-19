all:
	nasm -f elf32 boot.asm -o obj/boot.o
	g++ -m32 -I includes/ libs/strings.cpp kernel/tty.cpp kernel/idt_table.cpp kernel/io.cpp irqs/irq_keyboard.cpp kernel/keyboard.cpp kernel/kmain.cpp obj/boot.o -o bin/kernel.bin -nostdlib -ffreestanding -std=c++11 -mno-red-zone -fno-exceptions -nostdlib -fno-rtti -Wall -Wextra  -T linker.ld -fno-pie

clean:
	rm obj/boot.o
	rm bin/kernel.bin