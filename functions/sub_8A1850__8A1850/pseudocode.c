int __thiscall sub_8A1850(_DWORD *this, signed int a2)
{
  _DWORD *v2; // eax
  unsigned int v3; // ecx
  int v4; // ebp
  _DWORD *v5; // ecx
  int v6; // edx
  _DWORD *v7; // edx
  int v8; // edx
  int v9; // edx
  signed int v10; // esi
  int v11; // eax
  void (__cdecl *v12)(int, unsigned int *, int, signed int *, int); // eax
  unsigned int i; // edi
  int v14; // eax
  int v15; // eax
  int result; // eax
  int v17; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  int v19; // ecx
  int v20; // eax
  int v21; // [esp-14h] [ebp-58h]
  int v22; // [esp+14h] [ebp-30h] BYREF
  unsigned int v23; // [esp+18h] [ebp-2Ch] BYREF
  _DWORD *v24; // [esp+1Ch] [ebp-28h]
  _DWORD *v25; // [esp+20h] [ebp-24h] BYREF
  int v26; // [esp+24h] [ebp-20h]
  int v27; // [esp+28h] [ebp-1Ch]
  _DWORD *v28; // [esp+2Ch] [ebp-18h]
  unsigned int v29; // [esp+30h] [ebp-14h]
  unsigned int v30; // [esp+34h] [ebp-10h]
  int v31; // [esp+40h] [ebp-4h]

  v24 = this;
  v2 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, (char *)&v22 + 3);
  v3 = 0;
  v4 = 0x80000000;
  v28 = 0;
  v29 = 0;
  v30 = 0x80000000;
  v31 = 1;
  v25 = 0;
  v26 = 0;
  v27 = 0x80000000;
  if ( v2 )
  {
    v5 = (_DWORD *)v2[1];
    v6 = v2[3];
    v2[3] = 0x80000000;
    v2[1] = 0;
    v28 = v5;
    v3 = v2[2];
    v2[2] = 0;
    v4 = v6;
    v7 = (_DWORD *)v2[4];
    v2[4] = v25;
    v25 = v7;
    v8 = v2[5];
    v2[5] = v26;
    v26 = v8;
    v9 = v2[6];
    v2[6] = v27;
    v29 = v3;
    v30 = v4;
    v27 = v9;
  }
  v10 = a2;
  v11 = *(_DWORD *)(a2 + 0x220);
  v23 = v3;
  v21 = v11;
  v12 = *(void (__cdecl **)(int, unsigned int *, int, signed int *, int))(v11 + 8);
  a2 = 4;
  v12(v21, &v23, 4, &a2, 1);
  for ( i = 0; i < v23; ++i )
  {
    v14 = v28[i];
    if ( v14 )
      v15 = *(_DWORD *)(v14 + 8);
    else
      v15 = 0;
    (*(void (__thiscall **)(signed int, int))(*(_DWORD *)v10 + 0x2C))(v10, v15);
  }
  sub_8A2610(v24, v10);
  sub_8E8310(v10, (signed int)&v25);
  result = v27;
  v17 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  LOBYTE(v31) = 0;
  if ( v27 >= 0 )
  {
    v19 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C);
    if ( !v19 )
      v19 = dword_BA7D9C;
    result = sub_8A75D0(v19, v25, 4 * v27, 0x14);
  }
  v31 = 0xFFFFFFFF;
  if ( v4 >= 0 )
  {
    v20 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C);
    if ( !v20 )
      v20 = dword_BA7D9C;
    return sub_8A75D0(v20, v28, 4 * v4, 0x14);
  }
  return result;
}
