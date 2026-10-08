int __thiscall Archive_GetFileNameByFolderAndIndex(_DWORD *this, unsigned int a2, signed int a3)
{
  int result; // eax
  unsigned int v5; // eax
  int v6; // ebp
  int v7; // edi
  bool v8; // al
  void (__thiscall *v9)(_DWORD *, int, int); // edx
  void (__cdecl *v10)(_DWORD *, int, int, unsigned int *, int); // edx
  void (__cdecl *v11)(_DWORD *, int, int, unsigned int *, int); // eax
  unsigned int i; // edi
  void (__cdecl *v13)(_DWORD *, unsigned int *, int, int *, int); // eax
  signed int v14; // ebp
  void (__cdecl *v15)(_DWORD *, unsigned int *, int, signed int *, int); // ecx
  void (__cdecl *v16)(_DWORD *, int, int, unsigned int *, int); // ecx
  void (__cdecl *v17)(_DWORD *, int, int, unsigned int *, int); // edx
  int v18; // [esp-18h] [ebp-2Ch]
  int v19; // [esp-18h] [ebp-2Ch]
  int v20; // [esp-18h] [ebp-2Ch]
  int v21; // [esp-18h] [ebp-2Ch]
  unsigned int v22; // [esp+8h] [ebp-Ch]
  int v23; // [esp+Ch] [ebp-8h] BYREF
  int v24; // [esp+10h] [ebp-4h]

  if ( (*(_BYTE *)(this + 0x65) & 0x20) != 0 ) /*0x42cc0d*/
    return *(this + 0x68) + *(_DWORD *)(*(_DWORD *)(*(this + 0x69) + 4 * a2) + 4 * a3); /*0x42cc2d*/
  if ( (*(this + 0x58) & 2) == 0 ) /*0x42cc40*/
    return 0; /*0x42ce28*/
  v5 = *(this + 0x68); /*0x42cc46*/
  v6 = 0; /*0x42cc4d*/
  if ( v5 ) /*0x42cc51*/
  {
    FormHeapFree(v5); /*0x42cc54*/
    *(this + 0x68) = 0; /*0x42cc5c*/
  }
  v7 = 0; /*0x42cc63*/
  v24 = 0; /*0x42cc6a*/
  *(this + 0x68) = FormHeapAlloc(0x100u); /*0x42cc73*/
  if ( iRetainFilenameOffsetTable_Archive == 1 ) /*0x42cc83*/
    v8 = (*(this + 0x58) & 0x20) != 0; /*0x42cc8e*/
  else
    v8 = iRetainFilenameOffsetTable_Archive != 0; /*0x42cc94*/
  v9 = *(void (__thiscall **)(_DWORD *, int, int))(*this + 0xC); /*0x42cc99*/
  if ( v8 ) /*0x42cca4*/
  {
    v9(this, *(this + 0x62) + *(_DWORD *)(*(_DWORD *)(*(this + 0x69) + 4 * a2) + 4 * a3), BSFile_FilePos_Beg); /*0x42ccc7*/
    v10 = (void (__cdecl *)(_DWORD *, int, int, unsigned int *, int))*(this + 1); /*0x42cccf*/
    v18 = *(this + 0x68); /*0x42ccd9*/
    a2 = 1; /*0x42ccdb*/
    v10(this, v18, 1, &a2, 1); /*0x42ccdf*/
    if ( *(_BYTE *)*(this + 0x68) ) /*0x42ccea*/
    {
      do /*0x42cd15*/
      {
        v11 = (void (__cdecl *)(_DWORD *, int, int, unsigned int *, int))*(this + 1); /*0x42ccf6*/
        v19 = ++v7 + *(this + 0x68); /*0x42cd04*/
        a2 = 1; /*0x42cd06*/
        v11(this, v19, 1, &a2, 1); /*0x42cd0a*/
      }
      while ( *(_BYTE *)(v7 + *(this + 0x68)) ); /*0x42cd15*/
    }
    return *(this + 0x68); /*0x42cd28*/
  }
  v9(this, *(this + 0x62), BSFile_FilePos_Beg); /*0x42cd34*/
  if ( a2 ) /*0x42cd3c*/
  {
    v22 = a2; /*0x42cd3e*/
    do /*0x42cd89*/
    {
      for ( i = 0; i < *(_DWORD *)(*(this + 0x5E) + v6 + 8); ++i ) /*0x42cd4a*/
      {
        LOBYTE(a2) = 1; /*0x42cd50*/
        do /*0x42cd72*/
        {
          v13 = (void (__cdecl *)(_DWORD *, unsigned int *, int, int *, int))*(this + 1); /*0x42cd54*/
          v23 = 1; /*0x42cd64*/
          v13(this, &a2, 1, &v23, 1); /*0x42cd68*/
        }
        while ( (_BYTE)a2 ); /*0x42cd72*/
      }
      v6 += 0x10; /*0x42cd82*/
      --v22; /*0x42cd85*/
    }
    while ( v22 ); /*0x42cd89*/
    v7 = v24; /*0x42cd8b*/
  }
  if ( a3 ) /*0x42cd95*/
  {
    v14 = a3; /*0x42cd97*/
    do /*0x42cdc6*/
    {
      LOBYTE(a2) = 1; /*0x42cda0*/
      do /*0x42cdc2*/
      {
        v15 = (void (__cdecl *)(_DWORD *, unsigned int *, int, signed int *, int))*(this + 1); /*0x42cda4*/
        a3 = 1; /*0x42cdb4*/
        v15(this, &a2, 1, &a3, 1); /*0x42cdb8*/
      }
      while ( (_BYTE)a2 ); /*0x42cdc2*/
      --v14; /*0x42cdc4*/
    }
    while ( v14 ); /*0x42cdc6*/
  }
  v16 = (void (__cdecl *)(_DWORD *, int, int, unsigned int *, int))*(this + 1); /*0x42cdce*/
  v20 = *(this + 0x68); /*0x42cdd8*/
  a2 = 1; /*0x42cdda*/
  v16(this, v20, 1, &a2, 1); /*0x42cdde*/
  if ( !*(_BYTE *)*(this + 0x68) ) /*0x42cdec*/
    return *(this + 0x68); /*0x42cdec*/
  do /*0x42ce17*/
  {
    v17 = (void (__cdecl *)(_DWORD *, int, int, unsigned int *, int))*(this + 1); /*0x42cdf8*/
    v21 = ++v7 + *(this + 0x68); /*0x42ce06*/
    a2 = 1; /*0x42ce08*/
    v17(this, v21, 1, &a2, 1); /*0x42ce0c*/
    result = *(this + 0x68); /*0x42ce0e*/
  }
  while ( *(_BYTE *)(v7 + result) ); /*0x42ce17*/
  return result; /*0x42cc29*/
}
