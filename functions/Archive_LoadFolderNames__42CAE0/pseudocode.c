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

  if ( (*(_BYTE *)(this + 0x65) & 0x10) != 0 ) /*0x42caeb*/
    return *(this + 0x66) + *(_DWORD *)(*(this + 0x67) + 4 * a2); /*0x42cafa*/
  if ( (*(_BYTE *)(this + 0x58) & 1) == 0 ) /*0x42cb11*/
    return 0; /*0x42cbf5*/
  (*(void (__thiscall **)(_DWORD *, int, int))(*this + 0xC))(this, 0x10 * *(this + 0x59) + 0x24, BSFile_FilePos_Beg); /*0x42cb32*/
  v4 = a2; /*0x42cb34*/
  if ( a2 ) /*0x42cb3a*/
  {
    v5 = 0; /*0x42cb3d*/
    do /*0x42cb83*/
    {
      v6 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))*(this + 1); /*0x42cb40*/
      a2 = 1; /*0x42cb50*/
      v6(this, (char *)&v11 + 3, 1, &a2, 1); /*0x42cb54*/
      (*(void (__thiscall **)(_DWORD *, int, int))(*this + 0xC))( /*0x42cb7c*/
        this,
        HIBYTE(v11) + 0x10 * *(_DWORD *)(v5 + *(this + 0x5E) + 8),
        BSFile_FilePos_Cur);
      v5 += 0x10; /*0x42cb7e*/
      --v4; /*0x42cb81*/
    }
    while ( v4 ); /*0x42cb83*/
  }
  v7 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))*(this + 1); /*0x42cb86*/
  a2 = 1; /*0x42cb96*/
  v7(this, (char *)&v11 + 3, 1, &a2, 1); /*0x42cb9a*/
  if ( *(this + 0x66) ) /*0x42cb9c*/
  {
    FormHeapFree(*(this + 0x66)); /*0x42cbab*/
    *(this + 0x66) = 0; /*0x42cbb3*/
  }
  v8 = FormHeapAlloc(HIBYTE(v11));              // MEF v39 verified archive folder-name fix: allocate length+1 with zero sentinel. On OOM leave archive +0x198 null, return an unowned static empty string through epilogue 0x42CBEE, and remove pending size arg. /*0x42cbc3*/
  v9 = (void (__cdecl *)(_DWORD *, int, int, signed int *, int))*(this + 1); /*0x42cbd3*/
  v10 = HIBYTE(v11); /*0x42cbd6*/
  *(this + 0x66) = v8; /*0x42cbd9*/
  a2 = 1; /*0x42cbdf*/
  v9(this, v8, v10, &a2, 1); /*0x42cbe3*/
  return *(this + 0x66); /*0x42cb00*/
}
