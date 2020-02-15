#include "dat.h"
#include "regs.h"

uint *ioram = (uint*)IORAM;
ushort *vram = (ushort*)VRAM;

Point
Pt(int x, int y)
{
	return (Point){x,y};
}

ushort
rgb(int r, int g, int b)
{
	ushort c;

	c = 0;
	c |= (r&0x1f)<<10;
	c |= (g&0x1f)<<5;
	c |= b&0x1f;
	return c;
}

void
drawpixel(Point p, ushort col)
{
	vram[p.x+p.y*SCRW] = col;
}

int
main()
{
	int i, c;

	*ioram = 0x0403;
	for(i = 0; i < SCRH; i++){
		c = 31*i/SCRH;
		drawpixel(Pt(i,i), rgb(c,c,c));
	}
	for(;;);
	return 0;
}
