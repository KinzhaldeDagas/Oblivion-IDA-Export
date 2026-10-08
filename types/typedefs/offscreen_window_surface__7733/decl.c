struct __declspec(align(8)) offscreen_window_surface
{
window_surface header;
CRITICAL_SECTION cs;
RECT bounds;
char *bits;
BITMAPINFO info;
};
