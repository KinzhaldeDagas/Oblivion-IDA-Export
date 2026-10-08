char __thiscall TESFile_OpenBSFile_(Data *this, LPCSTR lpString2, const CHAR *a3, int a4, char a5)
{
  void (__stdcall *v6)(LPSTR, LPCSTR); // esi
  BSFile *bsFile; // ecx
  HANDLE FirstFileA; // eax
  char *v9; // eax
  char *v10; // esi
  void (__stdcall *v11)(LPSTR, LPCSTR); // edi
  void (__stdcall *v12)(LPSTR, LPCSTR); // esi
  HANDLE v13; // eax
  _DWORD *v15; // eax
  BSFile *v16; // eax
  int v17; // eax
  char *name; // [esp-4h] [ebp-3B0h]
  struct _WIN32_FIND_DATAA FindFileData; // [esp+18h] [ebp-394h] BYREF
  struct _WIN32_FIND_DATAA v20; // [esp+158h] [ebp-254h] BYREF
  CHAR String1[260]; // [esp+298h] [ebp-114h] BYREF
  unsigned int v22; // [esp+3A8h] [ebp-4h]

  if ( !lpString2 || !a3 ) /*0x451609*/
    return 0; /*0x451609*/
  if ( a5 ) /*0x451617*/
    a4 = 1; /*0x451619*/
  v6 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcpyA; /*0x451624*/
  lstrcpyA(String1, lpString2); /*0x451633*/
  v6(this->filepath, lpString2); /*0x45163d*/
  lstrcatA(String1, a3); /*0x45164c*/
  v6(this->name, a3); /*0x45165b*/
  bsFile = this->bsFile; /*0x45165d*/
  if ( !bsFile ) /*0x451662*/
  {
    FirstFileA = FindFirstFileA(String1, &FindFileData); /*0x451675*/
    if ( FirstFileA == (HANDLE)0xFFFFFFFF ) /*0x45167e*/
    {
      v6(String1, this->filepath); /*0x45168d*/
      v9 = strchr(this->name, 0x2E); /*0x451692*/
      v10 = v9; /*0x45169a*/
      name = this->name; /*0x45169e*/
      if ( v9 ) /*0x45169f*/
      {
        v11 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA; /*0x4516a1*/
        *v9 = 0; /*0x4516af*/
        v11(String1, name); /*0x4516b2*/
        v11(String1, ".tes"); /*0x4516c1*/
        *v10 = 0x2E; /*0x4516c3*/
      }
      else
      {
        v12 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA; /*0x4516c8*/
        lstrcatA(String1, name); /*0x4516d6*/
        v12(String1, ".tes"); /*0x4516e5*/
      }
      v13 = FindFirstFileA(String1, &v20); /*0x4516f7*/
      if ( v13 != (HANDLE)0xFFFFFFFF ) /*0x451700*/
      {
        this->errorState = 0xC; /*0x451735*/
        FindClose(v13); /*0x45173b*/
        return 0; /*0x451741*/
      }
LABEL_11:
      this->errorState = 2; /*0x451702*/
      return 0; /*0x451731*/
    }
    FindClose(FirstFileA); /*0x451744*/
    if ( memcmp(&this->findData, &FindFileData, 0x140u) ) /*0x451764*/
    {
      this->fileFlags |= 2u; /*0x4517db*/
      qmemcpy(&this->findData, &FindFileData, sizeof(this->findData)); /*0x4517eb*/
    }
    v15 = (_DWORD *)FormHeapAlloc(0x154u); /*0x4517f2*/
    v22 = 0; /*0x451800*/
    if ( v15 ) /*0x45180b*/
      v16 = (BSFile *)BSFile_constr(v15, String1, a4, this->bufferSize, 0); /*0x451828*/
    else
      v16 = 0; /*0x45182f*/
    v22 = 0xFFFFFFFF; /*0x451833*/
    this->bsFile = v16; /*0x45183e*/
    if ( !v16 ) /*0x451841*/
      return 0; /*0x451841*/
    (*(void (__thiscall **)(BSFile *, int, _DWORD))(*(_DWORD *)v16 + 0x18))(v16, 1, 0); /*0x451852*/
    bsFile = this->bsFile; /*0x451854*/
    if ( !*((_BYTE *)bsFile + 0x24) ) /*0x451857*/
    {
      v17 = *_errno() - 2; /*0x451864*/
      if ( v17 ) /*0x451867*/
      {
        if ( v17 == 0xB ) /*0x451870*/
          this->errorState = 9; /*0x451876*/
        return 0; /*0x45187c*/
      }
      goto LABEL_11; /*0x451867*/
    }
  }
  this->fileSize = (*(int (__thiscall **)(BSFile *))(*(_DWORD *)bsFile + 0x1C))(bsFile); /*0x451890*/
  TESFile_JumpToBOF(this, a4 == 0); /*0x45189c*/
  return 1; /*0x45170a*/
}
