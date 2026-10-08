struct _FILE_BOTH_DIRECTORY_INFORMATION
{
ULONG NextEntryOffset;
ULONG FileIndex;
LARGE_INTEGER_1 CreationTime;
LARGE_INTEGER_1 LastAccessTime;
LARGE_INTEGER_1 LastWriteTime;
LARGE_INTEGER_1 ChangeTime;
LARGE_INTEGER_1 EndOfFile;
LARGE_INTEGER_1 AllocationSize;
ULONG FileAttributes;
ULONG FileNameLength;
ULONG EaSize;
CHAR ShortNameLength;
WCHAR_0 ShortName[12];
WCHAR_0 FileName[1];
};
