int __thiscall Archive_LoadFolderNames(_DWORD *this, signed int a2)
{
  signed int v4; // ebp
  int v5; // edi
  void (__cdecl *v6)(_DWORD *, char *, int, signed int *, int); // edx
  void (__cdecl *v7)(_DWORD *, char *, int, signed int *, int); // eax
  int v8; // eax
  void (__cdecl *v9)(_DWORD *, int, int, signed int *, int); // edx
  int v10; // [esp-Ah] [ebp-1Ch]
  int v11; // [esp+Eh] [ebp-4h] BYREF

  if ( (*(_BYTE *)(this + 0x65) & 0x10) != 0 )
    return *(this + 0x66) + *(_DWORD *)(*(this + 0x67) + 4 * a2);
  if ( (*(_BYTE *)(this + 0x58) & 1) == 0 )
    return 0;
  (*(void (__thiscall **)(_DWORD *, int, int))(*this + 0xC))(this, 0x10 * *(this + 0x59) + 0x24, BSFile_FilePos_Beg);
  v4 = a2;
  if ( a2 )
  {
    v5 = 0;
    do
    {
      v6 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))*(this + 1);
      a2 = 1;
      v6(this, (char *)&v11 + 3, 1, &a2, 1);
      (*(void (__thiscall **)(_DWORD *, int, int))(*this + 0xC))(
        this,
        HIBYTE(v11) + 0x10 * *(_DWORD *)(v5 + *(this + 0x5E) + 8),
        BSFile_FilePos_Cur);
      v5 += 0x10;
      --v4;
    }
    while ( v4 );
  }
  v7 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))*(this + 1);
  a2 = 1;
  v7(this, (char *)&v11 + 3, 1, &a2, 1);
  if ( *(this + 0x66) )
  {
    FormHeapFree(*(this + 0x66));
    *(this + 0x66) = 0;
  }
  v8 = FormHeapAlloc(HIBYTE(v11));
  v9 = (void (__cdecl *)(_DWORD *, int, int, signed int *, int))*(this + 1);
  v10 = HIBYTE(v11);
  *(this + 0x66) = v8;
  a2 = 1;
  v9(this, v8, v10, &a2, 1);
  return *(this + 0x66);
}
