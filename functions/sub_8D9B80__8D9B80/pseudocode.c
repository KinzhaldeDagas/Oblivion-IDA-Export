int __thiscall sub_8D9B80(float *this, int a2, float a3, float a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // ebp
  int v6; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  double v12; // st7
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // edx
  int v18; // edx
  double v19; // st7
  double v20; // st6
  int v21; // eax
  int v22; // edi
  _DWORD *v23; // ecx
  unsigned __int64 v24; // rax
  float *v25; // eax
  int v26; // eax
  int v27; // esi
  _DWORD *v28; // ecx
  unsigned __int64 v29; // rax
  int v30; // eax
  int v31; // esi
  _DWORD *v32; // ecx
  unsigned __int64 v33; // rax
  int v35; // eax
  _DWORD *v36; // ecx
  unsigned __int64 v37; // rax
  _DWORD *v38; // ecx
  unsigned __int64 v39; // rax
  float v40; // [esp+8h] [ebp-30h]
  float v41; // [esp+24h] [ebp-14h]
  float v42[2]; // [esp+28h] [ebp-10h] BYREF
  float v43; // [esp+30h] [ebp-8h]
  float v44; // [esp+34h] [ebp-4h]
  int v45; // [esp+3Ch] [ebp+4h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d9b84*/
  v5 = MEMORY[0xBA9DE4]; /*0x8d9b8c*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d9b92*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8d9bab*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d9bad*/
    v9 = *(_DWORD **)(v6 + 0x1A4); /*0x8d9baf*/
    *v9 = "TtSimulate"; /*0x8d9bb5*/
    v10 = __rdtsc(); /*0x8d9bbb*/
    v9[1] = v10; /*0x8d9bc5*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x8d9bcb*/
  }
  *(this + 2) = a4; /*0x8d9bdd*/
  v12 = a3 + *(float *)(a2 + 0x10); /*0x8d9be0*/
  *(float *)(a2 + 0x10) = v12; /*0x8d9be3*/
  if ( v12 <= *(float *)(a2 + 0x18) ) /*0x8d9bee*/
  {
LABEL_21:
    *(_DWORD *)(a2 + 0xC) = *(_DWORD *)(a2 + 0x10); /*0x8d9d2e*/
    v21 = ThreadLocalStoragePointer[v5]; /*0x8d9d34*/
    if ( *(_DWORD *)(v21 + 0x1A4) < *(_DWORD *)(v21 + 0x1A8) ) /*0x8d9d43*/
    {
      v22 = ThreadLocalStoragePointer[v5]; /*0x8d9d45*/
      v23 = *(_DWORD **)(v21 + 0x1A4); /*0x8d9d47*/
      *v23 = "TtPostSimulateCb"; /*0x8d9d4d*/
      v24 = __rdtsc(); /*0x8d9d53*/
      v23[1] = v24; /*0x8d9d5d*/
      *(_DWORD *)(v22 + 0x1A4) = v23 + 3; /*0x8d9d63*/
    }
    v40 = *(float *)(a2 + 0x10) - a3; /*0x8d9d79*/
    v25 = sub_8D2C90(v42, v40, *(float *)(a2 + 0x10)); /*0x8d9d7c*/
    sub_8DCD60((int)v25, a2, (int)v42); /*0x8d9d87*/
    v26 = ThreadLocalStoragePointer[v5]; /*0x8d9d8c*/
    if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) ) /*0x8d9da0*/
    {
      v27 = ThreadLocalStoragePointer[v5]; /*0x8d9da2*/
      v28 = *(_DWORD **)(v26 + 0x1A4); /*0x8d9da4*/
      *v28 = "Et"; /*0x8d9daa*/
      v29 = __rdtsc(); /*0x8d9db0*/
      v28[1] = v29; /*0x8d9dba*/
      *(_DWORD *)(v27 + 0x1A4) = v28 + 3; /*0x8d9dc0*/
    }
    v30 = ThreadLocalStoragePointer[v5]; /*0x8d9dc6*/
    if ( *(_DWORD *)(v30 + 0x1A4) < *(_DWORD *)(v30 + 0x1A8) ) /*0x8d9dd5*/
    {
      v31 = ThreadLocalStoragePointer[v5]; /*0x8d9dd7*/
      v32 = *(_DWORD **)(v30 + 0x1A4); /*0x8d9dd9*/
      *v32 = "Et"; /*0x8d9ddf*/
      v33 = __rdtsc(); /*0x8d9de5*/
      v32[1] = v33; /*0x8d9def*/
      *(_DWORD *)(v31 + 0x1A4) = v32 + 3; /*0x8d9df5*/
    }
    return 0; /*0x8d9e04*/
  }
  v13 = ThreadLocalStoragePointer[v5]; /*0x8d9bf8*/
  v45 = v13; /*0x8d9c01*/
  v41 = a4 * flt_A34BA0; /*0x8d9c05*/
  while ( 1 ) /*0x8d9c10*/
  {
    if ( fabs(*(float *)(a2 + 0x10) - *(float *)(a2 + 0x18)) < v41 && a3 / a4 > kFaceEarNormalMatchRadius ) /*0x8d9c36*/
      *(_DWORD *)(a2 + 0x10) = *(_DWORD *)(a2 + 0x18); /*0x8d9c3b*/
    v14 = sub_8992B0((_DWORD *)a2); /*0x8d9c40*/
    v15 = *(_DWORD *)(v13 + 0x19C); /*0x8d9c45*/
    if ( !v15 ) /*0x8d9c4d*/
      v15 = unk_BA7D9C; /*0x8d9c4f*/
    if ( v14 > *(_DWORD *)(v15 + 0x2C) - *(_DWORD *)(v15 + 0x20) - 0x10 ) /*0x8d9c60*/
      break; /*0x8d9c60*/
LABEL_16:
    v19 = a4 + *(float *)(a2 + 0x18); /*0x8d9c89*/
    *(_DWORD *)(a2 + 0x14) = *(_DWORD *)(a2 + 0x18); /*0x8d9c93*/
    *(float *)(a2 + 0x18) = v19; /*0x8d9c96*/
    v20 = *(float *)(a2 + 0x14); /*0x8d9c99*/
    v42[0] = *(float *)(a2 + 0x14); /*0x8d9c9c*/
    v42[1] = v19; /*0x8d9ca2*/
    v43 = v19 - v20; /*0x8d9caa*/
    if ( v43 == *(float *)&SrcStr ) /*0x8d9cc1*/
      v44 = 0.0; /*0x8d9cc3*/
    else
      v44 = fConstant_1 / v43; /*0x8d9cd7*/
    (*(void (__thiscall **)(_DWORD, int, float *))(**(_DWORD **)(a2 + 0x5C) + 0xC))(*(_DWORD *)(a2 + 0x5C), a2, v42); /*0x8d9ce6*/
    *(_DWORD *)(a2 + 0xC) = *(_DWORD *)(a2 + 0x14); /*0x8d9cf1*/
    sub_8D6E40((__m128 *)a2, v42); /*0x8d9cf9*/
    sub_8D7920(a2, v42); /*0x8d9d08*/
    if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8d9d17*/
    {
      if ( *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x1A8) ) /*0x8d9e63*/
      {
        v38 = *(_DWORD **)(v13 + 0x1A4); /*0x8d9e65*/
        *v38 = "Et"; /*0x8d9e6b*/
        v39 = __rdtsc(); /*0x8d9e71*/
        v38[1] = v39; /*0x8d9e7b*/
        *(_DWORD *)(v13 + 0x1A4) = v38 + 3; /*0x8d9e81*/
      }
      return 2; /*0x8d9e8a*/
    }
    if ( *(float *)(a2 + 0x18) >= (double)*(float *)(a2 + 0x10) ) /*0x8d9d28*/
      goto LABEL_21; /*0x8d9d28*/
  }
  v16 = *(_DWORD *)(unk_BA7D98 + 0x14) + *(_DWORD *)(unk_BA7D98 + 0x28); /*0x8d9c6e*/
  v17 = *(_DWORD *)(unk_BA7D98 + 8); /*0x8d9c70*/
  if ( v17 > v16 ) /*0x8d9c75*/
    v18 = v17 - v16; /*0x8d9c7b*/
  else
    v18 = 0; /*0x8d9c77*/
  if ( v14 <= v18 ) /*0x8d9c7f*/
  {
    v13 = v45; /*0x8d9c85*/
    goto LABEL_16; /*0x8d9c85*/
  }
  v35 = ThreadLocalStoragePointer[v5]; /*0x8d9e07*/
  *(_DWORD *)(unk_BA7D98 + 4) = 1; /*0x8d9e0a*/
  if ( *(_DWORD *)(v35 + 0x1A4) < *(_DWORD *)(v35 + 0x1A8) ) /*0x8d9e1d*/
  {
    v36 = *(_DWORD **)(v45 + 0x1A4); /*0x8d9e23*/
    *v36 = "Et"; /*0x8d9e29*/
    v37 = __rdtsc(); /*0x8d9e2f*/
    v36[1] = v37; /*0x8d9e39*/
    *(_DWORD *)(v45 + 0x1A4) = v36 + 3; /*0x8d9e3f*/
  }
  return 1; /*0x8d9dfb*/
}
