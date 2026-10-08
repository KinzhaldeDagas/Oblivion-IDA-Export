struct DirEntry
{
WCHAR_0 name[32];
WORD sizeOfNameString;
BYTE stgType;
DirRef leftChild;
DirRef rightChild;
DirRef dirRootEntry;
GUID clsid;
FILETIME ctime;
FILETIME mtime;
ULONG startingBlock;
__declspec(align(8)) ULARGE_INTEGER size;
};
