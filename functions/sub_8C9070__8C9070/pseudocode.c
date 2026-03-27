unsigned int __thiscall sub_8C9070(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  unsigned int result; // eax
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

  if ( this )
    v2 = *(this + 2);
  else
    v2 = 0;
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)v2 + 0x1C))(v2, &v14);
  v19 = 0;
  v20 = 0;
  v21 = 0x80000000;
  v24 = 0;
  if ( (_BYTE)v15 )
  {
    v12 = v14;
    if ( v14 > 0 )
      sub_8A6E40((const void **)&v19, v14 < 0 ? 0 : v14, 0x10);
    v20 = v12;
  }
  v3 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v2 + 0x20))(v2, v19);
  v16 = 0;
  v17 = 0;
  v18 = 0x80000000;
  v4 = v14;
  LOBYTE(v24) = 1;
  v5 = v14;
  if ( v14 > 0 )
  {
    sub_8A6E40((const void **)&v16, v14 < 0 ? 0 : v14, 0x10);
    v4 = v14;
  }
  v6 = 0;
  v17 = v5;
  if ( v4 > 0 )
  {
    v7 = 0;
    do
    {
      *(_OWORD *)&v16[v7] = *(_OWORD *)(v7 + v3);
      ++v6;
      v7 += 0x10;
    }
    while ( v6 < v14 );
  }
  v22[1] = v17;
  v22[2] = 0x10;
  v22[0] = (int)v16;
  v23[0] = 0;
  v23[1] = 0;
  v23[2] = 0x80000000;
  v23[3] = 0;
  v23[4] = 0;
  v23[5] = 0x80000000;
  LOBYTE(v24) = 2;
  sub_8F21E0(v22, v23, 1);
  (*(void (__thiscall **)(_DWORD *, int, int *, const char *))(*this + 0x94))(this, a2, v23, "bhkConvexVerticesShape");
  LOBYTE(v24) = 1;
  sub_8B44C0(v23);
  v8 = TlsIndex;
  LOBYTE(v24) = 0;
  if ( (v18 & 0x80000000) == 0 )
  {
    v9 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v8) + 0x19C);
    if ( !v9 )
      v9 = dword_BA7D9C;
    sub_8A75D0(v9, v16, 0x10 * v18, 0x14);
  }
  result = v21;
  v24 = 0xFFFFFFFF;
  if ( (v21 & 0x80000000) == 0 )
  {
    v11 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v8) + 0x19C);
    if ( !v11 )
      v11 = dword_BA7D9C;
    return sub_8A75D0(v11, v19, 0x10 * v21, 0x14);
  }
  return result;
}
