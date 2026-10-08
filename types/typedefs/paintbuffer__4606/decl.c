struct paintbuffer
{
HDC targetdc;
HDC memorydc;
HBITMAP bitmap;
RECT rect;
void *bits;
};
