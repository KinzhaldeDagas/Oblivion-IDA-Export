struct file_entry
{
list entry;
WCHAR_0 *path;
UINT operation;
__declspec(align(8)) LONGLONG size;
};
