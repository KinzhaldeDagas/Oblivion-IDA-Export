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

  v0 = 0;
  lstrcpyA(String1, "XBoxSaves\\*.*");
  FirstFileA = FindFirstFileA(String1, &FindFileData);
  v22 = FirstFileA;
  if ( FirstFileA != (HANDLE)0xFFFFFFFF )
  {
    do
    {
      v2 = 0;
      if ( FindFileData.nFileSizeHigh || FindFileData.nFileSizeLow )
      {
        _sprintf(FileName, "XBoxSaves\\%s", FindFileData.cFileName);
        v3 = (_DWORD *)FormHeapAlloc(0x154u);
        v20 = (int)v3;
        v29 = 0;
        if ( v3 )
          v4 = BSFile_constr(v3, FileName, 0, 0x20000, 0);
        else
          v4 = 0;
        v5 = *(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v4 + 0x18);
        v29 = 0xFFFFFFFF;
        v5(v4, 0, 0);
        _sprintf(v27, "%s%s%s.ess", word_B3F280, lpString2, FindFileData.cFileName);
        v6 = (_DWORD *)FormHeapAlloc(0x154u);
        v20 = (int)v6;
        v29 = 1;
        if ( v6 )
        {
          v2 = BSFile_constr(v6, v27, 1, 0x20000, 0);
          v19 = v2;
        }
        else
        {
          v19 = 0;
        }
        v7 = BSFile_FilePos_Beg;
        v8 = *(void (__thiscall **)(_DWORD *, int, int))(*v4 + 0xC);
        v29 = 0xFFFFFFFF;
        v9 = FindFileData.nFileSizeLow - 0xD000;
        v21 = FindFileData.nFileSizeLow - 0xD000;
        v8(v4, 0xD000, v7);
        v10 = 1;
        if ( v9 > 0 )
        {
          do
          {
            v11 = 0xAA000;
            if ( v10 )
              v11 = 0xA9000;
            v18 = v11;
            v12 = (int (__cdecl *)(_DWORD *, _BYTE *, int, int *, int))v4[1];
            v20 = 1;
            v13 = v12(v4, v28, v18, &v20, 1);
            if ( v13 )
            {
              v14 = (void (__cdecl *)(_DWORD *, _BYTE *, int, int *, int))v2[2];
              v23 = 1;
              v14(v2, v28, v13, &v23, 1);
            }
            v15 = 0x2000;
            if ( v10 )
              v15 = 0x4000;
            (*(void (__thiscall **)(_DWORD *, int, int))(*v4 + 0xC))(v4, v15, BSFile_FilePos_Cur);
            v16 = v21 - (v13 + v15);
            v2 = v19;
            v10 = 0;
            v21 = v16;
          }
          while ( v16 > 0 );
        }
        if ( v2 )
          (*(void (__thiscall **)(_DWORD *, int))*v2)(v2, 1);
        (*(void (__thiscall **)(_DWORD *, int))*v4)(v4, 1);
        DeleteFileA(FileName);
        v0 = 1;
        FirstFileA = v22;
      }
    }
    while ( FindNextFileA(FirstFileA, &FindFileData) );
    FindClose(FirstFileA);
  }
  return v0;
}
