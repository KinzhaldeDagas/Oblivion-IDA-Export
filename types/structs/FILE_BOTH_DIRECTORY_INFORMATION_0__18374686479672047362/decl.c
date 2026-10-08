struct _FILE_BOTH_DIRECTORY_INFORMATION_0
{
ULONG NextEntryOffset;
ULONG FileIndex;
LARGE_INTEGER_0 CreationTime;
LARGE_INTEGER_0 LastAccessTime;
LARGE_INTEGER_0 LastWriteTime;
LARGE_INTEGER_0 ChangeTime;
LARGE_INTEGER_0 EndOfFile;
LARGE_INTEGER_0 AllocationSize;
ULONG FileAttributes;
ULONG FileNameLength;
ULONG EaSize;
CHAR ShortNameLength;
WCHAR_0 ShortName[12];
WCHAR_0 FileName[1];
};
