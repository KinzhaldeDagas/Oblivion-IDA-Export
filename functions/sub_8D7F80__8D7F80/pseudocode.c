signed int __thiscall sub_8D7F80(float *this, int a2, int a3, float a4)
{
  int v4; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v6; // eax
  int v7; // ebp
  _DWORD *v8; // esi
  unsigned __int64 v9; // rax
  int v10; // eax
  int v11; // ebp
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  int v15; // edx
  int v16; // edi
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  double v20; // st7
  double v21; // st6
  _DWORD *v22; // ecx
  unsigned __int64 v23; // rax
  _DWORD *v24; // ecx
  unsigned __int64 v25; // rax
  _DWORD *v26; // ecx
  unsigned __int64 v27; // rax
  _DWORD *v28; // ecx
  unsigned __int64 v29; // rax
  float v30[2]; // [esp+18h] [ebp-10h] BYREF
  float v31; // [esp+20h] [ebp-8h]
  float v32; // [esp+24h] [ebp-4h]

  v4 = MEMORY[0xBA9DE4]; /*0x8d7f84*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d7f8d*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d7f94*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8d7fa7*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d7fa9*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x8d7fab*/
    *v8 = "TtSimulate"; /*0x8d7fb1*/
    v9 = __rdtsc(); /*0x8d7fb7*/
    v8[1] = v9; /*0x8d7fc1*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x8d7fc7*/
  }
  *(this + 2) = a4; /*0x8d7fd5*/
  v10 = sub_8992B0((_DWORD *)a2); /*0x8d7fda*/
  v11 = ThreadLocalStoragePointer[v4]; /*0x8d7fdf*/
  v12 = *(_DWORD *)(v11 + 0x19C); /*0x8d7fe2*/
  if ( !v12 ) /*0x8d7fee*/
    v12 = unk_BA7D9C; /*0x8d7ff0*/
  if ( v10 <= *(_DWORD *)(v12 + 0x2C) - *(_DWORD *)(v12 + 0x20) - 0x10
    || ((v13 = *(_DWORD *)(unk_BA7D98 + 0x14) + *(_DWORD *)(unk_BA7D98 + 0x28),
         v14 = *(_DWORD *)(unk_BA7D98 + 8),
         v14 > v13)
      ? (v15 = v14 - v13)
      : (v15 = 0),
        v10 <= v15) )
  {
    v20 = a4 + *(float *)(a2 + 0x18); /*0x8d8073*/
    *(_DWORD *)(a2 + 0x14) = *(_DWORD *)(a2 + 0x18); /*0x8d8076*/
    *(float *)(a2 + 0x18) = v20; /*0x8d8079*/
    *(float *)(a2 + 0x10) = v20; /*0x8d807c*/
    v21 = *(float *)(a2 + 0x14); /*0x8d807f*/
    v30[0] = *(float *)(a2 + 0x14); /*0x8d8082*/
    v30[1] = v20; /*0x8d8088*/
    v31 = v20 - v21; /*0x8d8090*/
    if ( v31 == *(float *)&SrcStr ) /*0x8d80a7*/
      v32 = 0.0; /*0x8d80a9*/
    else
      v32 = fConstant_1 / v31; /*0x8d80bd*/
    (*(void (__thiscall **)(_DWORD, int, float *))(**(_DWORD **)(a2 + 0x5C) + 0xC))(*(_DWORD *)(a2 + 0x5C), a2, v30); /*0x8d80cc*/
    sub_8D6E40((__m128 *)a2, v30); /*0x8d80d9*/
    *(_DWORD *)(a2 + 0xC) = *(_DWORD *)(a2 + 0x10); /*0x8d80eb*/
    sub_8D7920(a2, v30); /*0x8d80ee*/
    if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8d80fd*/
    {
      if ( *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x1A8) ) /*0x8d810e*/
      {
        v22 = *(_DWORD **)(v11 + 0x1A4); /*0x8d8110*/
        *v22 = "Et"; /*0x8d8116*/
        v23 = __rdtsc(); /*0x8d811c*/
        v22[1] = v23; /*0x8d8126*/
        *(_DWORD *)(v11 + 0x1A4) = v22 + 3; /*0x8d812c*/
      }
      return 2; /*0x8d8135*/
    }
    else
    {
      if ( *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x1A8) ) /*0x8d8150*/
      {
        v24 = *(_DWORD **)(v11 + 0x1A4); /*0x8d8152*/
        *v24 = "TtPostSimulateCb"; /*0x8d8158*/
        v25 = __rdtsc(); /*0x8d815e*/
        v24[1] = v25; /*0x8d8168*/
        *(_DWORD *)(v11 + 0x1A4) = v24 + 3; /*0x8d816e*/
      }
      sub_8DCD60((int)v30, a2, (int)v30); /*0x8d817a*/
      if ( *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x1A8) ) /*0x8d8193*/
      {
        v26 = *(_DWORD **)(v11 + 0x1A4); /*0x8d8195*/
        *v26 = "Et"; /*0x8d819b*/
        v27 = __rdtsc(); /*0x8d81a1*/
        v26[1] = v27; /*0x8d81ab*/
        *(_DWORD *)(v11 + 0x1A4) = v26 + 3; /*0x8d81b1*/
      }
      if ( *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x1A8) ) /*0x8d81c6*/
      {
        v28 = *(_DWORD **)(v11 + 0x1A4); /*0x8d81c8*/
        *v28 = "Et"; /*0x8d81ce*/
        v29 = __rdtsc(); /*0x8d81d4*/
        v28[1] = v29; /*0x8d81de*/
        *(_DWORD *)(v11 + 0x1A4) = v28 + 3; /*0x8d81e4*/
      }
      return 0; /*0x8d81ed*/
    }
  }
  else
  {
    v16 = ThreadLocalStoragePointer[v4]; /*0x8d8023*/
    *(_DWORD *)(unk_BA7D98 + 4) = 1; /*0x8d8026*/
    if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x8d8039*/
    {
      v17 = *(_DWORD **)(v11 + 0x1A4); /*0x8d803b*/
      *v17 = "Et"; /*0x8d8041*/
      v18 = __rdtsc(); /*0x8d8047*/
      v17[1] = v18; /*0x8d8051*/
      *(_DWORD *)(v11 + 0x1A4) = v17 + 3; /*0x8d8057*/
    }
    return 1; /*0x8d8060*/
  }
}
