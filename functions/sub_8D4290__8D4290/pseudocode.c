int __thiscall sub_8D4290(const void **this, int a2, int *a3)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  unsigned int v12; // esi
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // ebx
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  unsigned __int64 v21; // rax
  int v22; // esi
  _DWORD *v23; // ecx
  _DWORD *v24; // ecx
  int v25; // esi
  _DWORD *v26; // ecx
  int v28; // [esp+10h] [ebp-3064h]
  unsigned int v29; // [esp+14h] [ebp-3060h]
  int v31; // [esp+1Ch] [ebp-3058h]
  _DWORD v32[12]; // [esp+24h] [ebp-3050h] BYREF
  _BYTE v33[12292]; // [esp+54h] [ebp-3020h] BYREF
  float v34; // [esp+3058h] [ebp-1Ch]
  int v35; // [esp+3064h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d42a1*/
  v4 = MEMORY[0xBA9DE4]; /*0x8d42aa*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d42b0*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8d42c5*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d42c7*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8d42c9*/
    *v7 = "TtNarrowPhase"; /*0x8d42cf*/
    v8 = __rdtsc(); /*0x8d42d5*/
    v7[1] = v8; /*0x8d42df*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x8d42e5*/
  }
  v9 = a2; /*0x8d42eb*/
  v10 = *(_DWORD *)(a2 + 0x48); /*0x8d42ee*/
  v11 = 0; /*0x8d42f1*/
  v34 = 3.4028235e38; /*0x8d42f5*/
  if ( v10 <= 0 )
  {
LABEL_20:
    LODWORD(v21) = ThreadLocalStoragePointer[v4]; /*0x8d4445*/
    if ( *(_DWORD *)(v21 + 0x1A4) < *(_DWORD *)(v21 + 0x1A8) ) /*0x8d4454*/
    {
      v22 = ThreadLocalStoragePointer[v4]; /*0x8d4456*/
      v23 = *(_DWORD **)(v21 + 0x1A4); /*0x8d4458*/
      *v23 = "Et"; /*0x8d445e*/
      v21 = __rdtsc(); /*0x8d4464*/
      v23[1] = v21; /*0x8d446e*/
      *(_DWORD *)(v22 + 0x1A4) = v23 + 3; /*0x8d4474*/
    }
  }
  else
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(*(_DWORD *)(v9 + 0x44) + 4 * v11++); /*0x8d4313*/
      v28 = v11; /*0x8d4319*/
      v13 = v11 == v10 ? *(_DWORD *)(v9 + 0x54) : *(unsigned __int16 *)(v9 + 0x5A);
      v29 = v12 + v13; /*0x8d4324*/
      if ( v12 < v12 + v13 ) /*0x8d4336*/
        break; /*0x8d4336*/
LABEL_18:
      v10 = *(_DWORD *)(v9 + 0x48); /*0x8d4434*/
      if ( v11 >= v10 ) /*0x8d4439*/
      {
        v4 = MEMORY[0xBA9DE4]; /*0x8d443f*/
        goto LABEL_20; /*0x8d443f*/
      }
    }
    while ( 1 ) /*0x8d4344*/
    {
      v14 = *(_DWORD *)(v12 + 0x18); /*0x8d4344*/
      v15 = 0x3C * *(char *)(v12 + 8); /*0x8d4347*/
      v16 = *a3; /*0x8d434a*/
      v17 = *(_DWORD *)(v12 + 0x14); /*0x8d434c*/
      _mm_prefetch((const char *)(v12 + 0x80), 0); /*0x8d434f*/
      v31 = v14; /*0x8d4356*/
      _mm_prefetch(*(const char **)(v12 + 0x10), 0); /*0x8d435d*/
      a3[0xA] = v15 + v16 + 0x1A14; /*0x8d436c*/
      *((_BYTE *)a3 + 0xC) = *(_BYTE *)(v15 + v16 + 0x1A24); /*0x8d4378*/
      v32[0] = v33; /*0x8d437b*/
      v34 = 3.4028235e38; /*0x8d437f*/
      v35 = 0; /*0x8d438a*/
      sub_8E6D10(v12, (int)a3, (int)v32); /*0x8d4395*/
      v18 = unk_BA7D98; /*0x8d439a*/
      v19 = *(_DWORD *)(unk_BA7D98 + 0x14) + *(_DWORD *)(unk_BA7D98 + 0x28); /*0x8d43a6*/
      v20 = *(_DWORD *)(unk_BA7D98 + 8); /*0x8d43a8*/
      if ( v20 <= v19 || v20 == v19 ) /*0x8d43b4*/
      {
        *(_DWORD *)(v18 + 4) = 1; /*0x8d43ba*/
        v18 = unk_BA7D98; /*0x8d43c1*/
      }
      if ( *(_DWORD *)(v18 + 4) == 1 ) /*0x8d43cb*/
        break; /*0x8d43cb*/
      if ( (_BYTE *)v32[0] != v33 ) /*0x8d43db*/
        (*(void (__thiscall **)(_DWORD, int, int, int *, _DWORD *))(**(_DWORD **)(v12 + 0x10) + 0x14))( /*0x8d43ee*/
          *(_DWORD *)(v12 + 0x10),
          v17,
          v31,
          a3,
          v32);
      if ( v34 < (double)flt_A9A020 ) /*0x8d4403*/
        sub_8D3600(this, (int)v32, (_DWORD *)v12); /*0x8d440f*/
      v12 += *(unsigned __int8 *)(v12 + 3); /*0x8d441c*/
      if ( v12 >= v29 ) /*0x8d4420*/
      {
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d4426*/
        v11 = v28; /*0x8d442d*/
        v9 = a2; /*0x8d4431*/
        goto LABEL_18; /*0x8d4431*/
      }
    }
    v24 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d4483*/
    LODWORD(v21) = v24[MEMORY[0xBA9DE4]]; /*0x8d4490*/
    if ( *(_DWORD *)(v21 + 0x1A4) < *(_DWORD *)(v21 + 0x1A8) ) /*0x8d449f*/
    {
      v25 = v24[MEMORY[0xBA9DE4]]; /*0x8d44a1*/
      v26 = *(_DWORD **)(v21 + 0x1A4); /*0x8d44a3*/
      *v26 = "Et"; /*0x8d44a9*/
      v21 = __rdtsc(); /*0x8d44af*/
      v26[1] = v21; /*0x8d44b9*/
      *(_DWORD *)(v25 + 0x1A4) = v26 + 3; /*0x8d44c0*/
    }
  }
  return v21; /*0x8d447a*/
}
