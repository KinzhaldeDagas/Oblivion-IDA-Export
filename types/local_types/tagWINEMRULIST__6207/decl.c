struct tagWINEMRULIST
{
MRUINFOW extview;
BOOL isUnicode;
DWORD wineFlags;
DWORD cursize;
LPWSTR realMRU;
LPWINEMRUITEM *array;
};
