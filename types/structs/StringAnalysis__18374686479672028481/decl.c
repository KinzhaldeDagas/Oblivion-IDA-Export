struct StringAnalysis
{
HDC hdc;
DWORD ssa_flags;
DWORD flags;
int clip_len;
int cItems;
int cMaxGlyphs;
SCRIPT_ITEM *pItem;
int numItems;
StringGlyphs *glyphs;
SCRIPT_LOGATTR *logattrs;
SIZE sz;
int *logical2visual;
};
