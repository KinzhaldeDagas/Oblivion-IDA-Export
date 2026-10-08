struct WINEREGION
{
gdi_obj_header obj;
INT size;
INT numRects;
RECT *rects __offset(OFF64|AUTO);
RECT extents;
RECT rects_buf[4];
};
