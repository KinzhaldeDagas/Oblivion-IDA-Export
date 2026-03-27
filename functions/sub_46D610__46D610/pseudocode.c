int __thiscall sub_46D610(_BYTE *this, int a2, unsigned int a3, _DWORD *a4, const char *ArgList)
{
  int result; // eax
  unsigned int v8; // edi
  char *v9; // esi
  char v10; // dl
  char v11; // al
  unsigned int v12; // ecx
  char v13; // dl
  char v14; // al
  char v15; // dl
  char v16; // al
  const char *v17; // eax
  int v18; // [esp-Ch] [ebp-24h]
  unsigned int v19[2]; // [esp+8h] [ebp-10h] BYREF
  unsigned int v20[2]; // [esp+10h] [ebp-8h] BYREF

  *this = a3;
  result = FormHeapAlloc((unsigned __int64)a3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a3);
  v8 = 0;
  *((_DWORD *)this + 1) = result;
  if ( a3 )
  {
    v9 = (char *)(a2 + 2);
    do
    {
      v10 = *v9;
      v11 = v9[0xFFFFFFFE];
      BYTE1(v19[0]) = v9[0xFFFFFFFF];
      v12 = *(_DWORD *)(v9 + 2);
      BYTE2(v19[0]) = v10;
      v13 = v9[0xE];
      LOBYTE(v19[0]) = v11;
      v14 = v9[1];
      v19[1] = v12;
      LOBYTE(v12) = v9[0x10];
      LOBYTE(v20[0]) = v13;
      v15 = v9[0x11];
      HIBYTE(v19[0]) = v14;
      v16 = v9[0xF];
      BYTE2(v20[0]) = v12;
      HIBYTE(v20[0]) = v15;
      BYTE1(v20[0]) = v16;
      v20[1] = *(_DWORD *)(v9 + 0x12);
      result = ArchiveManager_LazyFileLookup(1, v20, v19, 0);
      *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v8) = result;
      if ( !byte_B06310 || !bUseArchives_Archive || *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v8) )
        goto LABEL_12;
      if ( a4 )
      {
        if ( !ArgList )
          goto LABEL_11;
        v17 = (const char *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*a4 + 0xD4))(a4, a4[3]);
        result = PrintError(
                   "Failed to find archive file entry for texture on model '%s' for form %s (%08X).",
                   ArgList,
                   v17,
                   v18);
      }
      else
      {
        if ( !ArgList )
        {
LABEL_11:
          result = PrintError("Failed to find archive file entry for texture on UNKNOWN Model");
          goto LABEL_12;
        }
        result = PrintError("Failed to find archive file entry for texture on model '%s' on UNKNOWN form.", ArgList);
      }
LABEL_12:
      ++v8;
      v9 += 0x18;
    }
    while ( v8 < a3 );
  }
  return result;
}
