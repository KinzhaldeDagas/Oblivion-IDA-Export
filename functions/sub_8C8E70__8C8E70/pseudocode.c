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

  v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 0x74))(this, &v18); /*0x8c8ea7*/
  v22 = 0; /*0x8c8eb0*/
  v23 = 0; /*0x8c8eb4*/
  v24 = 0x80000000; /*0x8c8eb8*/
  v25 = 1; /*0x8c8ebc*/
  v19 = 0; /*0x8c8ec0*/
  v20 = 0; /*0x8c8ec4*/
  v21 = 0x80000000; /*0x8c8ec8*/
  if ( v3 ) /*0x8c8ed3*/
  {
    v22 = (_DWORD *)v3[2]; /*0x8c8ed8*/
    v4 = v3[3]; /*0x8c8edc*/
    v3[2] = 0; /*0x8c8edf*/
    v5 = v23; /*0x8c8ee2*/
    v23 = v4; /*0x8c8ee6*/
    v6 = v3[4]; /*0x8c8eea*/
    v3[3] = v5; /*0x8c8eed*/
    v7 = v24; /*0x8c8ef0*/
    v24 = v6; /*0x8c8ef4*/
    v3[4] = v7; /*0x8c8ef8*/
    v8 = v19; /*0x8c8efe*/
    v19 = (_DWORD *)v3[5]; /*0x8c8f02*/
    v9 = v3[6]; /*0x8c8f06*/
    v3[5] = v8; /*0x8c8f09*/
    v10 = v20; /*0x8c8f0c*/
    v20 = v9; /*0x8c8f10*/
    v11 = v3[7]; /*0x8c8f14*/
    v3[6] = v10; /*0x8c8f17*/
    v12 = v21; /*0x8c8f1a*/
    v21 = v11; /*0x8c8f1e*/
    v3[7] = v12; /*0x8c8f22*/
  }
  sub_8A2610(this, a2); /*0x8c8f2c*/
  if ( v3 ) /*0x8c8f33*/
  {
    sub_8E81B0(a2, &v22); /*0x8c8f3b*/
    sub_8E81B0(a2, &v19); /*0x8c8f46*/
    (*(void (__thiscall **)(_DWORD *, int))(*this + 0x64))(this, v18); /*0x8c8f5a*/
  }
  v13 = MEMORY[0xBA9DE4]; /*0x8c8f62*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8c8f68*/
  LOBYTE(v25) = 0; /*0x8c8f6f*/
  if ( v21 >= 0 ) /*0x8c8f73*/
  {
    v15 = *(_DWORD *)(ThreadLocalStoragePointer[v13] + 0x19C); /*0x8c8f78*/
    if ( !v15 ) /*0x8c8f80*/
      v15 = unk_BA7D9C; /*0x8c8f82*/
    sub_8A75D0(v15, v19, 0x10 * v21, 0x14); /*0x8c8f98*/
  }
  result = v24; /*0x8c8f9d*/
  v25 = 0xFFFFFFFF; /*0x8c8fa3*/
  if ( v24 >= 0 ) /*0x8c8fab*/
  {
    v17 = *(_DWORD *)(ThreadLocalStoragePointer[v13] + 0x19C); /*0x8c8fb0*/
    if ( !v17 ) /*0x8c8fb8*/
      v17 = unk_BA7D9C; /*0x8c8fba*/
    return sub_8A75D0(v17, v22, 0x10 * v24, 0x14); /*0x8c8fd0*/
  }
  return result; /*0x8c8fd5*/
}
