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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d66f4*/
  v5 = MEMORY[0xBA9DE4]; /*0x8d66fc*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d6702*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8d6717*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d6719*/
    v9 = *(_DWORD **)(v6 + 0x1A4); /*0x8d671b*/
    *v9 = "TtSimulate"; /*0x8d6721*/
    v10 = __rdtsc(); /*0x8d6727*/
    v9[1] = v10; /*0x8d6731*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x8d6737*/
  }
  *(this + 2) = a4; /*0x8d6749*/
  a2[1].m128_f32[0] = a3 + a2[1].m128_f32[0]; /*0x8d674f*/
  if ( *((_DWORD *)this + 4) == 1 ) /*0x8d6758*/
    goto LABEL_22; /*0x8d6758*/
  while ( 1 )
  {
    if ( a4 * flt_A34BA0 > fabs(a2[1].m128_f32[0] - a2[1].m128_f32[2]) && a3 / a4 > kFaceEarNormalMatchRadius ) /*0x8d678c*/
      a2[1].m128_i32[0] = a2[1].m128_i32[2]; /*0x8d6791*/
    if ( *((_DWORD *)this + 6) )
    {
      v57 = a2[1].m128_f32[2] >= (double)a2[1].m128_f32[0] ? a2[1].m128_f32[0] : a2[1].m128_f32[2];
      if ( sub_8D33E0((float **)this, (int)a2, v57) ) /*0x8d67c6*/
        break; /*0x8d67c6*/
    }
    if ( a2[1].m128_f32[2] >= (double)a2[1].m128_f32[0] ) /*0x8d67de*/
    {
      a2->m128_i32[3] = a2[1].m128_i32[0]; /*0x8d69f1*/
LABEL_27:
      if ( a2[0x11].m128_i32[0] ) /*0x8d6925*/
      {
        v23 = ThreadLocalStoragePointer[v5]; /*0x8d6933*/
        if ( *(_DWORD *)(v23 + 0x1A4) < *(_DWORD *)(v23 + 0x1A8) ) /*0x8d6942*/
        {
          v24 = ThreadLocalStoragePointer[v5]; /*0x8d6944*/
          v25 = *(_DWORD **)(v23 + 0x1A4); /*0x8d6946*/
          *v25 = "TtPostSimulateCb"; /*0x8d694c*/
          v26 = __rdtsc(); /*0x8d6952*/
          v25[1] = v26; /*0x8d695c*/
          *(_DWORD *)(v24 + 0x1A4) = v25 + 3; /*0x8d6962*/
        }
        v27 = a2[1].m128_f32[0]; /*0x8d6968*/
        v28 = v27 - a3; /*0x8d696e*/
        v50 = v28; /*0x8d6972*/
        v51 = v27; /*0x8d6978*/
        v52 = v27 - v28; /*0x8d6980*/
        if ( v52 == *(float *)&SrcStr ) /*0x8d6997*/
          v53 = 0.0; /*0x8d699d*/
        else
          v53 = fConstant_1 / v52; /*0x8d6aa4*/
        sub_8DCD60((int)&v50, (int)a2, (int)&v50); /*0x8d6aae*/
        v42 = ThreadLocalStoragePointer[v5]; /*0x8d6ab3*/
        if ( *(_DWORD *)(v42 + 0x1A4) < *(_DWORD *)(v42 + 0x1A8) ) /*0x8d6ac7*/
        {
          v43 = ThreadLocalStoragePointer[v5]; /*0x8d6ac9*/
          v44 = *(_DWORD **)(v42 + 0x1A4); /*0x8d6acb*/
          *v44 = "Et"; /*0x8d6ad1*/
          v45 = __rdtsc(); /*0x8d6ad7*/
          v44[1] = v45; /*0x8d6ae1*/
          *(_DWORD *)(v43 + 0x1A4) = v44 + 3; /*0x8d6ae7*/
        }
      }
      v46 = ThreadLocalStoragePointer[v5]; /*0x8d6aed*/
      if ( *(_DWORD *)(v46 + 0x1A4) < *(_DWORD *)(v46 + 0x1A8) ) /*0x8d6afc*/
      {
        v47 = ThreadLocalStoragePointer[v5]; /*0x8d6afe*/
        v48 = *(_DWORD **)(v46 + 0x1A4); /*0x8d6b00*/
        *v48 = "Et"; /*0x8d6b06*/
        v49 = __rdtsc(); /*0x8d6b0c*/
        v48[1] = v49; /*0x8d6b16*/
        *(_DWORD *)(v47 + 0x1A4) = v48 + 3; /*0x8d6b1c*/
      }
      return 0; /*0x8d6b25*/
    }
    v12 = *((_DWORD *)this + 8); /*0x8d67e4*/
    *(this + 9) = 0.0; /*0x8d67e7*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 8))(v12); /*0x8d67f0*/
    v13 = sub_8992B0(a2); /*0x8d67f5*/
    v14 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x8d67fd*/
    if ( v13 > *(_DWORD *)(v14 + 0x2C) - *(_DWORD *)(v14 + 0x20) - 0x10 )
    {
      v15 = *(_DWORD *)(unk_BA7D98 + 0x14) + *(_DWORD *)(unk_BA7D98 + 0x28); /*0x8d681c*/
      v16 = *(_DWORD *)(unk_BA7D98 + 8); /*0x8d681f*/
      v17 = v16 > v15 ? v16 - v15 : 0;
      if ( v13 > v17 ) /*0x8d682e*/
      {
        v34 = ThreadLocalStoragePointer[v5]; /*0x8d69ff*/
        *(_DWORD *)(unk_BA7D98 + 4) = 1; /*0x8d6a02*/
        if ( *(_DWORD *)(v34 + 0x1A4) < *(_DWORD *)(v34 + 0x1A8) ) /*0x8d6a15*/
        {
          v35 = v34; /*0x8d6a17*/
          v36 = *(_DWORD **)(v34 + 0x1A4); /*0x8d6a19*/
          *v36 = "Et"; /*0x8d6a1f*/
          v37 = __rdtsc(); /*0x8d6a25*/
          v36[1] = v37; /*0x8d6a2f*/
          *(_DWORD *)(v35 + 0x1A4) = v36 + 3; /*0x8d6a35*/
        }
        return 1; /*0x8d6a47*/
      }
    }
    v18 = a4 + a2[1].m128_f32[2]; /*0x8d683b*/
    a2[1].m128_i32[1] = a2[1].m128_i32[2]; /*0x8d683e*/
    a2[1].m128_f32[2] = v18; /*0x8d6841*/
    v19 = a2[1].m128_f32[1]; /*0x8d6844*/
    v54[0] = a2[1].m128_f32[1]; /*0x8d6847*/
    v54[1] = v18; /*0x8d684d*/
    v55 = v18 - v19; /*0x8d6855*/
    if ( v55 == *(float *)&SrcStr ) /*0x8d686c*/
      v56 = 0.0; /*0x8d686e*/
    else
      v56 = fConstant_1 / v55; /*0x8d6882*/
    (*(void (__thiscall **)(__int32, __m128 *, float *))(*(_DWORD *)a2[5].m128_i32[3] + 0xC))( /*0x8d6891*/
      a2[5].m128_i32[3],
      a2,
      v54);
    a2->m128_i32[3] = a2[1].m128_i32[1]; /*0x8d689c*/
    sub_8D6E40(a2, v54); /*0x8d68a2*/
    if ( *((_DWORD *)this + 3) ) /*0x8d68a7*/
    {
      *((_DWORD *)this + 4) = 1; /*0x8d6a4a*/
      goto LABEL_27; /*0x8d6a51*/
    }
LABEL_22:
    v20 = a2[1].m128_f32[2]; /*0x8d68b2*/
    v21 = a2[1].m128_f32[1]; /*0x8d68b5*/
    v50 = a2[1].m128_f32[1]; /*0x8d68b8*/
    v51 = v20; /*0x8d68be*/
    v52 = v20 - v21; /*0x8d68c6*/
    if ( v52 == *(float *)&SrcStr ) /*0x8d68dd*/
      v53 = 0.0; /*0x8d68df*/
    else
      v53 = fConstant_1 / v52; /*0x8d68f3*/
    sub_8D5B20((const void **)this, (int)a2, &v50); /*0x8d68ff*/
    if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8d690e*/
    {
      v38 = ThreadLocalStoragePointer[v5]; /*0x8d6a56*/
      if ( *(_DWORD *)(v38 + 0x1A4) < *(_DWORD *)(v38 + 0x1A8) ) /*0x8d6a65*/
      {
        v39 = ThreadLocalStoragePointer[v5]; /*0x8d6a67*/
        v40 = *(_DWORD **)(v38 + 0x1A4); /*0x8d6a69*/
        *v40 = "Et"; /*0x8d6a6f*/
        v41 = __rdtsc(); /*0x8d6a75*/
        v40[1] = v41; /*0x8d6a7f*/
        *(_DWORD *)(v39 + 0x1A4) = v40 + 3; /*0x8d6a85*/
      }
      return 2; /*0x8d6a97*/
    }
    v22 = *((_DWORD *)this + 3) == 2; /*0x8d6914*/
    *(this + 4) = 0.0; /*0x8d6918*/
    if ( v22 ) /*0x8d691f*/
      goto LABEL_27; /*0x8d691f*/
  }
  v29 = ThreadLocalStoragePointer[v5]; /*0x8d69aa*/
  if ( *(_DWORD *)(v29 + 0x1A4) < *(_DWORD *)(v29 + 0x1A8) ) /*0x8d69b9*/
  {
    v30 = ThreadLocalStoragePointer[v5]; /*0x8d69bb*/
    v31 = *(_DWORD **)(v29 + 0x1A4); /*0x8d69bd*/
    *v31 = "Et"; /*0x8d69c3*/
    v32 = __rdtsc(); /*0x8d69c9*/
    v31[1] = v32; /*0x8d69d3*/
    *(_DWORD *)(v30 + 0x1A4) = v31 + 3; /*0x8d69d9*/
  }
  return 2; /*0x8d69df*/
}
