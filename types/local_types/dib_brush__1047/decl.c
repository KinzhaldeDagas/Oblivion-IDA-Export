struct dib_brush
{
UINT style;
UINT hatch;
INT rop;
COLORREF colorref;
dib_info dib;
rop_mask_bits masks;
brush_pattern pattern;
BOOL (*rects)(dibdrv_physdev *, dib_brush *, dib_info *, int, const RECT *, const POINT *, INT);
};
