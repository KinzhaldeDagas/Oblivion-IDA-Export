NiPixelData *__userpurge sub_764E50@<eax>(int this@<ecx>, int a2@<esi>, unsigned int *a3)
{
  _DWORD *v5; // ebp
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  unsigned int v8; // esi
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // esi
  NiPixelData *v14; // ebp
  int v15; // eax
  NiPixelData *v16; // eax
  NiPixelData *v17; // ebx
  int v18; // edi
  char *v19; // esi
  char *v20; // ebp
  size_t v21; // [esp+14h] [ebp-54h]
  unsigned int v22; // [esp+28h] [ebp-40h]
  int v23; // [esp+2Ch] [ebp-3Ch]
  _DWORD v24[2]; // [esp+30h] [ebp-38h] BYREF
  _DWORD v25[4]; // [esp+38h] [ebp-30h] BYREF
  char v26[32]; // [esp+48h] [ebp-20h] BYREF
  unsigned int v27; // [esp+6Ch] [ebp+4h]

  if ( *(_BYTE *)(this + 0x6F0) )
    return 0;
  HIDWORD(v21) = a2;
  v5 = 0;
  v6 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 0x880) + 0x4C))(*(_DWORD *)(this + 0x880), 0);
  v7 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 0x880) + 0x50))(*(_DWORD *)(this + 0x880), 0);
  v22 = v7;
  if ( a3 )
  {
    v8 = *a3;
    if ( *a3 >= v6 )
      return 0;
    v9 = a3[2];
    if ( v9 >= v7 )
      return 0;
    v10 = a3[1] - v8 + 1;
    if ( a3[1] + 1 > v6 )
      v10 = v6 - v8;
    v11 = a3[3] - v9 + 1;
    if ( a3[3] + 1 > v22 )
      v11 = v22 - v9;
    v25[0] = *a3;
    v25[2] = v8 + v10;
    v25[1] = v9;
    v25[3] = v9 + v11;
    v5 = v25;
  }
  v12 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 0x880) + 0x80))(*(_DWORD *)(this + 0x880), 0);
  v13 = *(_DWORD *)(sub_497DD0((int)&unk_B42654, v12) + 0xC);
  v23 = v13;
  (*(void (__stdcall **)(int, char *))(*(_DWORD *)v13 + 0x30))(v13, v26);
  if ( (*(int (__stdcall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)v13 + 0x34))(v13, v24, v5, 0x10) < 0 )
    return 0;
  v14 = (NiPixelData *)FormHeapAlloc(0x70u);
  if ( !v14
    || (v15 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 0x880) + 0x5C))(*(_DWORD *)(this + 0x880), 0),
        v16 = NiPixelData::NiPixelData(v14, v6, v22, v15, 1u, 1),
        (v17 = v16) == 0) )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 0x38))(v13);
    return 0;
  }
  v18 = *((_DWORD *)v16 + 0x19) * **((_DWORD **)v16 + 0x15);
  v19 = (char *)(*((_DWORD *)v16 + 0x14) + **((_DWORD **)v16 + 0x17));
  v20 = (char *)v24[1];
  if ( v22 )
  {
    v27 = v22;
    do
    {
      LODWORD(v21) = v18;
      memcpy(v19, v20, v21);
      v20 += v24[0];
      v19 += v18;
      --v27;
    }
    while ( v27 );
  }
  (*(void (__stdcall **)(int))(*(_DWORD *)v23 + 0x38))(v23);
  return v17;
}
