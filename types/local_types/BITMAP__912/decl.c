struct BITMAP
{
INT bmType;
INT bmWidth;
INT bmHeight;
INT bmWidthBytes;
WORD bmPlanes;
WORD bmBitsPixel;
LPVOID bmBits __offset(OFF64|AUTO);
};
