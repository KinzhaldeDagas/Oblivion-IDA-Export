char sub_45E6A0()
{
  char v0; // bl
  HANDLE FirstFileA; // esi
  _DWORD *v2; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  void (__thiscall *v5)(_DWORD *, _DWORD, _DWORD); // edx
  _DWORD *v6; // eax
  int v7; // eax
  void (__thiscall *v8)(_DWORD *, int, int); // edx
  signed int v9; // ebp
  char v10; // bl
  int v11; // eax
  int (__cdecl *v12)(_DWORD *, _BYTE *, int, int *, int); // eax
  int v13; // ebp
  void (__cdecl *v14)(_DWORD *, _BYTE *, int, int *, int); // eax
  int v15; // edi
  int v16; // eax
  int v18; // [esp-2h] [ebp-AA494h]
  _DWORD *v19; // [esp+22h] [ebp-AA470h]
  int v20; // [esp+26h] [ebp-AA46Ch] BYREF
  DWORD v21; // [esp+2Ah] [ebp-AA468h]
  HANDLE v22; // [esp+2Eh] [ebp-AA464h]
  int v23; // [esp+32h] [ebp-AA460h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+36h] [ebp-AA45Ch] BYREF
  CHAR FileName[260]; // [esp+176h] [ebp-AA31Ch] BYREF
  CHAR String1[260]; // [esp+27Ah] [ebp-AA218h] BYREF
  char v27[260]; // [esp+37Eh] [ebp-AA114h] BYREF
  _BYTE v28[696320]; // [esp+482h] [ebp-AA010h] BYREF
  int v29; // [esp+AA48Eh] [ebp-4h]

  v0 = 0; /*0x45e6ec*/
  lstrcpyA(String1, "XBoxSaves\\*.*"); /*0x45e6ee*/
  FirstFileA = FindFirstFileA(String1, &FindFileData); /*0x45e707*/
  v22 = FirstFileA; /*0x45e70e*/
  if ( FirstFileA != (HANDLE)0xFFFFFFFF ) /*0x45e712*/
  {
    do /*0x45e8f5*/
    {
      v2 = 0; /*0x45e718*/
      if ( FindFileData.nFileSizeHigh || FindFileData.nFileSizeLow ) /*0x45e724*/
      {
        _sprintf(FileName, "XBoxSaves\\%s", FindFileData.cFileName); /*0x45e741*/
        v3 = (_DWORD *)FormHeapAlloc(0x154u); /*0x45e74b*/
        v20 = (int)v3; /*0x45e753*/
        v29 = 0; /*0x45e759*/
        if ( v3 ) /*0x45e760*/
          v4 = BSFile_constr(v3, FileName, 0, 0x20000, 0); /*0x45e778*/
        else
          v4 = 0; /*0x45e77c*/
        v5 = *(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v4 + 0x18); /*0x45e780*/
        v29 = 0xFFFFFFFF; /*0x45e787*/
        v5(v4, 0, 0); /*0x45e78e*/
        _sprintf(v27, "%s%s%s.ess", unk_B3F280, lpString2, FindFileData.cFileName); /*0x45e7ae*/
        v6 = (_DWORD *)FormHeapAlloc(0x154u); /*0x45e7b8*/
        v20 = (int)v6; /*0x45e7c0*/
        v29 = 1; /*0x45e7c6*/
        if ( v6 ) /*0x45e7d1*/
        {
          v2 = BSFile_constr(v6, v27, 1, 0x20000, 0); /*0x45e7ea*/
          v19 = v2; /*0x45e7ec*/
        }
        else
        {
          v19 = 0; /*0x45e7f2*/
        }
        v7 = BSFile_FilePos_Beg; /*0x45e7f6*/
        v8 = *(void (__thiscall **)(_DWORD *, int, int))(*v4 + 0xC); /*0x45e7fd*/
        v29 = 0xFFFFFFFF; /*0x45e800*/
        v9 = FindFileData.nFileSizeLow - 0xD000; /*0x45e80c*/
        v21 = FindFileData.nFileSizeLow - 0xD000; /*0x45e819*/
        v8(v4, 0xD000, v7); /*0x45e81d*/
        v10 = 1; /*0x45e821*/
        if ( v9 > 0 ) /*0x45e823*/
        {
          do /*0x45e8b8*/
          {
            v11 = 0xAA000; /*0x45e832*/
            if ( v10 ) /*0x45e837*/
              v11 = 0xA9000; /*0x45e839*/
            v18 = v11; /*0x45e845*/
            v12 = (int (__cdecl *)(_DWORD *, _BYTE *, int, int *, int))v4[1]; /*0x45e846*/
            v20 = 1; /*0x45e852*/
            v13 = v12(v4, v28, v18, &v20, 1); /*0x45e85c*/
            if ( v13 ) /*0x45e863*/
            {
              v14 = (void (__cdecl *)(_DWORD *, _BYTE *, int, int *, int))v2[2]; /*0x45e865*/
              v23 = 1; /*0x45e879*/
              v14(v2, v28, v13, &v23, 1); /*0x45e881*/
            }
            v15 = 0x2000; /*0x45e888*/
            if ( v10 ) /*0x45e88d*/
              v15 = 0x4000; /*0x45e88f*/
            (*(void (__thiscall **)(_DWORD *, int, int))(*v4 + 0xC))(v4, v15, BSFile_FilePos_Cur); /*0x45e8a2*/
            v16 = v21 - (v13 + v15); /*0x45e8aa*/
            v2 = v19; /*0x45e8ac*/
            v10 = 0; /*0x45e8b0*/
            v21 = v16; /*0x45e8b4*/
          }
          while ( v16 > 0 ); /*0x45e8b8*/
        }
        if ( v2 ) /*0x45e8c0*/
          (*(void (__thiscall **)(_DWORD *, int))*v2)(v2, 1); /*0x45e8ca*/
        (*(void (__thiscall **)(_DWORD *, int))*v4)(v4, 1); /*0x45e8d4*/
        DeleteFileA(FileName); /*0x45e8de*/
        v0 = 1; /*0x45e8e4*/
        FirstFileA = v22; /*0x45e8e8*/
      }
    }
    while ( FindNextFileA(FirstFileA, &FindFileData) ); /*0x45e8f5*/
    FindClose(FirstFileA); /*0x45e904*/
  }
  return v0; /*0x45e90c*/
}
