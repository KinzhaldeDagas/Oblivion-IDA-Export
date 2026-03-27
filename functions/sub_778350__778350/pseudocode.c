int __userpurge sub_778350@<eax>(_DWORD *a1@<ecx>, int a2@<esi>, int a3, int a4, int a5, int a6, _WORD *a7)
{
  int v9; // ebx
  int v10; // esi
  unsigned int v11; // ebp
  int v12; // edi
  int v13; // eax
  void *v14; // ecx
  int (__stdcall *v15)(int, _DWORD, int, int *, _DWORD, int); // eax
  int v16; // esi
  void *v17; // ecx
  _WORD *v18; // eax
  _WORD *v19; // eax
  int v22; // [esp+28h] [ebp-14h] BYREF
  int v23; // [esp+2Ch] [ebp-10h]
  int v24; // [esp+30h] [ebp-Ch]
  int v25; // [esp+34h] [ebp-8h]
  unsigned int v26; // [esp+38h] [ebp-4h]

  if ( !a1[2] )
    return 0;
  v9 = a3;
  if ( !a3 )
    return 0;
  v10 = a1[3];
  v11 = 0xC * a3;
  if ( v10 )
  {
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    if ( (*(int (__stdcall **)(int, int *))(*(_DWORD *)v10 + 0x34))(v10, &v22) >= 0 )
    {
      if ( v22 == 0x65 && v23 == 7 && v24 == a5 && v25 == a6 && v26 >= v11 )
      {
        v12 = v10;
        if ( !(_BYTE)a4 )
          return v10;
        goto LABEL_20;
      }
      (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10);
    }
  }
  v13 = a1[2];
  a4 = 0;
  if ( (*(int (__stdcall **)(int, int, int, int, int, int *, _DWORD))(*(_DWORD *)v13 + 0x6C))(
         v13,
         0xC * a3,
         a5,
         0x65,
         a6,
         &a4,
         0) >= 0 )
  {
    v12 = a4;
  }
  else
  {
    TESTexture::ClearComponentReferences(v14);
    v12 = 0;
    a4 = 0;
  }
  if ( !v12 )
  {
    TESTexture::ClearComponentReferences(v14);
    return 0;
  }
LABEL_20:
  v15 = *(int (__stdcall **)(int, _DWORD, int, int *, _DWORD, int))(*(_DWORD *)v12 + 0x2C);
  v16 = 0;
  a6 = 0;
  if ( v15(v12, 0, 0xC * a3, &a6, 0, a2) < 0 )
  {
    TESTexture::ClearComponentReferences(v17);
    (*(void (__cdecl **)(int))(*(_DWORD *)v12 + 0x30))(v12);
    (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 8))(v12);
    v12 = 0;
  }
  else
  {
    v18 = a7;
    do
    {
      *v18 = v16;
      v19 = v18 + 1;
      *v19++ = v16 + 1;
      *v19++ = v16 + 2;
      *v19++ = v16;
      *v19++ = v16 + 2;
      *v19 = v16 + 3;
      v18 = v19 + 1;
      v16 += 4;
      --v9;
    }
    while ( v9 );
    (*(void (__cdecl **)(int))(*(_DWORD *)v12 + 0x30))(v12);
  }
  a1[4] = v11;
  a1[3] = v12;
  return v12;
}
