int __thiscall sub_8C8E70(_DWORD *this, signed int a2)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  int v15; // ecx
  int result; // eax
  int v17; // ecx
  int v18; // [esp+14h] [ebp-28h] BYREF
  _DWORD *v19; // [esp+18h] [ebp-24h] BYREF
  int v20; // [esp+1Ch] [ebp-20h]
  int v21; // [esp+20h] [ebp-1Ch]
  _DWORD *v22; // [esp+24h] [ebp-18h] BYREF
  int v23; // [esp+28h] [ebp-14h]
  int v24; // [esp+2Ch] [ebp-10h]
  int v25; // [esp+38h] [ebp-4h]

  v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 0x74))(this, &v18);
  v22 = 0;
  v23 = 0;
  v24 = 0x80000000;
  v25 = 1;
  v19 = 0;
  v20 = 0;
  v21 = 0x80000000;
  if ( v3 )
  {
    v22 = (_DWORD *)v3[2];
    v4 = v3[3];
    v3[2] = 0;
    v5 = v23;
    v23 = v4;
    v6 = v3[4];
    v3[3] = v5;
    v7 = v24;
    v24 = v6;
    v3[4] = v7;
    v8 = v19;
    v19 = (_DWORD *)v3[5];
    v9 = v3[6];
    v3[5] = v8;
    v10 = v20;
    v20 = v9;
    v11 = v3[7];
    v3[6] = v10;
    v12 = v21;
    v21 = v11;
    v3[7] = v12;
  }
  sub_8A2610(this, a2);
  if ( v3 )
  {
    sub_8E81B0(a2, &v22);
    sub_8E81B0(a2, &v19);
    (*(void (__thiscall **)(_DWORD *, int))(*this + 0x64))(this, v18);
  }
  v13 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  LOBYTE(v25) = 0;
  if ( v21 >= 0 )
  {
    v15 = *(_DWORD *)(ThreadLocalStoragePointer[v13] + 0x19C);
    if ( !v15 )
      v15 = dword_BA7D9C;
    sub_8A75D0(v15, v19, 0x10 * v21, 0x14);
  }
  result = v24;
  v25 = 0xFFFFFFFF;
  if ( v24 >= 0 )
  {
    v17 = *(_DWORD *)(ThreadLocalStoragePointer[v13] + 0x19C);
    if ( !v17 )
      v17 = dword_BA7D9C;
    return sub_8A75D0(v17, v22, 0x10 * v24, 0x14);
  }
  return result;
}
