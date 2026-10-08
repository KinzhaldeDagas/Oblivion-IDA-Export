int __thiscall sub_8D6B30(const void **this, int a2, int a3)
{
  double v6; // st7
  double v7; // st6
  int v8; // eax
  int v9; // ebx
  int v10; // esi
  float v11; // ecx
  int v12; // eax
  float v13; // edx
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v17; // eax
  bool v18; // zf
  int v19; // eax
  _DWORD *ThreadLocalStoragePointer; // esi
  int v21; // edi
  int v22; // eax
  int v23; // ebx
  _DWORD *v24; // ecx
  unsigned __int64 v25; // rax
  float *v26; // eax
  int v27; // eax
  int v28; // esi
  _DWORD *v29; // ecx
  unsigned __int64 v30; // rax
  float v31[2]; // [esp+8h] [ebp-28h] BYREF
  float v32; // [esp+10h] [ebp-20h]
  float v33; // [esp+14h] [ebp-1Ch]
  float v34[6]; // [esp+18h] [ebp-18h] BYREF
  int v35; // [esp+34h] [ebp+4h]

  if ( a3 == 1 ) /*0x8d6b42*/
    return (*((int (__thiscall **)(const void **, int, _DWORD, _DWORD))*this + 2))(this, a2, 0, *(this + 2)); /*0x8d6b53*/
  v6 = *(float *)(a2 + 0x18); /*0x8d6b63*/
  v7 = *(float *)(a2 + 0xC); /*0x8d6b66*/
  v31[0] = *(float *)(a2 + 0xC); /*0x8d6b69*/
  v31[1] = v6; /*0x8d6b6f*/
  v32 = v6 - v7; /*0x8d6b77*/
  if ( v32 == *(float *)&SrcStr ) /*0x8d6b8e*/
    v33 = 0.0; /*0x8d6b90*/
  else
    v33 = fConstant_1 / v32; /*0x8d6ba4*/
  v8 = (int)*(this + 6) + 0xFFFFFFFF; /*0x8d6bab*/
  if ( v8 >= 0 ) /*0x8d6bad*/
  {
    v9 = v8 << 6; /*0x8d6bb5*/
    v35 = (int)*(this + 6); /*0x8d6bb9*/
    do /*0x8d6c3f*/
    {
      v10 = (int)*(this + 5); /*0x8d6bc0*/
      v11 = *(float *)(v10 + v9 + 8); /*0x8d6bc3*/
      v12 = *(_DWORD *)(v10 + v9 + 4); /*0x8d6bc7*/
      v13 = *(float *)(v10 + v9 + 0x18); /*0x8d6bcb*/
      v14 = v9 + v10; /*0x8d6bcf*/
      v34[3] = v11; /*0x8d6bd1*/
      LOWORD(v34[0]) = 0xFFFF; /*0x8d6bd9*/
      v34[1] = 0.0; /*0x8d6be0*/
      LODWORD(v34[2]) = v12; /*0x8d6be8*/
      v34[5] = v13; /*0x8d6bec*/
      sub_8DC920(v12, *(_DWORD *)(v12 + 8), (int)v34); /*0x8d6bf5*/
      v15 = *(_DWORD *)(v14 + 4); /*0x8d6bfa*/
      if ( *(_DWORD *)(v15 + 0x98) ) /*0x8d6bfd*/
        sub_8DC0A0(v15, v15, (int)v34); /*0x8d6c10*/
      v16 = *(_DWORD *)(v14 + 8); /*0x8d6c18*/
      v17 = *(_DWORD *)(v16 + 0x98); /*0x8d6c1b*/
      if ( v17 ) /*0x8d6c23*/
        sub_8DC0A0(v17, v16, (int)v34); /*0x8d6c2b*/
      v9 -= 0x40; /*0x8d6c37*/
      --v35; /*0x8d6c3b*/
    }
    while ( v35 ); /*0x8d6c3f*/
  }
  *(this + 6) = 0; /*0x8d6c4f*/
  sub_89BF50(a2, 0, 1); /*0x8d6c56*/
  if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8d6c63*/
    return 2; /*0x8d6c63*/
  sub_8D5B20(this, a2, v31); /*0x8d6c7c*/
  if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8d6c8a*/
    return 2; /*0x8d6c68*/
  v18 = *(this + 3) == (const void *)2; /*0x8d6c8c*/
  v19 = (int)*(this + 4); /*0x8d6c90*/
  *(this + 4) = 0; /*0x8d6c93*/
  if ( !v18 || v19 != 1 ) /*0x8d6ca2*/
    return (*((int (__thiscall **)(const void **, int, _DWORD, _DWORD))*this + 2))(this, a2, 0, *(this + 2)); /*0x8d6d64*/
  if ( *(_DWORD *)(a2 + 0x110) ) /*0x8d6ca8*/
  {
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d6cb6*/
    v21 = MEMORY[0xBA9DE4]; /*0x8d6cbd*/
    v22 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d6cc3*/
    if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) ) /*0x8d6cd2*/
    {
      v23 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d6cd4*/
      v24 = *(_DWORD **)(v22 + 0x1A4); /*0x8d6cd6*/
      *v24 = "TtPostSimulateCb"; /*0x8d6cdc*/
      v25 = __rdtsc(); /*0x8d6ce2*/
      v24[1] = v25; /*0x8d6cec*/
      *(_DWORD *)(v23 + 0x1A4) = v24 + 3; /*0x8d6cf2*/
    }
    v26 = sub_8D2C90(v34, *(float *)(a2 + 0x10), *(float *)(a2 + 0x10)); /*0x8d6d03*/
    sub_8DCD60((int)v26, a2, (int)v34); /*0x8d6d0e*/
    v27 = ThreadLocalStoragePointer[v21]; /*0x8d6d13*/
    if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) ) /*0x8d6d27*/
    {
      v28 = ThreadLocalStoragePointer[v21]; /*0x8d6d29*/
      v29 = *(_DWORD **)(v27 + 0x1A4); /*0x8d6d2b*/
      *v29 = "Et"; /*0x8d6d31*/
      v30 = __rdtsc(); /*0x8d6d37*/
      v29[1] = v30; /*0x8d6d41*/
      *(_DWORD *)(v28 + 0x1A4) = v29 + 3; /*0x8d6d47*/
    }
  }
  return 0; /*0x8d6b56*/
}
