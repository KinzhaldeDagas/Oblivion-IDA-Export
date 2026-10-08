int __thiscall sub_8C9070(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  int result; // eax
  int v11; // ecx
  int v12; // [esp+18h] [ebp-5Ch]
  int v14; // [esp+20h] [ebp-54h] BYREF
  int v15; // [esp+24h] [ebp-50h]
  char *v16; // [esp+28h] [ebp-4Ch] BYREF
  int v17; // [esp+2Ch] [ebp-48h]
  unsigned int v18; // [esp+30h] [ebp-44h]
  _DWORD *v19; // [esp+34h] [ebp-40h] BYREF
  int v20; // [esp+38h] [ebp-3Ch]
  unsigned int v21; // [esp+3Ch] [ebp-38h]
  int v22[3]; // [esp+40h] [ebp-34h] BYREF
  int v23[7]; // [esp+4Ch] [ebp-28h] BYREF
  unsigned int v24; // [esp+70h] [ebp-4h]

  if ( this ) /*0x8c90a4*/
    v2 = *(this + 2); /*0x8c90a6*/
  else
    v2 = 0; /*0x8c90ab*/
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)v2 + 0x1C))(v2, &v14); /*0x8c90b9*/
  v19 = 0; /*0x8c90c0*/
  v20 = 0; /*0x8c90c4*/
  v21 = 0x80000000; /*0x8c90c8*/
  v24 = 0; /*0x8c90d0*/
  if ( (_BYTE)v15 )
  {
    v12 = v14; /*0x8c90dc*/
    if ( v14 > 0 )
      sub_8A6E40((const void **)&v19, v14 < 0 ? 0 : v14, 0x10);
    v20 = v12; /*0x8c9102*/
  }
  v3 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v2 + 0x20))(v2, v19); /*0x8c9114*/
  v16 = 0; /*0x8c9116*/
  v17 = 0; /*0x8c911a*/
  v18 = 0x80000000; /*0x8c911e*/
  v4 = v14; /*0x8c9122*/
  LOBYTE(v24) = 1; /*0x8c9128*/
  v5 = v14; /*0x8c912d*/
  if ( v14 > 0 )
  {
    sub_8A6E40((const void **)&v16, v14 < 0 ? 0 : v14, 0x10);
    v4 = v14; /*0x8c914a*/
  }
  v6 = 0; /*0x8c9151*/
  v17 = v5; /*0x8c9155*/
  if ( v4 > 0 ) /*0x8c9159*/
  {
    v7 = 0; /*0x8c915b*/
    do /*0x8c9173*/
    {
      *(_OWORD *)&v16[v7] = *(_OWORD *)(v7 + v3); /*0x8c9165*/
      ++v6; /*0x8c9169*/
      v7 += 0x10; /*0x8c916c*/
    }
    while ( v6 < v14 ); /*0x8c9173*/
  }
  v22[1] = v17; /*0x8c9182*/
  v22[2] = 0x10; /*0x8c9186*/
  v22[0] = (int)v16; /*0x8c918e*/
  v23[0] = 0; /*0x8c9192*/
  v23[1] = 0; /*0x8c9196*/
  v23[2] = 0x80000000; /*0x8c919a*/
  v23[3] = 0; /*0x8c919e*/
  v23[4] = 0; /*0x8c91a2*/
  v23[5] = 0x80000000; /*0x8c91a6*/
  LOBYTE(v24) = 2; /*0x8c91b6*/
  sub_8F21E0(v22, v23, 1); /*0x8c91bb*/
  (*(void (__thiscall **)(_DWORD *, int, int *, const char *))(*this + 0x94))(this, a2, v23, "bhkConvexVerticesShape"); /*0x8c91dd*/
  LOBYTE(v24) = 1; /*0x8c91e3*/
  sub_8B44C0(v23); /*0x8c91e8*/
  v8 = MEMORY[0xBA9DE4]; /*0x8c91f3*/
  LOBYTE(v24) = 0; /*0x8c91f9*/
  if ( (v18 & 0x80000000) == 0 ) /*0x8c91fd*/
  {
    v9 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v8) + 0x19C); /*0x8c9209*/
    if ( !v9 ) /*0x8c9211*/
      v9 = unk_BA7D9C; /*0x8c9213*/
    sub_8A75D0(v9, v16, 0x10 * v18, 0x14); /*0x8c9229*/
  }
  result = v21; /*0x8c922e*/
  v24 = 0xFFFFFFFF; /*0x8c9234*/
  if ( (v21 & 0x80000000) == 0 ) /*0x8c923c*/
  {
    v11 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v8) + 0x19C); /*0x8c9248*/
    if ( !v11 ) /*0x8c9250*/
      v11 = unk_BA7D9C; /*0x8c9252*/
    return sub_8A75D0(v11, v19, 0x10 * v21, 0x14); /*0x8c9268*/
  }
  return result; /*0x8c926d*/
}
