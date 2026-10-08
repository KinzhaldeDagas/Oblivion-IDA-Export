struct mountmgr_unix_drive
{
ULONG size;
ULONG type;
ULONG fs_type;
DWORD serial;
ULONGLONG unix_dev;
WCHAR_0 letter;
USHORT mount_point_offset;
USHORT device_offset;
USHORT label_offset;
};
