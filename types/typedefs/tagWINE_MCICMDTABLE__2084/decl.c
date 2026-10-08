struct tagWINE_MCICMDTABLE
{
UINT uDevType;
HGLOBAL hMem;
const BYTE *lpTable;
UINT nVerbs;
LPCWSTR *aVerbs;
};
