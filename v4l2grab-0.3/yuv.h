#ifndef _YUV_H_
#define _YUV_H_

typedef unsigned char  BYTE;
typedef unsigned short	WORD;
typedef unsigned long  DWORD;
#pragma pack(1)
typedef struct tagBITMAPFILEHEADER{
	WORD	bfType;			// the flag of bmp value is "BM"
	DWORD	bfSize;			// size BMP file ,unit is bytes
	DWORD	bfReserved;		// 0
	DWORD	bfOffBits;		// must be 54

}BITMAPFILEHEADER;

 
typedef struct tagBITMAPINFOHEADER{
	DWORD	biSize;			// must be 0x28
	DWORD	biWidth;		//
	DWORD	biHeight;		//
	WORD	biPlanes;		// must be 1
	WORD	biBitCount;		//
	DWORD	biCompression;		//
	DWORD	biSizeImage;		//
	DWORD	biXPelsPerMeter;	//
	DWORD	biYPelsPerMeter;	//
	DWORD	biClrUsed;		//
	DWORD	biClrImportant;		//
}BITMAPINFOHEADER;

void YUV422toRGB888(int width, int height, unsigned char *src, unsigned char *dst);
void YUV420toRGB888(int width, int height, unsigned char *src, unsigned char *dst);

#endif
