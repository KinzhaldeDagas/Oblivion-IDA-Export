struct _SECTION_IMAGE_INFORMATION
{
PVOID TransferAddress;
ULONG ZeroBits;
__declspec(align(8)) SIZE_T MaximumStackSize;
SIZE_T CommittedStackSize;
ULONG SubSystemType;
USHORT MinorSubsystemVersion;
USHORT MajorSubsystemVersion;
USHORT MajorOperatingSystemVersion;
USHORT MinorOperatingSystemVersion;
USHORT ImageCharacteristics;
USHORT DllCharacteristics;
USHORT Machine;
BOOLEAN ImageContainsCode;
$9A07C57912C433457293DFC87571B272 u;
ULONG LoaderFlags;
ULONG ImageFileSize;
ULONG CheckSum;
};
