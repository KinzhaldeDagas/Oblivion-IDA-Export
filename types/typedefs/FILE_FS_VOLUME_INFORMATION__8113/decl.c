struct __declspec(align(8)) _FILE_FS_VOLUME_INFORMATION
{
LARGE_INTEGER_1 VolumeCreationTime;
ULONG VolumeSerialNumber;
ULONG VolumeLabelLength;
BOOLEAN SupportsObjects;
WCHAR_0 VolumeLabel[1];
};
