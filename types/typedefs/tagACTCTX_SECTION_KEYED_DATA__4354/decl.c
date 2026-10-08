struct tagACTCTX_SECTION_KEYED_DATA
{
ULONG cbSize;
ULONG ulDataFormatVersion;
PVOID lpData;
ULONG ulLength;
PVOID lpSectionGlobalData;
ULONG ulSectionGlobalDataLength;
PVOID lpSectionBase;
ULONG ulSectionTotalLength;
HANDLE hActCtx;
ULONG ulAssemblyRosterIndex;
ULONG ulFlags;
ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA AssemblyMetadata;
};
