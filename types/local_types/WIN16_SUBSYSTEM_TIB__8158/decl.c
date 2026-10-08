struct WIN16_SUBSYSTEM_TIB
{
void *unknown;
UNICODE_STRING *exe_name;
UNICODE_STRING exe_str;
CURDIR curdir;
WCHAR_0 curdir_buffer[260];
};
