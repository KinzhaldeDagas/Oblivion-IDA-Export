NiSourceTexture *__cdecl sub_47F340(int a1, int a2, char a3)
{
  const void *v3; // eax
  int v4; // esi
  int v5; // edi
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ebp
  int v9; // eax
  int v10; // esi
  NiPixelData *v11; // esi
  NiPixelData *v12; // eax
  char *v13; // edi
  unsigned __int16 v14; // ax
  int v15; // edx
  _BYTE *v16; // ecx
  _BYTE *v17; // eax
  int v18; // esi
  NiSourceTexture *result; // eax
  size_t v20; // [esp+3Ch] [ebp-A0h]
  int v21; // [esp+54h] [ebp-88h] BYREF
  char *v22; // [esp+58h] [ebp-84h]
  int v23; // [esp+5Ch] [ebp-80h] BYREF
  NiPixelData *v24; // [esp+60h] [ebp-7Ch]
  int v25; // [esp+64h] [ebp-78h] BYREF
  void *Src; // [esp+68h] [ebp-74h]
  _DWORD v27[8]; // [esp+6Ch] [ebp-70h] BYREF
  _BYTE v28[68]; // [esp+8Ch] [ebp-50h] BYREF
  unsigned int v29; // [esp+D8h] [ebp-4h]

  v21 = 0;
  v23 = 0;
  v3 = &unk_B25E00;
  if ( !a3 )
    v3 = &unk_B25E48;
  sub_70F010(v28, v3);
  if ( !a1 )
    return 0;
  if ( !a2 )
    return 0;
  v4 = *(_DWORD *)(a1 + 0x24);
  v5 = *(_DWORD *)(a2 + 0x280);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  v8 = v7;
  if ( !v5 || !v6 || !v7 )
    return 0;
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x18))(v4);
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x14))(v9);
  (*(void (__stdcall **)(int, _DWORD, int *))(*(_DWORD *)v10 + 0x48))(v10, 0, &v23);
  (*(void (__stdcall **)(int, _DWORD, _DWORD *))(*(_DWORD *)v10 + 0x44))(v10, 0, v27);
  v11 = 0;
  (*(void (__stdcall **)(int, unsigned int, unsigned int, _DWORD, int, int *, _DWORD))(*(_DWORD *)v5 + 0x90))(
    v5,
    v6,
    v8,
    v27[0],
    2,
    &v21,
    0);
  (*(void (__stdcall **)(int, int, int))(*(_DWORD *)v5 + 0x80))(v5, v23, v21);
  (*(void (__stdcall **)(int, int *, _DWORD, _DWORD))(*(_DWORD *)v21 + 0x34))(v21, &v25, 0, 0);
  v12 = (NiPixelData *)FormHeapAlloc(0x70u);
  v24 = v12;
  v29 = 0;
  if ( v12 )
  {
    v11 = NiPixelData::NiPixelData(v12, v6, v8, (int)v28, 1u, 1);
    v24 = v11;
  }
  else
  {
    v24 = 0;
  }
  v13 = (char *)(*((_DWORD *)v11 + 0x14) + **((_DWORD **)v11 + 0x17));
  v29 = 0xFFFFFFFF;
  v14 = v25 / 4;
  v22 = (char *)Src;
  if ( a3 )
  {
    LODWORD(v20) = 4 * v8 * v14;
    memcpy(v13, Src, v20);
  }
  else if ( v8 )
  {
    v15 = v14;
    do
    {
      if ( v15 > 0 )
      {
        v16 = v13 + 2;
        v17 = v22 + 2;
        v18 = v15;
        do
        {
          v16[0xFFFFFFFE] = v17[0xFFFFFFFE];
          v16[0xFFFFFFFF] = v17[0xFFFFFFFF];
          *v16 = *v17;
          v17 += 4;
          v16 += 3;
          --v18;
        }
        while ( v18 );
        v11 = v24;
      }
      v13 += 3 * v15;
      v22 += 4 * v15;
      --v8;
    }
    while ( v8 );
  }
  (*(void (__stdcall **)(int))(*(_DWORD *)v21 + 0x38))(v21);
  (*(void (__stdcall **)(int))(*(_DWORD *)v21 + 8))(v21);
  (*(void (__stdcall **)(int))(*(_DWORD *)v23 + 8))(v23);
  result = NiSourceTexture::LoadTexturePixelData(v11, (PixelLayout *)dword_B256D0);
  byte_B256CD = 0;
  return result;
}
