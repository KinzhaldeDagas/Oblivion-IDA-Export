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

  if ( !lpString2 || !a3 )
    return 0;
  if ( a5 )
    a4 = 1;
  v6 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcpyA;
  lstrcpyA(String1, lpString2);
  v6(this->filepath, lpString2);
  lstrcatA(String1, a3);
  v6(this->name, a3);
  bsFile = this->bsFile;
  if ( !bsFile )
  {
    FirstFileA = FindFirstFileA(String1, &FindFileData);
    if ( FirstFileA == (HANDLE)0xFFFFFFFF )
    {
      v6(String1, this->filepath);
      v9 = strchr(this->name, 0x2E);
      v10 = v9;
      name = this->name;
      if ( v9 )
      {
        v11 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA;
        *v9 = 0;
        v11(String1, name);
        v11(String1, ".tes");
        *v10 = 0x2E;
      }
      else
      {
        v12 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA;
        lstrcatA(String1, name);
        v12(String1, ".tes");
      }
      v13 = FindFirstFileA(String1, &v20);
      if ( v13 != (HANDLE)0xFFFFFFFF )
      {
        this->errorState = 0xC;
        FindClose(v13);
        return 0;
      }
LABEL_11:
      this->errorState = 2;
      return 0;
    }
    FindClose(FirstFileA);
    if ( memcmp(&this->findData, &FindFileData, 0x140u) )
    {
      this->fileFlags |= 2u;
      qmemcpy(&this->findData, &FindFileData, sizeof(this->findData));
    }
    v15 = (_DWORD *)FormHeapAlloc(0x154u);
    v22 = 0;
    if ( v15 )
      v16 = (BSFile *)BSFile_constr(v15, String1, a4, this->bufferSize, 0);
    else
      v16 = 0;
    v22 = 0xFFFFFFFF;
    this->bsFile = v16;
    if ( !v16 )
      return 0;
    (*(void (__thiscall **)(BSFile *, int, _DWORD))(*(_DWORD *)v16 + 0x18))(v16, 1, 0);
    bsFile = this->bsFile;
    if ( !*((_BYTE *)bsFile + 0x24) )
    {
      v17 = *_errno() - 2;
      if ( v17 )
      {
        if ( v17 == 0xB )
          this->errorState = 9;
        return 0;
      }
      goto LABEL_11;
    }
  }
  this->fileSize = (*(int (__thiscall **)(BSFile *))(*(_DWORD *)bsFile + 0x1C))(bsFile);
  TESFile_JumpToBOF(this, a4 == 0);
  return 1;
}
