test.dmp: test.elf
	riscv64-unknown-elf-elf2hex --bit-width 32 --input test.elf --output testhex.txt
	riscv64-unknown-elf-objdump -d test.elf>test.dmp
test.elf: test.c lscript bootstrap.s
	riscv64-unknown-elf-gcc -O0 -Wall -nostdlib -march=rv32imav -mabi=ilp32 -T lscript bootstrap.s test.c -o test.elf
clean:
	rm test.elf test.dmp