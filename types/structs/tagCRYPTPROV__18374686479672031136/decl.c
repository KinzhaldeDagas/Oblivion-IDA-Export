struct tagCRYPTPROV
{
DWORD dwMagic;
LONG refcount;
HMODULE hModule;
PPROVFUNCS pFuncs;
HCRYPTPROV hPrivate;
PVTableProvStruc pVTable;
};
