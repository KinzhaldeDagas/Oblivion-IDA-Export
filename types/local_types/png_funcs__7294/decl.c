struct png_funcs
{
BOOL (*get_png_info)(const void *, DWORD, int *, int *, int *);
BITMAPINFO *(*load_png)(const char *, DWORD *);
};
