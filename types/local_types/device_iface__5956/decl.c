struct device_iface
{
WCHAR_0 *refstr;
WCHAR_0 *symlink;
device *device;
GUID class;
DWORD flags;
HKEY class_key;
HKEY refstr_key;
list entry;
};
