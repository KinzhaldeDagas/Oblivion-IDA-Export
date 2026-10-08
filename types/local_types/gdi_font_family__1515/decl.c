struct gdi_font_family
{
wine_rb_entry name_entry;
wine_rb_entry second_name_entry;
unsigned int refcount;
WCHAR_0 family_name[32];
WCHAR_0 second_name[32];
list faces;
gdi_font_family *replacement;
};
