
//{{BLOCK(TFont)

typedef struct TFont
{
	const void	*data;				//!< Character data.
	const unsigned char	*widths;	//!< Width table for vwf.
	const unsigned char	*heights;	//!< Height table for vhf.
	unsigned short	charOffset;		//!< Character offset.
	unsigned short	charCount;		//!< Character count.
	unsigned char	charW;			//!< Character width (fwf).
	unsigned char	charH;			//!< Character height.
	unsigned char	cellW;			//!< Glyph cell width.
	unsigned char	cellH;			//!< Glyph cell height.
	unsigned short	cellSize;		//!< Cell-size (bytes).
	unsigned char	bpp;				//!< Font bitdepth;
	unsigned char	extra;			//!< Padding. Free to use.
} TFont;

//}}BLOCK(TFont)


//{{BLOCK(NumbersSmall)

const unsigned int NumbersSmallGlyphs[160] __attribute__((aligned(4)))=
{
	0x01111110,0x11111111,0x11000011,0x11000011,0x11000011,0x11111111,0x01111110,0x44444444,
	0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444444,
	0x40001110,0x40001111,0x40001111,0x40001100,0x40001100,0x40111111,0x40111111,0x44444444,
	0x44444444,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444,
	0x01111110,0x11111111,0x11100211,0x02112000,0x00011120,0x11111111,0x11111111,0x44444444,
	0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444444,
	0x01111110,0x11111111,0x11000011,0x01100000,0x11000011,0x11111111,0x01111110,0x44444444,
	0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444444,

	0x01110000,0x01111000,0x01101100,0x01100110,0x11111111,0x11111111,0x01100000,0x44444444,
	0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444444,
	0x11111111,0x11111111,0x00000111,0x01111112,0x11120000,0x11111111,0x01111112,0x44444444,
	0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444444,
	0x01111120,0x11111112,0x00000211,0x01111111,0x11000011,0x11111111,0x01111110,0x44444444,
	0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444444,
	0x11111111,0x11111111,0x11100000,0x01110000,0x00111000,0x00011100,0x00001110,0x44444444,
	0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444444,

	0x01111110,0x11111111,0x11000011,0x01111110,0x11000011,0x11111111,0x01111110,0x44444444,
	0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444444,
	0x02111110,0x21111111,0x11200011,0x11111112,0x11000000,0x11111111,0x01111111,0x44444444,
	0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444440,0x44444444,
};

const unsigned char NumbersSmallWidths[12] __attribute__((aligned(4)))=
{
	0x09,0x07,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,
};

const TFont NumbersSmallFont= 
{
	NumbersSmallGlyphs, NumbersSmallWidths, 
0, 
	48, 10,
	16, 8,
	16, 8, 64, 
	4, 0, 
};

//}}BLOCK(NumbersSmall)