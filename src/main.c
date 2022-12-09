#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

uint_8 rom[256];
uint_8 ram[40];
int ip = 0;
bool running = true;
int main() {
	while(running) {
		switch(rom[ip]) {
			case 0x00:
				break;
			default:
				printf("Undefined opcode at %d!\n", ip);
		}
		ip++;
	}
	
}
