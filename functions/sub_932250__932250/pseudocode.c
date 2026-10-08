signed int __cdecl sub_932250(int a1, int *a2, int *a3, int *a4)
{
  int *v4; // ebx
  int v5; // edi
  int v6; // edi
  float v7; // edx
  int v8; // ecx
  int v9; // eax
  double v10; // st7
  _DWORD *v11; // ecx
  int *v12; // esi
  bool v13; // cc
  unsigned __int16 **v14; // esi
  __m128 *v15; // edi
  unsigned __int16 *v16; // eax
  float *v17; // ebx
  float *v18; // eax
  float *v19; // ecx
  float *v20; // edx
  double v21; // st7
  __m128 v22; // xmm0
  double v23; // st7
  __m128 v24; // xmm3
  float v25; // xmm5_4
  __m128 v26; // xmm0
  __m128 v27; // xmm1
  __m128 v28; // xmm0
  float v29; // xmm4_4
  float v30; // xmm6_4
  __m128 v31; // xmm0
  __m128 v32; // xmm4
  __m128 v33; // xmm5
  __m128 v34; // xmm0
  __m128 v35; // xmm1
  __m128 v36; // xmm0
  float v37; // xmm7_4
  __m128 v38; // xmm0
  __m128 v39; // xmm1
  __m128 v40; // xmm4
  __m128 v41; // xmm0
  float v42; // xmm0_4
  float v43; // xmm1_4
  float v44; // xmm7_4
  __m128 v45; // xmm0
  __m128 v46; // xmm1
  float v47; // xmm5_4
  __m128 v48; // xmm0
  __m128 v49; // xmm1
  __m128 v50; // xmm1
  int v51; // eax
  int v52; // edi
  int v53; // esi
  int v54; // ecx
  int v55; // eax
  int v56; // eax
  _DWORD *v57; // ecx
  bool v58; // zf
  int v59; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  __int16 v62; // [esp-14h] [ebp-E64h]
  unsigned __int16 *v63; // [esp-10h] [ebp-E60h]
  const void **v64; // [esp+18h] [ebp-E38h]
  int *v65; // [esp+1Ch] [ebp-E34h]
  __m128 v66; // [esp+20h] [ebp-E30h]
  __m128 v67; // [esp+20h] [ebp-E30h]
  __m128 v68; // [esp+20h] [ebp-E30h]
  __m128 v69; // [esp+20h] [ebp-E30h]
  float v70; // [esp+30h] [ebp-E20h]
  float v71; // [esp+30h] [ebp-E20h]
  float v72; // [esp+30h] [ebp-E20h]
  float v73; // [esp+30h] [ebp-E20h]
  float v74; // [esp+30h] [ebp-E20h]
  int v75; // [esp+4Ch] [ebp-E04h]
  int v76; // [esp+50h] [ebp-E00h]
  int v77; // [esp+54h] [ebp-DFCh]
  int v78; // [esp+58h] [ebp-DF8h]
  char v79; // [esp+5Fh] [ebp-DF1h] BYREF
  __m128 v80; // [esp+60h] [ebp-DF0h]
  int v81; // [esp+74h] [ebp-DDCh]
  float v82; // [esp+78h] [ebp-DD8h]
  float v83; // [esp+7Ch] [ebp-DD4h]
  float v84; // [esp+80h] [ebp-DD0h]
  float v85; // [esp+84h] [ebp-DCCh]
  int v86; // [esp+88h] [ebp-DC8h]
  float v87; // [esp+8Ch] [ebp-DC4h]
  float v88; // [esp+90h] [ebp-DC0h]
  float v89[3]; // [esp+94h] [ebp-DBCh] BYREF
  __m128 v90; // [esp+A0h] [ebp-DB0h] BYREF
  __m128 v91; // [esp+B0h] [ebp-DA0h]
  __m128 v92; // [esp+C0h] [ebp-D90h]
  __m128 v93; // [esp+D0h] [ebp-D80h]
  _DWORD *v94[2]; // [esp+E0h] [ebp-D70h] BYREF
  int v95; // [esp+E8h] [ebp-D68h]
  int v96[4]; // [esp+ECh] [ebp-D64h] BYREF
  _DWORD v97[5]; // [esp+FCh] [ebp-D54h] BYREF
  char *v98; // [esp+110h] [ebp-D40h] BYREF
  int v99; // [esp+114h] [ebp-D3Ch]
  int v100; // [esp+118h] [ebp-D38h]
  char v101; // [esp+11Ch] [ebp-D34h] BYREF
  int v102[2]; // [esp+220h] [ebp-C30h] BYREF
  int v103; // [esp+228h] [ebp-C28h]
  char v104; // [esp+22Ch] [ebp-C24h] BYREF
  float *v105[2]; // [esp+430h] [ebp-A20h] BYREF
  int v106; // [esp+438h] [ebp-A18h]
  char v107; // [esp+43Ch] [ebp-A14h] BYREF
  char *v108; // [esp+640h] [ebp-810h] BYREF
  int v109; // [esp+644h] [ebp-80Ch]
  int v110; // [esp+648h] [ebp-808h]
  char v111; // [esp+64Ch] [ebp-804h] BYREF

  v4 = a2; /*0x932260*/
  *a4 = *a2; /*0x93226f*/
  if ( *sub_92CE60(&v79, *(float *)(a1 + 8), a2, (int)a3, a4) ) /*0x932280*/
    return 0; /*0x932287*/
  v76 = *a2; /*0x93229e*/
  v94[0] = v96; /*0x9322a7*/
  v95 = 0x80000001; /*0x9322ae*/
  v94[1] = (_DWORD *)1; /*0x9322b9*/
  sub_92D6D0(a2, (int)a3, v96, &v90); /*0x9322c4*/
  v5 = a3[2]; /*0x9322d7*/
  v91.m128_u64[0] = v90.m128_u64[0]; /*0x9322e1*/
  v6 = a2[2] + v5 + 2; /*0x932307*/
  v7 = *(float *)(a1 + 0x20); /*0x93230b*/
  v98 = &v101; /*0x93230e*/
  v89[0] = v7; /*0x93231e*/
  v91.m128_u64[1] = v90.m128_u64[1]; /*0x932328*/
  v99 = 0; /*0x93232f*/
  v108 = &v111; /*0x932336*/
  v109 = 0; /*0x93233d*/
  v8 = 0x80000040; /*0x932349*/
  v9 = 0x80000080; /*0x93234e*/
  v100 = 0x80000040; /*0x93235a*/
  v81 = v6; /*0x932361*/
  LODWORD(v89[2]) = 3 * v6; /*0x932365*/
  v110 = 0x80000080; /*0x93236c*/
  v65 = (int *)v94; /*0x932373*/
  v77 = 0; /*0x932377*/
  if ( 3 * v6 > 0 ) /*0x93237f*/
  {
    v78 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x932394*/
    while ( 1 ) /*0x932398*/
    {
      if ( v77 > v6 ) /*0x93239c*/
      {
        v10 = v89[0] * flt_A56E28; /*0x9323a5*/
        v89[0] = v10; /*0x9323ab*/
        if ( v10 > fConstant_1 ) /*0x9323bd*/
          v81 = ++v6; /*0x9323c0*/
      }
      v11 = *(_DWORD **)(v78 + 0x19C); /*0x9323c8*/
      v12 = (int *)v11[8]; /*0x9323ce*/
      if ( (unsigned int)(v12 + 0x54) > v11[0xB] ) /*0x9323dc*/
      {
        v64 = (const void **)(*(int (__thiscall **)(_DWORD *, int))(*v11 + 0xC))(v11, 0x150); /*0x9323f1*/
        v12 = (int *)v64; /*0x9323f5*/
      }
      else
      {
        v11[8] = v12 + 0x54; /*0x9323de*/
        v64 = (const void **)v12; /*0x9323e1*/
      }
      if ( v12 ) /*0x9323fb*/
      {
        *v12 = (int)(v12 + 3); /*0x932400*/
        v12[1] = 0; /*0x932402*/
        v12[2] = 0x80000010; /*0x932405*/
      }
      if ( v99 == (v100 & 0x3FFFFFFF) ) /*0x932422*/
        sub_8A6EE0((const void **)&v98, 4); /*0x93242e*/
      *(_DWORD *)&v98[4 * v99++] = v12; /*0x932446*/
      v13 = v65[1] <= 0; /*0x932454*/
      v82 = 0.0; /*0x932457*/
      if ( !v13 ) /*0x93245b*/
      {
        v75 = 0; /*0x932461*/
        do /*0x932af3*/
        {
          v14 = (unsigned __int16 **)(v75 + *v65); /*0x932473*/
          v105[0] = (float *)&v107; /*0x93247c*/
          v105[1] = 0; /*0x932483*/
          v106 = 0x80000040; /*0x93248f*/
          v102[1] = 0; /*0x932496*/
          v103 = 0x80000040; /*0x93249d*/
          v102[0] = (int)&v104; /*0x9324ab*/
          v15 = (__m128 *)(v76 + 0x10 * **v14); /*0x9324c1*/
          v16 = v14[2]; /*0x9324c6*/
          v17 = (float *)(v76 + 0x10 * *v14[1]); /*0x9324cc*/
          if ( v16 ) /*0x9324d0*/
          {
            v18 = (float *)(v76 + 0x10 * **(unsigned __int16 **)v16); /*0x9324e9*/
            v19 = (float *)(v76 + 0x10 * **((unsigned __int16 **)v14[2] + 1)); /*0x9324eb*/
            v20 = (float *)(v76 + 0x10 * *v14[1]); /*0x9324ef*/
            if ( v18 != (float *)v15 ) /*0x9324f1*/
              v20 = (float *)(v76 + 0x10 * **v14); /*0x9324f3*/
            v21 = *v19; /*0x9324f5*/
            v87 = 3.0; /*0x9324f7*/
            v80.m128_f32[0] = v21 - *v18; /*0x932504*/
            v80.m128_f32[1] = v19[1] - v18[1]; /*0x93250e*/
            v80.m128_f32[2] = v19[2] - v18[2]; /*0x932518*/
            v80.m128_f32[3] = v19[3] - v18[3]; /*0x932522*/
            v22 = _mm_mul_ps(v80, v80); /*0x932532*/
            v66.m128_f32[0] = *v20 - *v18; /*0x932540*/
            v22.m128_f32[0] = _mm_shuffle_ps(v22, v22, 0xAA).m128_f32[0] /*0x93255d*/
                            + (float)(_mm_shuffle_ps(v22, v22, 0x55).m128_f32[0] + v22.m128_f32[0]);
            v66.m128_f32[1] = v20[1] - v18[1]; /*0x932561*/
            v70 = 1.0 / fsqrt(v22.m128_f32[0]); /*0x932574*/
            v66.m128_f32[2] = v20[2] - v18[2]; /*0x932583*/
            v23 = v20[3] - v18[3]; /*0x93258e*/
            v86 = 0x3F000000; /*0x932591*/
            v24 = (__m128)0x3F000000u; /*0x93259c*/
            v25 = 3.0 - (float)((float)(v22.m128_f32[0] * v70) * v70); /*0x9325a8*/
            v66.m128_f32[3] = v23; /*0x9325ac*/
            v26 = (__m128)0x3F000000u; /*0x9325b0*/
            v26.m128_f32[0] = (float)(0.5 * v70) * v25; /*0x9325b7*/
            v27 = _mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v80); /*0x9325c7*/
            v28 = _mm_mul_ps(v66, v66); /*0x9325cd*/
            v29 = _mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0]; /*0x9325d7*/
            v30 = _mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0]; /*0x9325de*/
            v71 = 1.0 / fsqrt(v30 + v29); /*0x9325f2*/
            v31 = (__m128)0x3F000000u; /*0x93260c*/
            v31.m128_f32[0] = (float)(0.5 * v71) * (float)(3.0 - (float)((float)((float)(v30 + v29) * v71) * v71)); /*0x932613*/
            v80 = v27; /*0x932627*/
            v67 = _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v66); /*0x93262c*/
            v32 = _mm_shuffle_ps(v27, v27, 0xD2); /*0x932631*/
            v33 = _mm_shuffle_ps(v27, v27, 0xC9); /*0x932638*/
            v34 = _mm_sub_ps( /*0x932656*/
                    _mm_mul_ps(v33, _mm_shuffle_ps(v67, v67, 0xD2)),
                    _mm_mul_ps(v32, _mm_shuffle_ps(v67, v67, 0xC9)));
            v35 = _mm_mul_ps(v34, v34); /*0x93265c*/
            v88 = _mm_shuffle_ps(v35, v35, 0xAA).m128_f32[0] /*0x93267c*/
                + (float)(_mm_shuffle_ps(v35, v35, 0x55).m128_f32[0] + v35.m128_f32[0]);
            if ( v88 < (double)flt_A372CC ) /*0x932692*/
            {
              v68.m128_f32[0] = *v20 - *v19; /*0x93269c*/
              v68.m128_f32[1] = v20[1] - v19[1]; /*0x9326a6*/
              v68.m128_f32[2] = v20[2] - v19[2]; /*0x9326b0*/
              v68.m128_f32[3] = v20[3] - v19[3]; /*0x9326c1*/
              v36 = _mm_mul_ps(v68, v68); /*0x9326cd*/
              v36.m128_f32[0] = _mm_shuffle_ps(v36, v36, 0xAA).m128_f32[0] /*0x9326e5*/
                              + (float)(_mm_shuffle_ps(v36, v36, 0x55).m128_f32[0] + v36.m128_f32[0]);
              v72 = 1.0 / fsqrt(v36.m128_f32[0]); /*0x9326f2*/
              v37 = 3.0 - (float)((float)(v36.m128_f32[0] * v72) * v72); /*0x932708*/
              v38 = (__m128)0x3F000000u; /*0x93270c*/
              v38.m128_f32[0] = (float)(0.5 * v72) * v37; /*0x932713*/
              v69 = _mm_mul_ps(_mm_shuffle_ps(v38, v38, 0), v68); /*0x932738*/
              v34 = _mm_sub_ps( /*0x932740*/
                      _mm_mul_ps(v33, _mm_shuffle_ps(v69, v69, 0xD2)),
                      _mm_mul_ps(v32, _mm_shuffle_ps(v69, v69, 0xC9)));
              v39 = _mm_mul_ps(v34, v34); /*0x932746*/
              v84 = _mm_shuffle_ps(v39, v39, 0xAA).m128_f32[0] /*0x93275f*/
                  + (float)(_mm_shuffle_ps(v39, v39, 0x55).m128_f32[0] + v39.m128_f32[0]);
              if ( v84 < (double)flt_A372CC ) /*0x932775*/
              {
                v92.m128_f32[0] = v69.m128_f32[0] + v80.m128_f32[0]; /*0x93278a*/
                v92.m128_f32[1] = v69.m128_f32[1] + v80.m128_f32[1]; /*0x932799*/
                v92.m128_f32[2] = v69.m128_f32[2] + v80.m128_f32[2]; /*0x9327a8*/
                v92.m128_f32[3] = v69.m128_f32[3] + v80.m128_f32[3]; /*0x9327b7*/
                v93.m128_f32[0] = v80.m128_f32[0] - v69.m128_f32[0]; /*0x9327c6*/
                v93.m128_f32[1] = v80.m128_f32[1] - v69.m128_f32[1]; /*0x9327d5*/
                v93.m128_f32[2] = v80.m128_f32[2] - v69.m128_f32[2]; /*0x9327e4*/
                v93.m128_f32[3] = v80.m128_f32[3] - v69.m128_f32[3]; /*0x9327f3*/
                v40 = _mm_mul_ps(v93, v93); /*0x932805*/
                v85 = _mm_shuffle_ps(v40, v40, 0xAA).m128_f32[0] /*0x93281e*/
                    + (float)(_mm_shuffle_ps(v40, v40, 0x55).m128_f32[0] + v40.m128_f32[0]);
                if ( v85 < (double)flt_A372CC /*0x932875*/
                  || (v41 = _mm_mul_ps(v92, v92),
                      v83 = _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0]),
                      v83 < (double)flt_A372CC) )
                {
                  v34 = v91; /*0x93295a*/
                }
                else
                {
                  v42 = _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0] /*0x932890*/
                      + (float)(_mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0]);
                  v43 = 1.0 / fsqrt(v42); /*0x9328a3*/
                  v44 = 3.0 - (float)((float)(v42 * v43) * v43); /*0x9328b3*/
                  v45 = (__m128)0x3F000000u; /*0x9328b7*/
                  v45.m128_f32[0] = (float)(0.5 * v43) * v44; /*0x9328be*/
                  v46 = _mm_mul_ps(_mm_shuffle_ps(v45, v45, 0), v92); /*0x9328c9*/
                  v45.m128_f32[0] = _mm_shuffle_ps(v40, v40, 0xAA).m128_f32[0] /*0x9328e1*/
                                  + (float)(_mm_shuffle_ps(v40, v40, 0x55).m128_f32[0] + v40.m128_f32[0]);
                  v73 = 1.0 / fsqrt(v45.m128_f32[0]); /*0x9328ee*/
                  v47 = 3.0 - (float)((float)(v45.m128_f32[0] * v73) * v73); /*0x932904*/
                  v48 = (__m128)0x3F000000u; /*0x932908*/
                  v48.m128_f32[0] = (float)(0.5 * v73) * v47; /*0x93290f*/
                  v92 = v46; /*0x932938*/
                  v93 = _mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v93); /*0x932943*/
                  v34 = _mm_sub_ps( /*0x932955*/
                          _mm_mul_ps(_mm_shuffle_ps(v93, v93, 0xC9), _mm_shuffle_ps(v46, v46, 0xD2)),
                          _mm_mul_ps(_mm_shuffle_ps(v93, v93, 0xD2), _mm_shuffle_ps(v46, v46, 0xC9)));
                }
              }
            }
            v49 = _mm_mul_ps(v34, v34); /*0x932965*/
            v49.m128_f32[0] = _mm_shuffle_ps(v49, v49, 0xAA).m128_f32[0] /*0x93297d*/
                            + (float)(_mm_shuffle_ps(v49, v49, 0x55).m128_f32[0] + v49.m128_f32[0]);
            v74 = 1.0 / fsqrt(v49.m128_f32[0]); /*0x93298a*/
            v24.m128_f32[0] = (float)(0.5 * v74) * (float)(3.0 - (float)((float)(v49.m128_f32[0] * v74) * v74)); /*0x9329a5*/
            v50 = _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), v34); /*0x9329b0*/
          }
          else
          {
            v50 = v90; /*0x9329b5*/
          }
          v63 = *v14; /*0x9329d2*/
          v62 = *((_WORD *)v14 + 6); /*0x9329d3*/
          *(__m128 *)&v97[1] = v50; /*0x9329e1*/
          v91 = v50; /*0x9329e9*/
          sub_931FD0(a1, a2, (__m128 *)&v97[1], v62, v63, v15, v17, (int)v105); /*0x9329f1*/
          sub_931FD0(a1, a3, (__m128 *)&v97[1], *((_WORD *)v14 + 6), v14[1], v15, v17, (int)v102); /*0x932a1b*/
          sub_9313E0(a1, *a3, (int)&v97[1], *((_WORD *)v14 + 6), (int)v14, v15, v17, v105, (float **)v102); /*0x932a4f*/
          sub_92EF10(v89, (float *)v14, v105, v102, v64); /*0x932a72*/
          if ( v103 >= 0 ) /*0x932a83*/
            sub_8A75D0(*(_DWORD *)(v78 + 0x19C), (_DWORD *)v102[0], 8 * v103, 0x14); /*0x932aa2*/
          if ( v106 >= 0 ) /*0x932ab0*/
            sub_8A75D0(*(_DWORD *)(v78 + 0x19C), v105[0], 8 * v106, 0x14); /*0x932acf*/
          v13 = ++LODWORD(v82) < v65[1]; /*0x932ae9*/
          v75 += 0x14; /*0x932aef*/
        }
        while ( v13 ); /*0x932af3*/
        v6 = v81; /*0x932af9*/
        v4 = a2; /*0x932afd*/
        v12 = (int *)v64; /*0x932b00*/
      }
      v51 = v12[1]; /*0x932b04*/
      v65 = v12; /*0x932b0a*/
      if ( v51 > 1 ) /*0x932b0e*/
        sub_92CAB0(*v12, 0, v51 - 1, (int (__cdecl *)(char *, int, int *))sub_92CA80); /*0x932b1b*/
      sub_9320F0((int)v4, (int)a3, v12, (const void **)&v108); /*0x932b31*/
      if ( v109 ) /*0x932b42*/
        break; /*0x932b42*/
      ++v77; /*0x932b44*/
    }
    v8 = v100; /*0x932b4d*/
    v9 = v110; /*0x932b54*/
  }
  v52 = v99 - 1; /*0x932b62*/
  if ( v99 - 1 >= 0 ) /*0x932b63*/
  {
    v53 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x932b71*/
    do /*0x932bcc*/
    {
      v54 = *(_DWORD *)&v98[4 * v52]; /*0x932b87*/
      v55 = *(_DWORD *)(v54 + 8); /*0x932b8a*/
      if ( v55 >= 0 ) /*0x932b8f*/
        sub_8A75D0(*(_DWORD *)(v53 + 0x19C), *(_DWORD **)v54, 0x14 * (v55 & 0x3FFFFFFF), 0x14); /*0x932ba8*/
      v56 = *(_DWORD *)&v98[4 * v52]; /*0x932bb4*/
      v57 = *(_DWORD **)(v53 + 0x19C); /*0x932bb7*/
      v58 = v56 == v57[0xA]; /*0x932bbd*/
      v57[8] = v56; /*0x932bc0*/
      if ( v58 ) /*0x932bc3*/
        (*(void (__thiscall **)(_DWORD *, int))(*v57 + 0x10))(v57, v56); /*0x932bc8*/
      --v52; /*0x932bcb*/
    }
    while ( v52 >= 0 ); /*0x932bcc*/
    v8 = v100; /*0x932bce*/
    v9 = v110; /*0x932bd5*/
  }
  v99 = 0; /*0x932be5*/
  if ( v109 ) /*0x932bf0*/
  {
    sub_931B80((int)v4, (int)a3, &v108, (const void **)a4); /*0x932c07*/
    v59 = MEMORY[0xBA9DE4]; /*0x932c13*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x932c19*/
    if ( v110 >= 0 ) /*0x932c25*/
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v59] + 0x19C), v108, 0x10 * v110, 0x14); /*0x932c43*/
    if ( v100 >= 0 ) /*0x932c51*/
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v59] + 0x19C), v98, 4 * v100, 0x14); /*0x932c6f*/
    if ( v95 >= 0 ) /*0x932c7d*/
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v59] + 0x19C), v94[0], 0x14 * (v95 & 0x3FFFFFFF), 0x14); /*0x932c9e*/
    return 0; /*0x932cab*/
  }
  if ( v9 >= 0 ) /*0x932cae*/
  {
    sub_8A75D0( /*0x932cd8*/
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
      v108,
      0x10 * v9,
      0x14);
    v8 = v100; /*0x932cdd*/
  }
  if ( v8 >= 0 ) /*0x932ce6*/
    sub_8A75D0( /*0x932d11*/
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
      v98,
      4 * v8,
      0x14);
  if ( v95 >= 0 ) /*0x932d1f*/
    sub_8A75D0( /*0x932d4c*/
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
      v94[0],
      0x14 * (v95 & 0x3FFFFFFF),
      0x14);
  return 1; /*0x932ca5*/
}
