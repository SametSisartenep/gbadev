/* memory map */
enum {
	SYSROM	= 0x00000000,
	EWRAM	= 0x02000000,
	IWRAM	= 0x03000000,
	IORAM	= 0x04000000,
	PALRAM	= 0x05000000,
	VRAM	= 0x06000000,
	OAM	= 0x07000000,
	PAKROM	= 0x08000000,
	CART	= 0x0E000000
};
/* i/o registers */
enum {
	DISPCNT		= 0x00,	/* LCD control */
		BGMODE0	= 0x0000,
		BGMODE1 = 0x0001,
		BGMODE2 = 0x0002,
		BGMODE3 = 0x0003,
		BGMODE4 = 0x0004,
		BGMODE5 = 0x0005,
		DISPBG0	= 0x0100,
		DISPBG1	= 0x0200,
		DISPBG2	= 0x0400,
		DISPBG3	= 0x0800,
		DISPOBJ	= 0x1000,
	DISPSTAT	= 0x04,	/* general LCD status */
	VCOUNT		= 0x06,
	BG0CNT		= 0x08,
	BG1CNT		= 0x0A,
	BG2CNT		= 0x0C,
	BG3CNT		= 0x0E,
	BG0HOFS		= 0x10,
	BG0VOFS		= 0x12,
	BG1HOFS		= 0x14,
	BG1VOFS		= 0x16,
	BG2HOFS		= 0x18,
	BG2VOFS		= 0x1A,
	BG3HOFS		= 0x1C,
	BG3VOFS		= 0x1E,
	BG2PA		= 0x20,	/* BG2 Rotation/Scaling Parameter A (dx) */
	BG2PB		= 0x22,	/* BG2 Rotation/Scaling Parameter B (dmx) */
	BG2PC		= 0x24,	/* BG2 Rotation/Scaling Parameter C (dy) */
	BG2PD		= 0x26,	/* BG2 Rotation/Scaling Parameter D (dmy) */
	BG2X		= 0x28,	/* BG2 Reference Point X-Coordinate */
	BG2Y		= 0x2C,	/* BG2 Reference Point X-Coordinate */
	BG3PA		= 0x30,	/* BG3 Rotation/Scaling Parameter A (dx) */
	BG3PB		= 0x32,	/* BG3 Rotation/Scaling Parameter B (dmx) */
	BG3PC		= 0x34,	/* BG3 Rotation/Scaling Parameter C (dy) */
	BG3PD		= 0x36,	/* BG3 Rotation/Scaling Parameter D (dmy) */
	BG3X		= 0x38,	/* BG3 Reference Point X-Coordinate */
	BG3Y		= 0x3C,	/* BG3 Reference Point Y-Coordinate */
	WIN0H		= 0x40,	/* Window 0 Horizontal Dimensions */
	WIN1H		= 0x42,	/* Window 1 Horizontal Dimensions */
	WIN0V		= 0x44, /* Window 0 Vertical Dimensions */
	WIN1V		= 0x46,	/* Window 1 Vertical Dimensions */
	WININ		= 0x48,	/* Inside of Window 0 and 1 */
	WINOUT		= 0x4A,	/* Inside of OBJ Window & Outside of Windows */
	MOSAIC		= 0x4C,	/* Mosaic Size */
	BLDCNT		= 0x50,	/* Color Special Effects Selection */
	BLDALPHA	= 0x52,	/* Alpha Blending Coefficients */
	BLDY		= 0x54	/* Brightness (Fade-In/Out) Coefficient */
};
