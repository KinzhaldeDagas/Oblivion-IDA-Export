int __stdcall sub_8D6E40(__m128 *a1, float *a2)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v3; // edi
  int v4; // eax
  int v5; // esi
  _DWORD *v6; // ecx
  unsigned __int64 v7; // rax
  void *v8; // ecx
  __m128 v9; // xmm2
  __int32 v10; // ecx
  int v11; // eax
  _DWORD *v12; // ecx
  unsigned __int64 v13; // rax
  __int32 v14; // eax
  int v15; // edi
  int v16; // ecx
  _DWORD *v17; // edi
  int v18; // ebx
  __int32 v19; // eax
  __int32 v20; // ecx
  int v21; // edx
  int v22; // eax
  __int32 v23; // ecx
  int v24; // eax
  unsigned int v25; // edx
  _DWORD *v26; // ecx
  unsigned __int64 v27; // rax
  __int32 v28; // eax
  _DWORD *v29; // ecx
  int v30; // eax
  _DWORD *v31; // edi
  unsigned __int64 v32; // rax
  int i; // edi
  int v34; // ecx
  int v35; // edi
  _DWORD *v36; // ecx
  unsigned __int64 v37; // rax
  int v38; // eax
  _DWORD *v39; // ecx
  unsigned __int64 v40; // rax
  __int32 v41; // eax
  int v43; // eax
  _DWORD *v44; // ecx
  unsigned __int64 v45; // rax
  int v46; // eax
  int v47; // esi
  _DWORD *v48; // ecx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  int v51; // ebx
  _DWORD *v52; // ecx
  int v54; // [esp-8h] [ebp-58h]
  int v55; // [esp+Ch] [ebp-44h]
  __int32 v56; // [esp+Ch] [ebp-44h]
  __int32 v57; // [esp+10h] [ebp-40h]
  __int32 v58; // [esp+10h] [ebp-40h]
  _DWORD *v59; // [esp+18h] [ebp-38h]
  _DWORD v60[11]; // [esp+24h] [ebp-2Ch] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d6e4a*/
  v3 = MEMORY[0xBA9DE4]; /*0x8d6e53*/
  v4 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d6e59*/
  if ( *(_DWORD *)(v4 + 0x1A4) < *(_DWORD *)(v4 + 0x1A8) ) /*0x8d6e68*/
  {
    v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d6e6a*/
    v6 = *(_DWORD **)(v4 + 0x1A4); /*0x8d6e6c*/
    *v6 = "LtIntegrate"; /*0x8d6e72*/
    v6[3] = "Init"; /*0x8d6e78*/
    v7 = __rdtsc(); /*0x8d6e7f*/
    v6[1] = v7; /*0x8d6e89*/
    *(_DWORD *)(v5 + 0x1A4) = v6 + 4; /*0x8d6e8f*/
  }
  a1[0x16].m128_u64[0] = *(_QWORD *)a2; /*0x8d6ea3*/
  a1[0x16].m128_f32[2] = a2[2]; /*0x8d6eae*/
  v8 = *((void **)a2 + 3); /*0x8d6eb1*/
  a1[0x16].m128_i32[3] = (__int32)v8; /*0x8d6eb4*/
  a1[0x26].m128_f32[1] = a1[0x27].m128_f32[0] * a2[2]; /*0x8d6ec3*/
  v9 = _mm_shuffle_ps((__m128)a1[0x26].m128_u32[1], (__m128)a1[0x26].m128_u32[1], 0); /*0x8d6ee5*/
  a1[0x26].m128_f32[2] = (double)a1[0x26].m128_i32[3] * a2[3]; /*0x8d6ee9*/
  a1[0x18] = _mm_mul_ps(v9, a1[2]); /*0x8d6ef6*/
  a1[0x19] = _mm_mul_ps(_mm_shuffle_ps((__m128)*((unsigned int *)a2 + 2), (__m128)*((unsigned int *)a2 + 2), 0), a1[2]); /*0x8d6f18*/
  Shared_NoOpVirtual_60D0A0(v8); /*0x8d6f1f*/
  sub_8CC3F0((const void **)a1); /*0x8d6f25*/
  v10 = a1[8].m128_i32[2] + 1; /*0x8d6f39*/
  --a1[8].m128_i32[3]; /*0x8d6f3b*/
  v11 = ThreadLocalStoragePointer[v3]; /*0x8d6f41*/
  a1[8].m128_i32[2] = v10; /*0x8d6f44*/
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) ) /*0x8d6f56*/
  {
    v12 = *(_DWORD **)(v11 + 0x1A4); /*0x8d6f58*/
    *v12 = "StActions"; /*0x8d6f5e*/
    v13 = __rdtsc(); /*0x8d6f64*/
    HIDWORD(v13) = v13; /*0x8d6f6a*/
    LODWORD(v13) = ThreadLocalStoragePointer[v3]; /*0x8d6f6e*/
    v12[1] = HIDWORD(v13); /*0x8d6f71*/
    *(_DWORD *)(v13 + 0x1A4) = v12 + 3; /*0x8d6f77*/
  }
  v14 = 0; /*0x8d6f80*/
  v57 = 0; /*0x8d6f84*/
  if ( a1[3].m128_i32[3] > 0 ) /*0x8d6f88*/
  {
    do /*0x8d6fc9*/
    {
      v15 = *(_DWORD *)(a1[3].m128_i32[2] + 4 * v14); /*0x8d6f93*/
      v16 = *(_DWORD *)(v15 + 0x60); /*0x8d6f96*/
      v17 = (_DWORD *)(v15 + 0x5C); /*0x8d6f99*/
      v18 = 0; /*0x8d6f9c*/
      if ( v16 > 0 ) /*0x8d6fa0*/
      {
        do /*0x8d6fb9*/
        {
          (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(*v17 + 4 * v18) + 8))( /*0x8d6fb0*/
            *(_DWORD *)(*v17 + 4 * v18),
            a1 + 0x16);
          ++v18; /*0x8d6fb6*/
        }
        while ( v18 < v17[1] ); /*0x8d6fb9*/
        v14 = v57; /*0x8d6fbb*/
      }
      v57 = ++v14; /*0x8d6fc5*/
    }
    while ( v14 < a1[3].m128_i32[3] ); /*0x8d6fc9*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d6fcb*/
    v3 = MEMORY[0xBA9DE4]; /*0x8d6fd2*/
  }
  v19 = a1[8].m128_i32[2] - 1; /*0x8d6fe5*/
  ++a1[8].m128_i32[3]; /*0x8d6fe6*/
  a1[8].m128_i32[2] = v19; /*0x8d6fec*/
  if ( !v19 ) /*0x8d6ff2*/
  {
    if ( a1[8].m128_i32[1] ) /*0x8d6ff4*/
    {
      if ( !a1[9].m128_i8[0] ) /*0x8d6ffe*/
        sub_899210((int)a1); /*0x8d700a*/
    }
  }
  ++a1[8].m128_i32[2]; /*0x8d700f*/
  v20 = a1[0x26].m128_i32[2]; /*0x8d701b*/
  v60[0] = a1[0x26].m128_i32[1]; /*0x8d7021*/
  v21 = *((_DWORD *)a2 + 2); /*0x8d7028*/
  v22 = *((_DWORD *)a2 + 3); /*0x8d702b*/
  v60[1] = v20; /*0x8d702e*/
  v23 = a1[0x27].m128_i32[0]; /*0x8d7032*/
  v60[3] = v22; /*0x8d7038*/
  v24 = ThreadLocalStoragePointer[v3]; /*0x8d703c*/
  v60[2] = v21; /*0x8d703f*/
  v25 = *(_DWORD *)(v24 + 0x1A4); /*0x8d7043*/
  v60[4] = v23; /*0x8d7049*/
  if ( v25 < *(_DWORD *)(v24 + 0x1A8) ) /*0x8d7053*/
  {
    v26 = *(_DWORD **)(v24 + 0x1A4); /*0x8d7055*/
    *v26 = "StIntegrate"; /*0x8d705b*/
    v27 = __rdtsc(); /*0x8d7061*/
    v26[1] = v27; /*0x8d706b*/
    *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x1A4) = v26 + 3; /*0x8d7074*/
  }
  v28 = a1[3].m128_i32[3] - 1; /*0x8d707d*/
  v58 = v28; /*0x8d707e*/
  if ( v28 >= 0 ) /*0x8d7082*/
  {
    while ( 1 ) /*0x8d7093*/
    {
      v29 = *(_DWORD **)(a1[3].m128_i32[2] + 4 * v28); /*0x8d7093*/
      v59 = v29; /*0x8d709b*/
      if ( v29[3] ) /*0x8d7096*/
      {
        sub_924000((int)&a1[0x16], a1 + 0x17, v60, v29, v29[0xD], v29[0xE]); /*0x8d71c3*/
      }
      else
      {
        v30 = ThreadLocalStoragePointer[v3]; /*0x8d70a5*/
        if ( *(_DWORD *)(v30 + 0x1A4) < *(_DWORD *)(v30 + 0x1A8) ) /*0x8d70b4*/
        {
          v55 = ThreadLocalStoragePointer[v3]; /*0x8d70b8*/
          v31 = *(_DWORD **)(v30 + 0x1A4); /*0x8d70bc*/
          *v31 = "TtSingleObj"; /*0x8d70c2*/
          v32 = __rdtsc(); /*0x8d70c8*/
          v31[1] = v32; /*0x8d70d6*/
          *(_DWORD *)(v55 + 0x1A4) = v31 + 3; /*0x8d70dc*/
        }
        for ( i = v29[0xE] - 1; i >= 0; --i ) /*0x8d70e6*/
        {
          v34 = *(_DWORD *)(*(_DWORD *)(v59[0xD] + 4 * i) + 0x50); /*0x8d70fc*/
          (*(void (__thiscall **)(int, __m128 *, __m128 *))(*(_DWORD *)v34 + 0x10))(v34, a1 + 0x16, a1 + 0x19); /*0x8d710d*/
        }
        if ( *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] /*0x8d7128*/
                                                                                          + 0x1A8) )
        {
          v35 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d712f*/
          v36 = *(_DWORD **)(v35 + 0x1A4); /*0x8d7132*/
          *v36 = "Et"; /*0x8d7138*/
          v37 = __rdtsc(); /*0x8d713e*/
          v36[1] = v37; /*0x8d7148*/
          *(_DWORD *)(v35 + 0x1A4) = v36 + 3; /*0x8d714e*/
        }
        v3 = MEMORY[0xBA9DE4]; /*0x8d7154*/
      }
      if ( a1[0x13].m128_i32[1] ) /*0x8d715a*/
      {
        v38 = ThreadLocalStoragePointer[v3]; /*0x8d7168*/
        if ( *(_DWORD *)(v38 + 0x1A4) < *(_DWORD *)(v38 + 0x1A8) ) /*0x8d7177*/
        {
          v39 = *(_DWORD **)(v38 + 0x1A4); /*0x8d7179*/
          *v39 = "StPostIntegrateCb"; /*0x8d717f*/
          v40 = __rdtsc(); /*0x8d7185*/
          v39[1] = v40; /*0x8d718f*/
          *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x1A4) = v39 + 3; /*0x8d7198*/
        }
        v41 = a1[3].m128_i32[3] - 1; /*0x8d71a1*/
        v56 = v41; /*0x8d71a2*/
        if ( v41 >= 0 ) /*0x8d71a6*/
        {
          while ( 1 ) /*0x8d71db*/
          {
            v54 = *(_DWORD *)(a1[3].m128_i32[2] + 4 * v41); /*0x8d71db*/
            sub_8DCF10(v54, (int)a1, v54, (int)a2); /*0x8d71dd*/
            if ( --v56 < 0 ) /*0x8d71ee*/
              break; /*0x8d71ee*/
            v41 = v56; /*0x8d71cd*/
          }
        }
      }
      if ( --v58 < 0 ) /*0x8d71f4*/
        break; /*0x8d71f4*/
      v28 = v58; /*0x8d708a*/
    }
  }
  if ( a1[8].m128_i32[2]-- == 1 ) /*0x8d71fa*/
  {
    if ( a1[8].m128_i32[1] ) /*0x8d7202*/
    {
      if ( !a1[9].m128_i8[0] ) /*0x8d720c*/
        sub_899210((int)a1); /*0x8d7218*/
    }
  }
  if ( a1[0x11].m128_i32[3] ) /*0x8d721d*/
  {
    v43 = ThreadLocalStoragePointer[v3]; /*0x8d722b*/
    if ( *(_DWORD *)(v43 + 0x1A4) < *(_DWORD *)(v43 + 0x1A8) ) /*0x8d723a*/
    {
      v44 = *(_DWORD **)(v43 + 0x1A4); /*0x8d723c*/
      *v44 = "TtPostIntegrateCb"; /*0x8d7242*/
      v45 = __rdtsc(); /*0x8d7248*/
      HIDWORD(v45) = v45; /*0x8d724e*/
      LODWORD(v45) = ThreadLocalStoragePointer[v3]; /*0x8d7252*/
      v44[1] = HIDWORD(v45); /*0x8d7255*/
      *(_DWORD *)(v45 + 0x1A4) = v44 + 3; /*0x8d725b*/
    }
    sub_8DCDF0((int)a2, (int)a1, (int)a2); /*0x8d7266*/
    v46 = ThreadLocalStoragePointer[v3]; /*0x8d726b*/
    if ( *(_DWORD *)(v46 + 0x1A4) < *(_DWORD *)(v46 + 0x1A8) ) /*0x8d727f*/
    {
      v47 = ThreadLocalStoragePointer[v3]; /*0x8d7281*/
      v48 = *(_DWORD **)(v46 + 0x1A4); /*0x8d7283*/
      *v48 = "Et"; /*0x8d7289*/
      v49 = __rdtsc(); /*0x8d728f*/
      v48[1] = v49; /*0x8d7299*/
      *(_DWORD *)(v47 + 0x1A4) = v48 + 3; /*0x8d729f*/
    }
  }
  LODWORD(v50) = ThreadLocalStoragePointer[v3]; /*0x8d72a5*/
  if ( *(_DWORD *)(v50 + 0x1A4) < *(_DWORD *)(v50 + 0x1A8) ) /*0x8d72b4*/
  {
    v51 = ThreadLocalStoragePointer[v3]; /*0x8d72b6*/
    v52 = *(_DWORD **)(v50 + 0x1A4); /*0x8d72b8*/
    *v52 = "lt"; /*0x8d72be*/
    v50 = __rdtsc(); /*0x8d72c4*/
    v52[1] = v50; /*0x8d72ce*/
    *(_DWORD *)(v51 + 0x1A4) = v52 + 3; /*0x8d72d4*/
  }
  return v50; /*0x8d72da*/
}
