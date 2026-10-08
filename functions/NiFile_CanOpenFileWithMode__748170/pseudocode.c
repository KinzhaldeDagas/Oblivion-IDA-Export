char __cdecl NiFile_CanOpenFileWithMode(char *a1, int a2)
{
  char v2; // bl
  size_t v4; // [esp-4h] [ebp-30h]
  _BYTE v5[40]; // [esp+4h] [ebp-28h] BYREF

  LODWORD(v4) = 0; /*0x74817c*/
  NiFile::NiFile((NiFile *)v5, a1, a2, v4); /*0x748184*/
  v2 = v5[0x24]; /*0x748189*/
  NiFile::~NiFile((NiFile *)v5); /*0x748191*/
  return v2; /*0x748198*/
}
