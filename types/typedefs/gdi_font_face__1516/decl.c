struct gdi_font_face
{
list entry;
unsigned int refcount;
WCHAR_0 *style_name;
WCHAR_0 *full_name;
WCHAR_0 *file;
void *data_ptr;
SIZE_T data_size;
UINT face_index;
FONTSIGNATURE fs;
DWORD ntmFlags;
DWORD version;
DWORD flags;
BOOL scalable;
bitmap_font_size size;
gdi_font_family *family;
gdi_font_enum_data *cached_enum_data;
wine_rb_entry full_name_entry;
};
