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
  float *v15; // edi
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

  v4 = a2;
  *a4 = *a2;
  if ( *sub_92CE60(&v79, *(float *)(a1 + 8), a2, (int)a3, a4) )
    return 0;
  v76 = *a2;
  v94[0] = v96;
  v95 = 0x80000001;
  v94[1] = (_DWORD *)1;
  sub_92D6D0(a2, (int)a3, v96, &v90);
  v5 = a3[2];
  v91.m128_u64[0] = v90.m128_u64[0];
  v6 = a2[2] + v5 + 2;
  v7 = *(float *)(a1 + 0x20);
  v98 = &v101;
  v89[0] = v7;
  v91.m128_u64[1] = v90.m128_u64[1];
  v99 = 0;
  v108 = &v111;
  v109 = 0;
  v8 = 0x80000040;
  v9 = 0x80000080;
  v100 = 0x80000040;
  v81 = v6;
  LODWORD(v89[2]) = 3 * v6;
  v110 = 0x80000080;
  v65 = (int *)v94;
  v77 = 0;
  if ( 3 * v6 > 0 )
  {
    v78 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
    while ( 1 )
    {
      if ( v77 > v6 )
      {
        v10 = v89[0] * flt_A56E28;
        v89[0] = v10;
        if ( v10 > fConstant_1 )
          v81 = ++v6;
      }
      v11 = *(_DWORD **)(v78 + 0x19C);
      v12 = (int *)v11[8];
      if ( (unsigned int)(v12 + 0x54) > v11[0xB] )
      {
        v64 = (const void **)(*(int (__thiscall **)(_DWORD *, int))(*v11 + 0xC))(v11, 0x150);
        v12 = (int *)v64;
      }
      else
      {
        v11[8] = v12 + 0x54;
        v64 = (const void **)v12;
      }
      if ( v12 )
      {
        *v12 = (int)(v12 + 3);
        v12[1] = 0;
        v12[2] = 0x80000010;
      }
      if ( v99 == (v100 & 0x3FFFFFFF) )
        sub_8A6EE0((const void **)&v98, 4);
      *(_DWORD *)&v98[4 * v99++] = v12;
      v13 = v65[1] <= 0;
      v82 = 0.0;
      if ( !v13 )
      {
        v75 = 0;
        do
        {
          v14 = (unsigned __int16 **)(v75 + *v65);
          v105[0] = (float *)&v107;
          v105[1] = 0;
          v106 = 0x80000040;
          v102[1] = 0;
          v103 = 0x80000040;
          v102[0] = (int)&v104;
          v15 = (float *)(v76 + 0x10 * **v14);
          v16 = v14[2];
          v17 = (float *)(v76 + 0x10 * *v14[1]);
          if ( v16 )
          {
            v18 = (float *)(v76 + 0x10 * **(unsigned __int16 **)v16);
            v19 = (float *)(v76 + 0x10 * **((unsigned __int16 **)v14[2] + 1));
            v20 = (float *)(v76 + 0x10 * *v14[1]);
            if ( v18 != v15 )
              v20 = (float *)(v76 + 0x10 * **v14);
            v21 = *v19;
            v87 = 3.0;
            v80.m128_f32[0] = v21 - *v18;
            v80.m128_f32[1] = v19[1] - v18[1];
            v80.m128_f32[2] = v19[2] - v18[2];
            v80.m128_f32[3] = v19[3] - v18[3];
            v22 = _mm_mul_ps(v80, v80);
            v66.m128_f32[0] = *v20 - *v18;
            v22.m128_f32[0] = _mm_shuffle_ps(v22, v22, 0xAA).m128_f32[0]
                            + (float)(_mm_shuffle_ps(v22, v22, 0x55).m128_f32[0] + v22.m128_f32[0]);
            v66.m128_f32[1] = v20[1] - v18[1];
            v70 = 1.0 / fsqrt(v22.m128_f32[0]);
            v66.m128_f32[2] = v20[2] - v18[2];
            v23 = v20[3] - v18[3];
            v86 = 0x3F000000;
            v24 = (__m128)0x3F000000u;
            v25 = 3.0 - (float)((float)(v22.m128_f32[0] * v70) * v70);
            v66.m128_f32[3] = v23;
            v26 = (__m128)0x3F000000u;
            v26.m128_f32[0] = (float)(0.5 * v70) * v25;
            v27 = _mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v80);
            v28 = _mm_mul_ps(v66, v66);
            v29 = _mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0];
            v30 = _mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0];
            v71 = 1.0 / fsqrt(v30 + v29);
            v31 = (__m128)0x3F000000u;
            v31.m128_f32[0] = (float)(0.5 * v71) * (float)(3.0 - (float)((float)((float)(v30 + v29) * v71) * v71));
            v80 = v27;
            v67 = _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v66);
            v32 = _mm_shuffle_ps(v27, v27, 0xD2);
            v33 = _mm_shuffle_ps(v27, v27, 0xC9);
            v34 = _mm_sub_ps(
                    _mm_mul_ps(v33, _mm_shuffle_ps(v67, v67, 0xD2)),
                    _mm_mul_ps(v32, _mm_shuffle_ps(v67, v67, 0xC9)));
            v35 = _mm_mul_ps(v34, v34);
            v88 = _mm_shuffle_ps(v35, v35, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v35, v35, 0x55).m128_f32[0] + v35.m128_f32[0]);
            if ( v88 < (double)flt_A372CC )
            {
              v68.m128_f32[0] = *v20 - *v19;
              v68.m128_f32[1] = v20[1] - v19[1];
              v68.m128_f32[2] = v20[2] - v19[2];
              v68.m128_f32[3] = v20[3] - v19[3];
              v36 = _mm_mul_ps(v68, v68);
              v36.m128_f32[0] = _mm_shuffle_ps(v36, v36, 0xAA).m128_f32[0]
                              + (float)(_mm_shuffle_ps(v36, v36, 0x55).m128_f32[0] + v36.m128_f32[0]);
              v72 = 1.0 / fsqrt(v36.m128_f32[0]);
              v37 = 3.0 - (float)((float)(v36.m128_f32[0] * v72) * v72);
              v38 = (__m128)0x3F000000u;
              v38.m128_f32[0] = (float)(0.5 * v72) * v37;
              v69 = _mm_mul_ps(_mm_shuffle_ps(v38, v38, 0), v68);
              v34 = _mm_sub_ps(
                      _mm_mul_ps(v33, _mm_shuffle_ps(v69, v69, 0xD2)),
                      _mm_mul_ps(v32, _mm_shuffle_ps(v69, v69, 0xC9)));
              v39 = _mm_mul_ps(v34, v34);
              v84 = _mm_shuffle_ps(v39, v39, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v39, v39, 0x55).m128_f32[0] + v39.m128_f32[0]);
              if ( v84 < (double)flt_A372CC )
              {
                v92.m128_f32[0] = v69.m128_f32[0] + v80.m128_f32[0];
                v92.m128_f32[1] = v69.m128_f32[1] + v80.m128_f32[1];
                v92.m128_f32[2] = v69.m128_f32[2] + v80.m128_f32[2];
                v92.m128_f32[3] = v69.m128_f32[3] + v80.m128_f32[3];
                v93.m128_f32[0] = v80.m128_f32[0] - v69.m128_f32[0];
                v93.m128_f32[1] = v80.m128_f32[1] - v69.m128_f32[1];
                v93.m128_f32[2] = v80.m128_f32[2] - v69.m128_f32[2];
                v93.m128_f32[3] = v80.m128_f32[3] - v69.m128_f32[3];
                v40 = _mm_mul_ps(v93, v93);
                v85 = _mm_shuffle_ps(v40, v40, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v40, v40, 0x55).m128_f32[0] + v40.m128_f32[0]);
                if ( v85 < (double)flt_A372CC
                  || (v41 = _mm_mul_ps(v92, v92),
                      v83 = _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0]),
                      v83 < (double)flt_A372CC) )
                {
                  v34 = v91;
                }
                else
                {
                  v42 = _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0]);
                  v43 = 1.0 / fsqrt(v42);
                  v44 = 3.0 - (float)((float)(v42 * v43) * v43);
                  v45 = (__m128)0x3F000000u;
                  v45.m128_f32[0] = (float)(0.5 * v43) * v44;
                  v46 = _mm_mul_ps(_mm_shuffle_ps(v45, v45, 0), v92);
                  v45.m128_f32[0] = _mm_shuffle_ps(v40, v40, 0xAA).m128_f32[0]
                                  + (float)(_mm_shuffle_ps(v40, v40, 0x55).m128_f32[0] + v40.m128_f32[0]);
                  v73 = 1.0 / fsqrt(v45.m128_f32[0]);
                  v47 = 3.0 - (float)((float)(v45.m128_f32[0] * v73) * v73);
                  v48 = (__m128)0x3F000000u;
                  v48.m128_f32[0] = (float)(0.5 * v73) * v47;
                  v92 = v46;
                  v93 = _mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v93);
                  v34 = _mm_sub_ps(
                          _mm_mul_ps(_mm_shuffle_ps(v93, v93, 0xC9), _mm_shuffle_ps(v46, v46, 0xD2)),
                          _mm_mul_ps(_mm_shuffle_ps(v93, v93, 0xD2), _mm_shuffle_ps(v46, v46, 0xC9)));
                }
              }
            }
            v49 = _mm_mul_ps(v34, v34);
            v49.m128_f32[0] = _mm_shuffle_ps(v49, v49, 0xAA).m128_f32[0]
                            + (float)(_mm_shuffle_ps(v49, v49, 0x55).m128_f32[0] + v49.m128_f32[0]);
            v74 = 1.0 / fsqrt(v49.m128_f32[0]);
            v24.m128_f32[0] = (float)(0.5 * v74) * (float)(3.0 - (float)((float)(v49.m128_f32[0] * v74) * v74));
            v50 = _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), v34);
          }
          else
          {
            v50 = v90;
          }
          v63 = *v14;
          v62 = *((_WORD *)v14 + 6);
          *(__m128 *)&v97[1] = v50;
          v91 = v50;
          sub_931FD0(a1, a2, (__m128 *)&v97[1], v62, v63, v15, v17, (int)v105);
          sub_931FD0(a1, a3, (__m128 *)&v97[1], *((_WORD *)v14 + 6), v14[1], v15, v17, (int)v102);
          sub_9313E0(a1, *a3, (int)&v97[1], *((_WORD *)v14 + 6), (int)v14, v15, v17, v105, (float **)v102);
          sub_92EF10(v89, (float *)v14, v105, v102, v64);
          if ( v103 >= 0 )
            sub_8A75D0(*(_DWORD *)(v78 + 0x19C), (_DWORD *)v102[0], 8 * v103, 0x14);
          if ( v106 >= 0 )
            sub_8A75D0(*(_DWORD *)(v78 + 0x19C), v105[0], 8 * v106, 0x14);
          v13 = ++LODWORD(v82) < v65[1];
          v75 += 0x14;
        }
        while ( v13 );
        v6 = v81;
        v4 = a2;
        v12 = (int *)v64;
      }
      v51 = v12[1];
      v65 = v12;
      if ( v51 > 1 )
        sub_92CAB0(*v12, 0, v51 - 1, (int (__cdecl *)(char *, int, int *))sub_92CA80);
      sub_9320F0((int)v4, (int)a3, v12, (const void **)&v108);
      if ( v109 )
        break;
      ++v77;
    }
    v8 = v100;
    v9 = v110;
  }
  v52 = v99 - 1;
  if ( v99 - 1 >= 0 )
  {
    v53 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
    do
    {
      v54 = *(_DWORD *)&v98[4 * v52];
      v55 = *(_DWORD *)(v54 + 8);
      if ( v55 >= 0 )
        sub_8A75D0(*(_DWORD *)(v53 + 0x19C), *(_DWORD **)v54, 0x14 * (v55 & 0x3FFFFFFF), 0x14);
      v56 = *(_DWORD *)&v98[4 * v52];
      v57 = *(_DWORD **)(v53 + 0x19C);
      v58 = v56 == v57[0xA];
      v57[8] = v56;
      if ( v58 )
        (*(void (__thiscall **)(_DWORD *, int))(*v57 + 0x10))(v57, v56);
      --v52;
    }
    while ( v52 >= 0 );
    v8 = v100;
    v9 = v110;
  }
  v99 = 0;
  if ( v109 )
  {
    sub_931B80((int)v4, (int)a3, &v108, a4);
    v59 = TlsIndex;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( v110 >= 0 )
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v59] + 0x19C), v108, 0x10 * v110, 0x14);
    if ( v100 >= 0 )
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v59] + 0x19C), v98, 4 * v100, 0x14);
    if ( v95 >= 0 )
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v59] + 0x19C), v94[0], 0x14 * (v95 & 0x3FFFFFFF), 0x14);
    return 0;
  }
  if ( v9 >= 0 )
  {
    sub_8A75D0(
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
      v108,
      0x10 * v9,
      0x14);
    v8 = v100;
  }
  if ( v8 >= 0 )
    sub_8A75D0(
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
      v98,
      4 * v8,
      0x14);
  if ( v95 >= 0 )
    sub_8A75D0(
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
      v94[0],
      0x14 * (v95 & 0x3FFFFFFF),
      0x14);
  return 1;
}
