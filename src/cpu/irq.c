#include "../include/irq.h"
#include "../include/functions.h"

void irqInit()
{
	out(0x20, 0x11);
	out(0xA0, 0x11);
	out(0x21, 0x20);
	out(0xA1, 0x28);
	out(0x21, 0x04);
	out(0xA1, 0x02);
	out(0x21, 0x01);
	out(0xA1, 0x01);
	out(0x21, 0x00);
	out(0xA1, 0xff);
}

void irqEnable()
{
	asm volatile("sti");
}
