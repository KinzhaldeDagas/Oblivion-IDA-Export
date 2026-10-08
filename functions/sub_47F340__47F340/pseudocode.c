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
  int v20; // [esp+54h] [ebp-88h] BYREF
  char *v21; // [esp+58h] [ebp-84h]
  int v22; // [esp+5Ch] [ebp-80h] BYREF
  NiPixelData *v23; // [esp+60h] [ebp-7Ch]
  int v24; // [esp+64h] [ebp-78h] BYREF
  void *Src; // [esp+68h] [ebp-74h]
  _DWORD v26[8]; // [esp+6Ch] [ebp-70h] BYREF
  _BYTE v27[68]; // [esp+8Ch] [ebp-50h] BYREF
  unsigned int v28; // [esp+D8h] [ebp-4h]

  v20 = 0; /*0x47f374*/
  v22 = 0; /*0x47f378*/
  v3 = &unk_B25E00; /*0x47f37c*/
  if ( !a3 ) /*0x47f381*/
    v3 = &unk_B25E48; /*0x47f383*/
  sub_70F010(v27, v3); /*0x47f38d*/
  if ( !a1 ) /*0x47f39b*/
    return 0; /*0x47f39b*/
  if ( !a2 ) /*0x47f3aa*/
    return 0; /*0x47f3aa*/
  v4 = *(_DWORD *)(a1 + 0x24); /*0x47f3b0*/
  v5 = *(_DWORD *)(a2 + 0x280); /*0x47f3b3*/
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4); /*0x47f3c2*/
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x47f3cb*/
  v8 = v7; /*0x47f3cf*/
  if ( !v5 || !v6 || !v7 ) /*0x47f3e1*/
    return 0; /*0x47f572*/
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x18))(v4); /*0x47f3ee*/
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x14))(v9); /*0x47f3f9*/
  (*(void (__stdcall **)(int, _DWORD, int *))(*(_DWORD *)v10 + 0x48))(v10, 0, &v22); /*0x47f408*/
  (*(void (__stdcall **)(int, _DWORD, _DWORD *))(*(_DWORD *)v10 + 0x44))(v10, 0, v26); /*0x47f417*/
  v11 = 0; /*0x47f425*/
  (*(void (__stdcall **)(int, unsigned int, unsigned int, _DWORD, int, int *, _DWORD))(*(_DWORD *)v5 + 0x90))( /*0x47f433*/
    v5,
    v6,
    v8,
    v26[0],
    2,
    &v20,
    0);
  (*(void (__stdcall **)(int, int, int))(*(_DWORD *)v5 + 0x80))(v5, v22, v20); /*0x47f448*/
  (*(void (__stdcall **)(int, int *, _DWORD, _DWORD))(*(_DWORD *)v20 + 0x34))(v20, &v24, 0, 0); /*0x47f45b*/
  v12 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x47f45f*/
  v23 = v12; /*0x47f467*/
  v28 = 0; /*0x47f46d*/
  if ( v12 ) /*0x47f474*/
  {
    v11 = NiPixelData::NiPixelData(v12, v6, v8, (int)v27, 1u, 1); /*0x47f488*/
    v23 = v11; /*0x47f48a*/
  }
  else
  {
    v23 = 0; /*0x47f490*/
  }
  v13 = (char *)(*((_DWORD *)v11 + 0x14) + **((_DWORD **)v11 + 0x17)); /*0x47f4a7*/
  v28 = 0xFFFFFFFF; /*0x47f4b5*/
  v14 = v24 / 4; /*0x47f4c0*/
  v21 = (char *)Src; /*0x47f4c3*/
  if ( a3 ) /*0x47f4c7*/
  {
    memcpy(v13, Src, 4 * v8 * v14); /*0x47f4d6*/
  }
  else if ( v8 ) /*0x47f4e2*/
  {
    v15 = v14; /*0x47f4e4*/
    do /*0x47f535*/
    {
      if ( v15 > 0 ) /*0x47f4e9*/
      {
        v16 = v13 + 2; /*0x47f4ef*/
        v17 = v21 + 2; /*0x47f4f2*/
        v18 = v15; /*0x47f4f5*/
        do /*0x47f51c*/
        {
          v16[0xFFFFFFFE] = v17[0xFFFFFFFE]; /*0x47f504*/
          v16[0xFFFFFFFF] = v17[0xFFFFFFFF]; /*0x47f50b*/
          *v16 = *v17; /*0x47f511*/
          v17 += 4; /*0x47f513*/
          v16 += 3; /*0x47f516*/
          --v18; /*0x47f519*/
        }
        while ( v18 ); /*0x47f51c*/
        v11 = v23; /*0x47f51e*/
      }
      v13 += 3 * v15; /*0x47f525*/
      v21 += 4 * v15; /*0x47f52e*/
      --v8; /*0x47f532*/
    }
    while ( v8 ); /*0x47f535*/
  }
  (*(void (__stdcall **)(int))(*(_DWORD *)v20 + 0x38))(v20); /*0x47f541*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v20 + 8))(v20); /*0x47f54d*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v22 + 8))(v22); /*0x47f559*/
  result = NiSourceTexture::LoadTexturePixelData(v11, &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout); /*0x47f561*/
  byte_B256CD = 0; /*0x47f569*/
  return result; /*0x47f574*/
}
