char __cdecl NiFile_CanOpenFileWithMode(char *a1, int a2)
{
  char v2; // bl
  size_t v4; // [esp-4h] [ebp-30h]
  _BYTE v5[40]; // [esp+4h] [ebp-28h] BYREF

  LODWORD(v4) = 0;
  NiFile::NiFile((NiFile *)v5, a1, a2, v4);
  v2 = v5[0x24];
  NiFile::~NiFile((NiFile *)v5);
  return v2;
}
