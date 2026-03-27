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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = TlsIndex;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v6 + 0x1A4);
    *v9 = "TtSimulate";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
  }
  *(this + 2) = a4;
  v12 = a3 + *(float *)(a2 + 0x10);
  *(float *)(a2 + 0x10) = v12;
  if ( v12 <= *(float *)(a2 + 0x18) )
  {
LABEL_21:
    *(_DWORD *)(a2 + 0xC) = *(_DWORD *)(a2 + 0x10);
    v21 = ThreadLocalStoragePointer[v5];
    if ( *(_DWORD *)(v21 + 0x1A4) < *(_DWORD *)(v21 + 0x1A8) )
    {
      v22 = ThreadLocalStoragePointer[v5];
      v23 = *(_DWORD **)(v21 + 0x1A4);
      *v23 = "TtPostSimulateCb";
      v24 = __rdtsc();
      v23[1] = v24;
      *(_DWORD *)(v22 + 0x1A4) = v23 + 3;
    }
    v40 = *(float *)(a2 + 0x10) - a3;
    v25 = sub_8D2C90(v42, v40, *(float *)(a2 + 0x10));
    sub_8DCD60((int)v25, a2, (int)v42);
    v26 = ThreadLocalStoragePointer[v5];
    if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) )
    {
      v27 = ThreadLocalStoragePointer[v5];
      v28 = *(_DWORD **)(v26 + 0x1A4);
      *v28 = "Et";
      v29 = __rdtsc();
      v28[1] = v29;
      *(_DWORD *)(v27 + 0x1A4) = v28 + 3;
    }
    v30 = ThreadLocalStoragePointer[v5];
    if ( *(_DWORD *)(v30 + 0x1A4) < *(_DWORD *)(v30 + 0x1A8) )
    {
      v31 = ThreadLocalStoragePointer[v5];
      v32 = *(_DWORD **)(v30 + 0x1A4);
      *v32 = "Et";
      v33 = __rdtsc();
      v32[1] = v33;
      *(_DWORD *)(v31 + 0x1A4) = v32 + 3;
    }
    return 0;
  }
  v13 = ThreadLocalStoragePointer[v5];
  v45 = v13;
  v41 = a4 * flt_A34BA0;
  while ( 1 )
  {
    if ( fabs(*(float *)(a2 + 0x10) - *(float *)(a2 + 0x18)) < v41 && a3 / a4 > flt_A2FAAC )
      *(_DWORD *)(a2 + 0x10) = *(_DWORD *)(a2 + 0x18);
    v14 = sub_8992B0((_DWORD *)a2);
    v15 = *(_DWORD *)(v13 + 0x19C);
    if ( !v15 )
      v15 = dword_BA7D9C;
    if ( v14 > *(_DWORD *)(v15 + 0x2C) - *(_DWORD *)(v15 + 0x20) - 0x10 )
      break;
LABEL_16:
    v19 = a4 + *(float *)(a2 + 0x18);
    *(_DWORD *)(a2 + 0x14) = *(_DWORD *)(a2 + 0x18);
    *(float *)(a2 + 0x18) = v19;
    v20 = *(float *)(a2 + 0x14);
    v42[0] = *(float *)(a2 + 0x14);
    v42[1] = v19;
    v43 = v19 - v20;
    if ( v43 == *(float *)&SrcStr )
      v44 = 0.0;
    else
      v44 = fConstant_1 / v43;
    (*(void (__thiscall **)(_DWORD, int, float *))(**(_DWORD **)(a2 + 0x5C) + 0xC))(*(_DWORD *)(a2 + 0x5C), a2, v42);
    *(_DWORD *)(a2 + 0xC) = *(_DWORD *)(a2 + 0x14);
    sub_8D6E40((__m128 *)a2, v42);
    sub_8D7920(a2, v42);
    if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
    {
      if ( *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x1A8) )
      {
        v38 = *(_DWORD **)(v13 + 0x1A4);
        *v38 = "Et";
        v39 = __rdtsc();
        v38[1] = v39;
        *(_DWORD *)(v13 + 0x1A4) = v38 + 3;
      }
      return 2;
    }
    if ( *(float *)(a2 + 0x18) >= (double)*(float *)(a2 + 0x10) )
      goto LABEL_21;
  }
  v16 = *(_DWORD *)(dword_BA7D98 + 0x14) + *(_DWORD *)(dword_BA7D98 + 0x28);
  v17 = *(_DWORD *)(dword_BA7D98 + 8);
  if ( v17 > v16 )
    v18 = v17 - v16;
  else
    v18 = 0;
  if ( v14 <= v18 )
  {
    v13 = v45;
    goto LABEL_16;
  }
  v35 = ThreadLocalStoragePointer[v5];
  *(_DWORD *)(dword_BA7D98 + 4) = 1;
  if ( *(_DWORD *)(v35 + 0x1A4) < *(_DWORD *)(v35 + 0x1A8) )
  {
    v36 = *(_DWORD **)(v45 + 0x1A4);
    *v36 = "Et";
    v37 = __rdtsc();
    v36[1] = v37;
    *(_DWORD *)(v45 + 0x1A4) = v36 + 3;
  }
  return 1;
}
