struct cached_font
{
list entry;
LONG ref;
DWORD hash;
LOGFONTW lf;
XFORM xform;
UINT aa_flags;
cached_glyph **glyphs[2][256] __offset(OFF64|AUTO);
};
