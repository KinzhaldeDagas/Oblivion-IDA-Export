struct __declspec(align(8)) display_device
{
list entry;
list children;
WCHAR_0 device_name[32];
WCHAR_0 device_string[128];
DWORD state_flags;
WCHAR_0 device_id[128];
WCHAR_0 interface_name[128];
WCHAR_0 device_key[128];
};
