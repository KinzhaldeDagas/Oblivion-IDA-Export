struct font_backend_funcs
{
void (*load_fonts)(void);
BOOL (*enum_family_fallbacks)(DWORD, int, WCHAR_0 *);
INT (*add_font)(const WCHAR_0 *, DWORD);
INT (*add_mem_font)(void *, SIZE_T, DWORD);
BOOL (*load_font)(gdi_font *);
DWORD (*get_font_data)(gdi_font *, DWORD, DWORD, void *, DWORD);
UINT (*get_aa_flags)(gdi_font *, UINT, BOOL);
BOOL (*get_glyph_index)(gdi_font *, UINT *, BOOL);
UINT (*get_default_glyph)(gdi_font *);
DWORD (*get_glyph_outline)(gdi_font *, UINT, UINT, GLYPHMETRICS *, ABC *, DWORD, void *, const MAT2 *, BOOL);
DWORD (*get_unicode_ranges)(gdi_font *, GLYPHSET *);
BOOL (*get_char_width_info)(gdi_font *, char_width_info *);
BOOL (*set_outline_text_metrics)(gdi_font *);
BOOL (*set_bitmap_text_metrics)(gdi_font *);
DWORD (*get_kerning_pairs)(gdi_font *, KERNINGPAIR **);
void (*destroy_font)(gdi_font *);
};
