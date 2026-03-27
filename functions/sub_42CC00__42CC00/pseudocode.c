int __thiscall sub_42CC00(_DWORD *this, unsigned int a2, signed int a3)
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

  if ( (*(_BYTE *)(this + 0x65) & 0x20) != 0 )
    return *(this + 0x68) + *(_DWORD *)(*(_DWORD *)(*(this + 0x69) + 4 * a2) + 4 * a3);
  if ( (*(this + 0x58) & 2) == 0 )
    return 0;
  v5 = *(this + 0x68);
  v6 = 0;
  if ( v5 )
  {
    FormHeapFree(v5);
    *(this + 0x68) = 0;
  }
  v7 = 0;
  v24 = 0;
  *(this + 0x68) = FormHeapAlloc(0x100u);
  if ( iRetainFilenameOffsetTable_Archive == 1 )
    v8 = (*(this + 0x58) & 0x20) != 0;
  else
    v8 = iRetainFilenameOffsetTable_Archive != 0;
  v9 = *(void (__thiscall **)(_DWORD *, int, int))(*this + 0xC);
  if ( v8 )
  {
    v9(this, *(this + 0x62) + *(_DWORD *)(*(_DWORD *)(*(this + 0x69) + 4 * a2) + 4 * a3), BSFile_FilePos_Beg);
    v10 = (void (__cdecl *)(_DWORD *, int, int, unsigned int *, int))*(this + 1);
    v18 = *(this + 0x68);
    a2 = 1;
    v10(this, v18, 1, &a2, 1);
    if ( *(_BYTE *)*(this + 0x68) )
    {
      do
      {
        v11 = (void (__cdecl *)(_DWORD *, int, int, unsigned int *, int))*(this + 1);
        v19 = ++v7 + *(this + 0x68);
        a2 = 1;
        v11(this, v19, 1, &a2, 1);
      }
      while ( *(_BYTE *)(v7 + *(this + 0x68)) );
    }
    return *(this + 0x68);
  }
  v9(this, *(this + 0x62), BSFile_FilePos_Beg);
  if ( a2 )
  {
    v22 = a2;
    do
    {
      for ( i = 0; i < *(_DWORD *)(*(this + 0x5E) + v6 + 8); ++i )
      {
        LOBYTE(a2) = 1;
        do
        {
          v13 = (void (__cdecl *)(_DWORD *, unsigned int *, int, int *, int))*(this + 1);
          v23 = 1;
          v13(this, &a2, 1, &v23, 1);
        }
        while ( (_BYTE)a2 );
      }
      v6 += 0x10;
      --v22;
    }
    while ( v22 );
    v7 = v24;
  }
  if ( a3 )
  {
    v14 = a3;
    do
    {
      LOBYTE(a2) = 1;
      do
      {
        v15 = (void (__cdecl *)(_DWORD *, unsigned int *, int, signed int *, int))*(this + 1);
        a3 = 1;
        v15(this, &a2, 1, &a3, 1);
      }
      while ( (_BYTE)a2 );
      --v14;
    }
    while ( v14 );
  }
  v16 = (void (__cdecl *)(_DWORD *, int, int, unsigned int *, int))*(this + 1);
  v20 = *(this + 0x68);
  a2 = 1;
  v16(this, v20, 1, &a2, 1);
  if ( !*(_BYTE *)*(this + 0x68) )
    return *(this + 0x68);
  do
  {
    v17 = (void (__cdecl *)(_DWORD *, int, int, unsigned int *, int))*(this + 1);
    v21 = ++v7 + *(this + 0x68);
    a2 = 1;
    v17(this, v21, 1, &a2, 1);
    result = *(this + 0x68);
  }
  while ( *(_BYTE *)(v7 + result) );
  return result;
}
