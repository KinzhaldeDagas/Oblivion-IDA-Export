struct primitive_funcs
{
void (*solid_rects)(const dib_info *, int, const RECT *, DWORD, DWORD);
void (*solid_line)(const dib_info *, const POINT *, const line_params *, DWORD, DWORD);
void (*pattern_rects)(const dib_info *, int, const RECT *, const POINT *, const dib_info *, const rop_mask_bits *);
void (*copy_rect)(const dib_info *, const RECT *, const dib_info *, const POINT *, int, int);
void (*blend_rects)(const dib_info *, int, const RECT *, const dib_info *, const POINT *, BLENDFUNCTION);
BOOL (*gradient_rect)(const dib_info *, const RECT *, const TRIVERTEX *, int);
void (*mask_rect)(const dib_info *, const RECT *, const dib_info *, const POINT *, int);
void (*draw_glyph)(const dib_info *, const RECT *, const dib_info *, const POINT *, DWORD, const intensity_range *);
void (*draw_subpixel_glyph)(const dib_info *, const RECT *, const dib_info *, const POINT *, DWORD, const font_gamma_ramp *);
DWORD (*get_pixel)(const dib_info *, int, int);
DWORD (*colorref_to_pixel)(const dib_info *, COLORREF);
COLORREF (*pixel_to_colorref)(const dib_info *, DWORD);
void (*convert_to)(dib_info *, const dib_info *, const RECT *, BOOL);
void (*create_rop_masks)(const dib_info *, const BYTE *, const rop_mask *, const rop_mask *, rop_mask_bits *);
void (*create_dither_masks)(const dib_info *, int, COLORREF, rop_mask_bits *);
void (*stretch_row)(const dib_info *, const POINT *, const dib_info *, const POINT *, const stretch_params *, int, BOOL);
void (*shrink_row)(const dib_info *, const POINT *, const dib_info *, const POINT *, const stretch_params *, int, BOOL);
void (*halftone)(const dib_info *, const bitblt_coords *, const dib_info *, const bitblt_coords *);
};
