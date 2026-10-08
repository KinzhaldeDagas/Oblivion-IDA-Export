struct _SYSTEM_MODULE
{
PVOID Section;
PVOID MappedBaseAddress;
PVOID ImageBaseAddress;
ULONG ImageSize;
ULONG Flags;
WORD LoadOrderIndex;
WORD InitOrderIndex;
WORD LoadCount;
WORD NameOffset;
BYTE Name[256];
};
