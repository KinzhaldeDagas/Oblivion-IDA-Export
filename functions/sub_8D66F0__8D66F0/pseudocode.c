int __thiscall sub_8D66F0(float *this, __m128 *a2, float a3, float a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // ebp
  int v6; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // edx
  int v17; // edx
  double v18; // st7
  double v19; // st6
  double v20; // st7
  double v21; // st6
  bool v22; // zf
  int v23; // eax
  int v24; // edi
  _DWORD *v25; // ecx
  unsigned __int64 v26; // rax
  double v27; // st7
  double v28; // st6
  int v29; // eax
  int v30; // ebx
  _DWORD *v31; // ecx
  unsigned __int64 v32; // rax
  int v34; // eax
  int v35; // ebx
  _DWORD *v36; // ecx
  unsigned __int64 v37; // rax
  int v38; // eax
  int v39; // ebx
  _DWORD *v40; // ecx
  unsigned __int64 v41; // rax
  int v42; // eax
  int v43; // esi
  _DWORD *v44; // ecx
  unsigned __int64 v45; // rax
  int v46; // eax
  int v47; // ebx
  _DWORD *v48; // ecx
  unsigned __int64 v49; // rax
  float v50; // [esp+14h] [ebp-20h] BYREF
  float v51; // [esp+18h] [ebp-1Ch]
  float v52; // [esp+1Ch] [ebp-18h]
  float v53; // [esp+20h] [ebp-14h]
  float v54[2]; // [esp+24h] [ebp-10h] BYREF
  float v55; // [esp+2Ch] [ebp-8h]
  float v56; // [esp+30h] [ebp-4h]
  float v57; // [esp+38h] [ebp+4h]

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
  a2[1].m128_f32[0] = a3 + a2[1].m128_f32[0];
  if ( *((_DWORD *)this + 4) == 1 )
    goto LABEL_22;
  while ( 1 )
  {
    if ( a4 * flt_A34BA0 > fabs(a2[1].m128_f32[0] - a2[1].m128_f32[2]) && a3 / a4 > flt_A2FAAC )
      a2[1].m128_i32[0] = a2[1].m128_i32[2];
    if ( *((_DWORD *)this + 6) )
    {
      v57 = a2[1].m128_f32[2] >= (double)a2[1].m128_f32[0] ? a2[1].m128_f32[0] : a2[1].m128_f32[2];
      if ( sub_8D33E0((float **)this, (int)a2, v57) )
        break;
    }
    if ( a2[1].m128_f32[2] >= (double)a2[1].m128_f32[0] )
    {
      a2->m128_i32[3] = a2[1].m128_i32[0];
LABEL_27:
      if ( a2[0x11].m128_i32[0] )
      {
        v23 = ThreadLocalStoragePointer[v5];
        if ( *(_DWORD *)(v23 + 0x1A4) < *(_DWORD *)(v23 + 0x1A8) )
        {
          v24 = ThreadLocalStoragePointer[v5];
          v25 = *(_DWORD **)(v23 + 0x1A4);
          *v25 = "TtPostSimulateCb";
          v26 = __rdtsc();
          v25[1] = v26;
          *(_DWORD *)(v24 + 0x1A4) = v25 + 3;
        }
        v27 = a2[1].m128_f32[0];
        v28 = v27 - a3;
        v50 = v28;
        v51 = v27;
        v52 = v27 - v28;
        if ( v52 == *(float *)&SrcStr )
          v53 = 0.0;
        else
          v53 = fConstant_1 / v52;
        sub_8DCD60((int)&v50, (int)a2, (int)&v50);
        v42 = ThreadLocalStoragePointer[v5];
        if ( *(_DWORD *)(v42 + 0x1A4) < *(_DWORD *)(v42 + 0x1A8) )
        {
          v43 = ThreadLocalStoragePointer[v5];
          v44 = *(_DWORD **)(v42 + 0x1A4);
          *v44 = "Et";
          v45 = __rdtsc();
          v44[1] = v45;
          *(_DWORD *)(v43 + 0x1A4) = v44 + 3;
        }
      }
      v46 = ThreadLocalStoragePointer[v5];
      if ( *(_DWORD *)(v46 + 0x1A4) < *(_DWORD *)(v46 + 0x1A8) )
      {
        v47 = ThreadLocalStoragePointer[v5];
        v48 = *(_DWORD **)(v46 + 0x1A4);
        *v48 = "Et";
        v49 = __rdtsc();
        v48[1] = v49;
        *(_DWORD *)(v47 + 0x1A4) = v48 + 3;
      }
      return 0;
    }
    v12 = *((_DWORD *)this + 8);
    *(this + 9) = 0.0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 8))(v12);
    v13 = sub_8992B0(a2);
    v14 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C);
    if ( v13 > *(_DWORD *)(v14 + 0x2C) - *(_DWORD *)(v14 + 0x20) - 0x10 )
    {
      v15 = *(_DWORD *)(dword_BA7D98 + 0x14) + *(_DWORD *)(dword_BA7D98 + 0x28);
      v16 = *(_DWORD *)(dword_BA7D98 + 8);
      v17 = v16 > v15 ? v16 - v15 : 0;
      if ( v13 > v17 )
      {
        v34 = ThreadLocalStoragePointer[v5];
        *(_DWORD *)(dword_BA7D98 + 4) = 1;
        if ( *(_DWORD *)(v34 + 0x1A4) < *(_DWORD *)(v34 + 0x1A8) )
        {
          v35 = v34;
          v36 = *(_DWORD **)(v34 + 0x1A4);
          *v36 = "Et";
          v37 = __rdtsc();
          v36[1] = v37;
          *(_DWORD *)(v35 + 0x1A4) = v36 + 3;
        }
        return 1;
      }
    }
    v18 = a4 + a2[1].m128_f32[2];
    a2[1].m128_i32[1] = a2[1].m128_i32[2];
    a2[1].m128_f32[2] = v18;
    v19 = a2[1].m128_f32[1];
    v54[0] = a2[1].m128_f32[1];
    v54[1] = v18;
    v55 = v18 - v19;
    if ( v55 == *(float *)&SrcStr )
      v56 = 0.0;
    else
      v56 = fConstant_1 / v55;
    (*(void (__thiscall **)(__int32, __m128 *, float *))(*(_DWORD *)a2[5].m128_i32[3] + 0xC))(
      a2[5].m128_i32[3],
      a2,
      v54);
    a2->m128_i32[3] = a2[1].m128_i32[1];
    sub_8D6E40(a2, v54);
    if ( *((_DWORD *)this + 3) )
    {
      *((_DWORD *)this + 4) = 1;
      goto LABEL_27;
    }
LABEL_22:
    v20 = a2[1].m128_f32[2];
    v21 = a2[1].m128_f32[1];
    v50 = a2[1].m128_f32[1];
    v51 = v20;
    v52 = v20 - v21;
    if ( v52 == *(float *)&SrcStr )
      v53 = 0.0;
    else
      v53 = fConstant_1 / v52;
    sub_8D5B20((const void **)this, (int)a2, &v50);
    if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
    {
      v38 = ThreadLocalStoragePointer[v5];
      if ( *(_DWORD *)(v38 + 0x1A4) < *(_DWORD *)(v38 + 0x1A8) )
      {
        v39 = ThreadLocalStoragePointer[v5];
        v40 = *(_DWORD **)(v38 + 0x1A4);
        *v40 = "Et";
        v41 = __rdtsc();
        v40[1] = v41;
        *(_DWORD *)(v39 + 0x1A4) = v40 + 3;
      }
      return 2;
    }
    v22 = *((_DWORD *)this + 3) == 2;
    *(this + 4) = 0.0;
    if ( v22 )
      goto LABEL_27;
  }
  v29 = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v29 + 0x1A4) < *(_DWORD *)(v29 + 0x1A8) )
  {
    v30 = ThreadLocalStoragePointer[v5];
    v31 = *(_DWORD **)(v29 + 0x1A4);
    *v31 = "Et";
    v32 = __rdtsc();
    v31[1] = v32;
    *(_DWORD *)(v30 + 0x1A4) = v31 + 3;
  }
  return 2;
}
