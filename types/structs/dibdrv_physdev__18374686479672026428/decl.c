struct dibdrv_physdev
{
gdi_physdev dev;
dib_info dib;
dib_brush_0 brush;
HRGN clip;
RECT *bounds;
cached_font *font;
DWORD pen_style;
DWORD pen_endcap;
DWORD pen_join;
BOOL pen_uses_region;
BOOL pen_is_ext;
int pen_width;
dib_brush_0 pen_brush;
dash_pattern pen_pattern;
dash_pos dash_pos;
rop_mask dash_masks[2];
BOOL (*pen_lines)(dibdrv_physdev *, int, POINT *, BOOL, HRGN);
};
