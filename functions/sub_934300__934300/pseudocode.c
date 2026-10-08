unsigned int __cdecl sub_934300(int **a1, int a2, int *a3)
{
  _DWORD *v3; // ebx
  __m128 **v4; // eax
  __m128 *v5; // edi
  unsigned int v6; // eax
  __m128 **v7; // edx
  __m128 *v8; // ecx
  float v9; // eax
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  __m128 v16; // xmm2
  double v17; // st7
  double v18; // st7
  int v19; // edi
  int v20; // eax
  int v21; // edi
  int *v22; // ecx
  int *v23; // eax
  __int16 v24; // ax
  bool v25; // cf
  int v26; // edi
  int v27; // eax
  int v28; // edi
  _DWORD *v29; // ecx
  unsigned __int64 v30; // rax
  double v31; // st7
  int v32; // edx
  int v33; // edi
  int k; // ecx
  __m128 v35; // xmm0
  int v36; // edi
  int *v37; // ecx
  int v38; // ecx
  _DWORD *ThreadLocalStoragePointer; // edx
  int v40; // edx
  _DWORD *v41; // edi
  unsigned __int64 v42; // rax
  __int16 *v43; // edi
  int v44; // eax
  int *v45; // ecx
  int v46; // eax
  _DWORD *v47; // edi
  int v48; // ecx
  unsigned int result; // eax
  int v50; // edx
  int v51; // ebx
  int v52; // ecx
  int v53; // eax
  _BYTE *v54; // edx
  int v55; // ecx
  int *v56; // [esp+18h] [ebp-878h]
  int v57; // [esp+1Ch] [ebp-874h]
  __m128 **v58; // [esp+38h] [ebp-858h]
  int v59; // [esp+38h] [ebp-858h]
  int *v60; // [esp+38h] [ebp-858h]
  int v61; // [esp+38h] [ebp-858h]
  int v62; // [esp+3Ch] [ebp-854h]
  float v63; // [esp+40h] [ebp-850h]
  int v64; // [esp+40h] [ebp-850h]
  int v65; // [esp+40h] [ebp-850h]
  int v66; // [esp+40h] [ebp-850h]
  char v67; // [esp+44h] [ebp-84Ch]
  float v68; // [esp+44h] [ebp-84Ch]
  int v69; // [esp+44h] [ebp-84Ch]
  int v70; // [esp+48h] [ebp-848h]
  __int16 *v71; // [esp+48h] [ebp-848h]
  int v72; // [esp+4Ch] [ebp-844h]
  int v73; // [esp+4Ch] [ebp-844h]
  int v74; // [esp+4Ch] [ebp-844h]
  int v75; // [esp+4Ch] [ebp-844h]
  int *v76; // [esp+50h] [ebp-840h]
  __int16 *v77; // [esp+50h] [ebp-840h]
  int i; // [esp+54h] [ebp-83Ch]
  int j; // [esp+54h] [ebp-83Ch]
  int *v80; // [esp+58h] [ebp-838h]
  float v81; // [esp+5Ch] [ebp-834h]
  __m128 v82; // [esp+60h] [ebp-830h] BYREF
  int v83; // [esp+7Ch] [ebp-814h] BYREF
  int v84; // [esp+80h] [ebp-810h]
  int v85; // [esp+84h] [ebp-80Ch]
  int *v86; // [esp+88h] [ebp-808h]
  int v87; // [esp+8Ch] [ebp-804h]
  __int16 v88[256]; // [esp+90h] [ebp-800h] BYREF
  _BYTE v89[512]; // [esp+290h] [ebp-600h] BYREF
  __int16 v90[256]; // [esp+490h] [ebp-400h] BYREF
  char v91[512]; // [esp+690h] [ebp-200h] BYREF

  v3 = (_DWORD *)a3[0xC10]; /*0x934310*/
  v62 = 0; /*0x934320*/
  v72 = **a1; /*0x934324*/
  v4 = (__m128 **)(v3 + 0x102); /*0x934328*/
  v70 = 0; /*0x93432e*/
  v58 = (__m128 **)(v3 + 0x102); /*0x934335*/
  if ( (unsigned int)(v3 + 0x102) < *v3 ) /*0x934339*/
  {
    v76 = v3 + 0x102; /*0x93433f*/
    while ( 1 ) /*0x934350*/
    {
      v5 = *v4; /*0x934350*/
      v6 = v3[1]; /*0x934352*/
      v7 = (__m128 **)(v3 + 2); /*0x934359*/
      v90[v70] = 0xFFFF; /*0x93435e*/
      v67 = 0; /*0x934368*/
      if ( (unsigned int)(v3 + 2) < v6 ) /*0x93436d*/
      {
        do /*0x9344c0*/
        {
          v8 = *v7; /*0x934373*/
          if ( v5 != *v7 ) /*0x934377*/
          {
            v9 = *(float *)(v72 + 0xC); /*0x93438f*/
            v10 = _mm_sub_ps(*v8, *v5); /*0x934392*/
            v11 = _mm_mul_ps(v5[1], v10); /*0x934398*/
            v12 = _mm_mul_ps(v5[1], v8[1]); /*0x93439b*/
            v13 = _mm_mul_ps(v8[1], v10); /*0x9343a1*/
            v14 = _mm_shuffle_ps(v12, v12, 0x44); /*0x9343b1*/
            v15 = _mm_shuffle_ps(v12, v12, 0xEE); /*0x9343b5*/
            v16 = _mm_shuffle_ps(v11, v13, 0x44); /*0x9343b9*/
            v82 = _mm_add_ps( /*0x9343d2*/
                    _mm_add_ps(_mm_shuffle_ps(v16, v14, 0x88), _mm_shuffle_ps(v16, v14, 0xDD)),
                    _mm_shuffle_ps(_mm_shuffle_ps(v11, v13, 0xEE), v15, 0x88));
            v17 = (v82.m128_f32[2] - fConstant_1) * v9; /*0x9343eb*/
            v63 = v17 - v82.m128_f32[1]; /*0x9343fb*/
            if ( v63 <= (double)v9 && (v82.m128_f32[2] <= (double)flt_AA1C60 || v8[2].m128_i16[0] != (__int16)0xFFFF) ) /*0x934431*/
            {
              if ( v8[2].m128_i16[0] == (__int16)0xFFFF /*0x93447c*/
                && v82.m128_f32[2] < (double)flt_A524B0
                && (v81 = v17 + v82.m128_f32[0], v81 + v63 < kFaceEarNormalMatchRadius)
                && v9 * flt_A53954 > v8[1].m128_f32[3] + v5[1].m128_f32[3] )
              {
                v67 = 1; /*0x9344b3*/
              }
              else
              {
                v18 = *(float *)&SrcStr; /*0x934484*/
                if ( v8[2].m128_i16[0] != (__int16)0xFFFF ) /*0x93448a*/
                  v18 = *(float *)a1[2][0xA] * flt_A43328; /*0x934494*/
                if ( v5[1].m128_f32[3] > v8[1].m128_f32[3] - v18 ) /*0x9344ab*/
                  goto LABEL_23; /*0x9344ab*/
              }
            }
          }
          ++v7; /*0x9344bb*/
        }
        while ( (unsigned int)v7 < v3[1] ); /*0x9344c0*/
        if ( v67 ) /*0x9344cc*/
          v88[v62++] = v70; /*0x9344d7*/
      }
      v19 = v76[1]; /*0x9344e5*/
      v20 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)a2 + 0x28))(a2, *(_DWORD *)(v19 + 8), v89); /*0x9344f9*/
      v86 = a1[1]; /*0x9344ff*/
      v85 = v86[2]; /*0x934506*/
      v21 = *(_DWORD *)(v19 + 8); /*0x93450a*/
      v22 = a1[3]; /*0x93450d*/
      v83 = v20; /*0x934510*/
      v57 = *v76; /*0x93451a*/
      v56 = a1[2]; /*0x93451e*/
      v23 = *a1; /*0x934524*/
      v84 = v21; /*0x934526*/
      v24 = (*(int (__thiscall **)(int *, int *, int *, int *, int))(*v22 + 8))(v22, v23, &v83, v56, v57); /*0x93452d*/
      v90[v70] = v24; /*0x934538*/
      if ( v24 != (__int16)0xFFFF ) /*0x934540*/
        (*(void (__thiscall **)(int *, unsigned int))(*a1[3] + 0xC))(a1[3], 0xFFFFFFFF); /*0x934549*/
LABEL_23:
      ++v70; /*0x934557*/
      v25 = (unsigned int)(v58 + 3) < *v3; /*0x934565*/
      v76 += 3; /*0x934567*/
      v58 += 3; /*0x93456b*/
      if ( !v25 ) /*0x93456f*/
        break; /*0x93456f*/
      v4 = v58; /*0x934345*/
    }
  }
  v26 = 0; /*0x93457e*/
  for ( i = *a1[2]; v26 < v62; ++v26 ) /*0x934586*/
    (*(void (__cdecl **)(_DWORD, _DWORD, int))(0x34 /*0x9345b7*/
                                             * *(unsigned __int8 *)(v3[3 * (unsigned __int16)v88[v26] + 0x103] + 1)
                                             + i
                                             + 0x16A8))(
      v3[3 * (unsigned __int16)v88[v26] + 0x103],
      v3[3 * (unsigned __int16)v88[v26] + 0x104],
      0xFFFF);
  if ( v62 >= 2 ) /*0x9345cf*/
  {
    v27 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x9345e1*/
    for ( j = v27; ; v27 = j ) /*0x9345e4*/
    {
      if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) ) /*0x9345fc*/
      {
        v28 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x93460a*/
        v29 = *(_DWORD **)(v28 + 0x1A4); /*0x93460d*/
        *v29 = "TtConflicts"; /*0x934613*/
        v30 = __rdtsc(); /*0x934619*/
        v29[1] = v30; /*0x934623*/
        *(_DWORD *)(v28 + 0x1A4) = v29 + 3; /*0x934629*/
      }
      v31 = fConstant_2; /*0x934633*/
      v32 = 0; /*0x934639*/
      v64 = 0; /*0x93463d*/
      v59 = 1; /*0x934641*/
      if ( v62 > 0 ) /*0x934649*/
      {
        do /*0x9346d2*/
        {
          v33 = v32 + 1; /*0x93465e*/
          for ( k = v32 + 1; k < v62; ++k ) /*0x93466a*/
          {
            v35 = _mm_mul_ps( /*0x934685*/
                    *(__m128 *)(v3[3 * (unsigned __int16)v88[v32] + 0x102] + 0x10),
                    *(__m128 *)(v3[3 * (unsigned __int16)v88[k] + 0x102] + 0x10));
            v68 = _mm_shuffle_ps(v35, v35, 0xAA).m128_f32[0] /*0x9346a2*/
                + (float)(_mm_shuffle_ps(v35, v35, 0x55).m128_f32[0] + v35.m128_f32[0]);
            if ( v68 < v31 ) /*0x9346b1*/
            {
              v64 = v32; /*0x9346b5*/
              v31 = v68; /*0x9346b9*/
              v59 = k; /*0x9346bd*/
            }
          }
          ++v32; /*0x9346ce*/
        }
        while ( v33 < v62 ); /*0x9346d2*/
      }
      v71 = &v88[v64]; /*0x9346e2*/
      v77 = &v88[v59]; /*0x9346f7*/
      v80 = &v3[3 * (unsigned __int16)*v71 + 0x102]; /*0x93470d*/
      v60 = &v3[3 * (unsigned __int16)*v77 + 0x102]; /*0x934714*/
      v36 = **a1; /*0x93471a*/
      v73 = v80[1]; /*0x93471c*/
      v65 = v60[1]; /*0x934720*/
      if ( (*(_DWORD *)(*a1[2] + 4 * (*(int (__thiscall **)(int))(*(_DWORD *)v36 + 8))(v36) + 0x10C) & 2) == 0 ) /*0x93473b*/
        break; /*0x93473b*/
      v74 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)a2 + 0x28))(a2, *(_DWORD *)(v73 + 8), v89); /*0x93475d*/
      if ( (*(_DWORD *)(*a1[2] + 4 * (*(int (__thiscall **)(int))(*(_DWORD *)v74 + 8))(v74) + 0x10C) & 2) == 0 ) /*0x934774*/
        break; /*0x934774*/
      v66 = (*(int (__thiscall **)(int, _DWORD, char *))(*(_DWORD *)a2 + 0x28))(a2, *(_DWORD *)(v65 + 8), v91); /*0x934796*/
      if ( (*(_DWORD *)(*a1[2] + 4 * (*(int (__thiscall **)(int))(*(_DWORD *)v66 + 8))(v66) + 0x10C) & 2) == 0 ) /*0x9347ad*/
        break; /*0x9347ad*/
      v82.m128_u64[0] = __PAIR64__(v66, v74); /*0x9347bf*/
      v83 = *v80; /*0x9347cd*/
      v37 = *a1; /*0x9347d8*/
      v84 = *v60; /*0x9347de*/
      sub_952C90((__m128 *)v37[2], v36, &v82, 2, (_OWORD *)a1 + 1, (int)&v83); /*0x9347ee*/
      *v77 = v88[v62 - 1]; /*0x934807*/
      v38 = v62 - 2; /*0x934813*/
      *v71 = v88[v62 - 2]; /*0x934814*/
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x934817*/
      v62 -= 2; /*0x934832*/
      if ( *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] /*0x934836*/
                                                                                        + 0x1A8) )
      {
        v40 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x93483d*/
        v41 = *(_DWORD **)(v40 + 0x1A4); /*0x934840*/
        v75 = v40; /*0x934846*/
        *v41 = "Et"; /*0x93484a*/
        v42 = __rdtsc(); /*0x934850*/
        v87 = v42; /*0x934852*/
        v41[1] = v42; /*0x93485e*/
        *(_DWORD *)(v75 + 0x1A4) = v41 + 3; /*0x934864*/
      }
      if ( v38 < 2 ) /*0x93486d*/
        break; /*0x93486d*/
    }
  }
  if ( v62 ) /*0x934879*/
  {
    v43 = &v90[(unsigned __int16)v88[0]]; /*0x934880*/
    HIWORD(v44) = 0; /*0x934887*/
    if ( *v43 != (__int16)0xFFFF ) /*0x934890*/
    {
      LOWORD(v44) = *v43; /*0x934889*/
      (*(void (__thiscall **)(int *, int))(*a1[3] + 0x10))(a1[3], v44); /*0x934898*/
      v45 = a1[3]; /*0x93489b*/
      v46 = *v45; /*0x93489e*/
      *v43 = 0xFFFF; /*0x9348a2*/
      (*(void (__thiscall **)(int *, int))(v46 + 0xC))(v45, 1); /*0x9348a7*/
    }
  }
  v47 = (_DWORD *)*v3; /*0x9348af*/
  v69 = *a1[2]; /*0x9348b5*/
  v48 = *v3 - (_DWORD)v3 - 0x408; /*0x9348b9*/
  result = (unsigned int)((unsigned __int64)(0x2AAAAAABLL * v48) >> 0x20) >> 0x1F; /*0x9348ca*/
  v50 = v48 / 0xC - 1; /*0x9348cd*/
  v61 = v50; /*0x9348d3*/
  if ( v50 >= 0 ) /*0x9348d7*/
  {
    while ( 1 ) /*0x9348e5*/
    {
      v51 = (unsigned __int16)v90[v50]; /*0x9348e5*/
      v47 += 0xFFFFFFFD; /*0x9348ed*/
      if ( (_WORD)v51 == 0xFFFF ) /*0x9348f5*/
      {
        (*(void (__thiscall **)(int *, unsigned int))(*a1[3] + 0xC))(a1[3], 0xFFFFFFFF); /*0x934924*/
        (*(void (__cdecl **)(_DWORD, _DWORD, int))(0x34 * *(unsigned __int8 *)(v47[1] + 1) + v69 + 0x16A0))( /*0x93493f*/
          v47[1],
          v47[2],
          0xFFFF);
        v52 = *a3 - 0x30; /*0x93494b*/
        *a3 = v52; /*0x93494e*/
        v53 = *v47; /*0x934950*/
        *(_OWORD *)v53 = *(_OWORD *)v52; /*0x934955*/
        *(_OWORD *)(v53 + 0x10) = *(_OWORD *)(v52 + 0x10); /*0x93495c*/
        *(_WORD *)(v53 + 0x20) = *(_WORD *)(v52 + 0x20); /*0x934964*/
        v54 = (_BYTE *)(v53 + 0x22); /*0x93496b*/
        v55 = v52 - v53; /*0x93496e*/
        result = 0xE; /*0x934970*/
        do /*0x93497c*/
        {
          *v54 = v54[v55]; /*0x934978*/
          ++v54; /*0x93497a*/
          --result; /*0x93497b*/
        }
        while ( result ); /*0x93497c*/
      }
      else
      {
        result = (*(int (__cdecl **)(_DWORD, _DWORD, int))(0x34 * *(unsigned __int8 *)(v47[1] + 1) + v69 + 0x16A4))( /*0x93490b*/
                   v47[1],
                   v47[2],
                   v51);
        *(_WORD *)(*v47 + 0x20) = v51; /*0x934917*/
      }
      if ( --v61 < 0 ) /*0x934982*/
        break; /*0x934982*/
      v50 = v61; /*0x9348df*/
    }
  }
  return result; /*0x934988*/
}
