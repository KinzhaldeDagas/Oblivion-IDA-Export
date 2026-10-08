struct _D3DKMT_CREATEDCFROMMEMORY
{
void *pMemory;
D3DDDIFORMAT Format;
UINT Width;
UINT Height;
UINT Pitch;
HDC hDeviceDc;
PALETTEENTRY *pColorTable;
HDC hDc;
HANDLE hBitmap;
};
