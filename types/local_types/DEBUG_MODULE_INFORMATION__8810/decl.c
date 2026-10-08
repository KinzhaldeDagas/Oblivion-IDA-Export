struct _DEBUG_MODULE_INFORMATION
{
ULONG Reserved[2];
ULONG Base;
ULONG Size;
ULONG Flags;
USHORT Index;
USHORT Unknown;
USHORT LoadCount;
USHORT ModuleNameOffset;
CHAR ImageName[256];
};
