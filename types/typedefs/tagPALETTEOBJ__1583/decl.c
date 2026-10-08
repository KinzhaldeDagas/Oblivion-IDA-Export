struct tagPALETTEOBJ
{
gdi_obj_header obj;
unrealize_function unrealize;
WORD version;
WORD count;
PALETTEENTRY *entries;
};
