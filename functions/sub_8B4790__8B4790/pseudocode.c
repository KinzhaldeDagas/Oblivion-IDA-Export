int __cdecl sub_8B4790(__m128 *a1, __m128 *a2, float a3, float a4, __m128 *a5)
{
  __m128 v6; // xmm2
  __m128 v7; // xmm0
  __m128 v8; // xmm1
  float v9; // xmm1_4
  __m128 v10; // xmm3
  __m128 v11; // xmm0
  __m128 v12; // xmm4
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  __m128 v15; // xmm0
  __m128 v16; // xmm2
  __m128 v17; // xmm1
  float v18; // xmm5_4
  __m128 v19; // xmm6
  __m128 v20; // xmm1
  __m128 v21; // xmm1
  __m128 v22; // xmm1
  double v23; // st7
  __m128 v24; // xmm2
  double v25; // st7
  char *v26; // eax
  int v27; // edx
  double v28; // st7
  double v29; // st7
  double v30; // st7
  double v31; // st7
  double v32; // st6
  double v33; // st7
  int v34; // ecx
  __m128 *v35; // eax
  double v36; // st7
  float v37; // esi
  int v38; // ecx
  __m128 *v39; // eax
  int v40; // ecx
  __m128 *v41; // eax
  int v42; // ecx
  float v43; // [esp+0h] [ebp-434h]
  float v44; // [esp+14h] [ebp-420h]
  float v45; // [esp+14h] [ebp-420h]
  int v46; // [esp+18h] [ebp-41Ch]
  float v47; // [esp+18h] [ebp-41Ch]
  float v48; // [esp+1Ch] [ebp-418h]
  float v49; // [esp+20h] [ebp-414h]
  __m128 v50; // [esp+24h] [ebp-410h] BYREF
  unsigned int v51; // [esp+40h] [ebp-3F4h]
  __m128 v52; // [esp+44h] [ebp-3F0h] BYREF
  float v53; // [esp+60h] [ebp-3D4h]
  __m128 v54; // [esp+64h] [ebp-3D0h] BYREF
  __m128 v55; // [esp+74h] [ebp-3C0h]
  __m128 v56; // [esp+84h] [ebp-3B0h]
  __m128 v57; // [esp+94h] [ebp-3A0h]
  __m128 v58; // [esp+A4h] [ebp-390h] BYREF
  int v59; // [esp+B4h] [ebp-380h] BYREF
  unsigned int v60; // [esp+B8h] [ebp-37Ch]
  __m128 v61; // [esp+C4h] [ebp-370h]
  __m128 v62; // [esp+D4h] [ebp-360h] BYREF
  __m128 v63; // [esp+E4h] [ebp-350h]
  __m128 v64; // [esp+F4h] [ebp-340h]
  __m128 v65; // [esp+104h] [ebp-330h]
  __m128 v66; // [esp+114h] [ebp-320h]
  __m128 v67; // [esp+124h] [ebp-310h]
  __m128 v68; // [esp+134h] [ebp-300h]
  __m128 v69; // [esp+144h] [ebp-2F0h] BYREF
  float v70; // [esp+154h] [ebp-2E0h] BYREF
  float v71; // [esp+158h] [ebp-2DCh]
  __m128 v72; // [esp+164h] [ebp-2D0h] BYREF
  __m128 v73; // [esp+174h] [ebp-2C0h] BYREF
  __m128 v74; // [esp+184h] [ebp-2B0h]
  __m128 v75; // [esp+194h] [ebp-2A0h]
  __m128 v76; // [esp+1A4h] [ebp-290h]
  __m128 v77; // [esp+1B4h] [ebp-280h]
  __m128 v78; // [esp+1C4h] [ebp-270h]
  __m128 v79; // [esp+1D4h] [ebp-260h]
  float v80; // [esp+1E4h] [ebp-250h] BYREF
  float v81; // [esp+1E8h] [ebp-24Ch]
  __m128 v82; // [esp+1F4h] [ebp-240h] BYREF
  __m128 v83; // [esp+204h] [ebp-230h] BYREF
  __m128 v84; // [esp+214h] [ebp-220h]
  __m128 v85; // [esp+224h] [ebp-210h]
  __m128 v86; // [esp+234h] [ebp-200h]
  __m128 v87; // [esp+244h] [ebp-1F0h]
  __m128 v88; // [esp+254h] [ebp-1E0h]
  __m128 v89; // [esp+264h] [ebp-1D0h]
  char *v90; // [esp+274h] [ebp-1C0h] BYREF
  int v91; // [esp+278h] [ebp-1BCh]
  int v92; // [esp+27Ch] [ebp-1B8h]
  char v93; // [esp+284h] [ebp-1B0h] BYREF
  char v94; // [esp+2C4h] [ebp-170h] BYREF

  if ( a4 <= (double)*(float *)&SrcStr || a3 <= (double)*(float *)&SrcStr )
    return 1;
  v6 = _mm_sub_ps(*a2, *a1);
  v7 = _mm_mul_ps(v6, v6);
  v8 = _mm_shuffle_ps(v7, v7, 0xAA);
  v8.m128_f32[0] = v8.m128_f32[0] + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]);
  v52 = v8;
  v52.m128_i32[0] = fsqrt(v8.m128_f32[0]);
  v48 = v52.m128_f32[0];
  if ( v52.m128_f32[0] <= (double)*(float *)&SrcStr )
    goto LABEL_7;
  v9 = _mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0];
  v10 = _mm_shuffle_ps(v7, v7, 0xAA);
  v11 = v10;
  v11.m128_f32[0] = v10.m128_f32[0] + v9;
  v52 = v11;
  v52.m128_f32[0] = 1.0 / fsqrt(v10.m128_f32[0] + v9);
  v12 = (__m128)0x3F000000u;
  v13 = (__m128)0x3F000000u;
  v13.m128_f32[0] = (float)(0.5 * v52.m128_f32[0])
                  * (float)(3.0 - (float)((float)((float)(v10.m128_f32[0] + v9) * v52.m128_f32[0]) * v52.m128_f32[0]));
  v14 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v6);
  v50.m128_u64[0] = 0;
  v50.m128_u64[1] = 0x3F800000;
  v15 = _mm_mul_ps(v14, v50);
  if ( fabs((float)(_mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]))) >= flt_A97F54 )
  {
LABEL_7:
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v54.m128_i32[0] = 0x3F800000;
    v55.m128_i32[1] = 0x3F800000;
    v56.m128_i32[2] = 0x3F800000;
  }
  else
  {
    v16 = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v50, v50, 0xC9), _mm_shuffle_ps(v14, v14, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v50, v50, 0xD2), _mm_shuffle_ps(v14, v14, 0xC9)));
    v17 = _mm_mul_ps(v16, v16);
    v18 = _mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0];
    v19 = _mm_shuffle_ps(v17, v17, 0xAA);
    v20 = v19;
    v20.m128_f32[0] = v19.m128_f32[0] + v18;
    v52 = v20;
    v52.m128_f32[0] = 1.0 / fsqrt(v19.m128_f32[0] + v18);
    v12.m128_f32[0] = 0.5 * v52.m128_f32[0];
    v21 = v12;
    v21.m128_f32[0] = (float)(0.5 * v52.m128_f32[0])
                    * (float)(3.0 - (float)((float)((float)(v19.m128_f32[0] + v18) * v52.m128_f32[0]) * v52.m128_f32[0]));
    v58 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v16);
    v43 = sub_8A2AF0(
            _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]));
    sub_8B1B00(&v52, &v58, v43);
    sub_8B1DD0(v54.m128_f32, v52.m128_f32);
  }
  v22 = *a2;
  v23 = a3 * a3;
  v24 = *a1;
  v49 = v23;
  v25 = v23 * a3 * flt_A97F2C;
  v58 = (__m128)0x3F000000u;
  v53 = v25;
  v90 = &v93;
  v57 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), _mm_add_ps(v24, v22));
  v91 = 0;
  v92 = 0x80000003;
  v52 = 0;
  v26 = &v94;
  v27 = 3;
  v28 = v48 * a3 * a3 * flt_A97F28;
  *(float *)&v46 = v28;
  v29 = fConstant_1 / (v28 + v53);
  v44 = v53 * v29 * a4;
  *(float *)&v51 = v29 * *(float *)&v46 * a4;
  do
  {
    *((_DWORD *)v26 + 0xFFFFFFF0) = 0;
    *((_DWORD *)v26 + 0xFFFFFFF1) = 0;
    *((_OWORD *)v26 + 0xFFFFFFFD) = 0;
    *((_OWORD *)v26 + 0xFFFFFFFE) = 0;
    *((_OWORD *)v26 + 0xFFFFFFFF) = 0;
    *(_OWORD *)v26 = 0;
    *((_OWORD *)v26 + 1) = 0;
    *((_OWORD *)v26 + 2) = 0;
    *((_OWORD *)v26 + 3) = 0;
    *((_DWORD *)v26 + 4) = 0x3F800000;
    *((_DWORD *)v26 + 9) = 0x3F800000;
    *((_DWORD *)v26 + 0xE) = 0x3F800000;
    *((_OWORD *)v26 + 4) = 0;
    v26 += 0x90;
    --v27;
  }
  while ( v27 );
  sub_539B00((float *)&v59);
  v65 = v54;
  v30 = v48 * v48 * flt_A41304;
  v66 = v55;
  v31 = v30 * flt_A7C038;
  v67 = v56;
  v32 = v49 * flt_A41304;
  v68 = v57;
  v62 = v52;
  v63 = v52;
  v64 = v52;
  v62.m128_f32[0] = v31 + v32;
  v63.m128_f32[1] = v62.m128_f32[0];
  v33 = v49 * flt_A3D65C;
  v61 = 0u;
  v64.m128_f32[2] = v33;
  v50 = (__m128)v51;
  sub_8D2A60(&v62, &v50);
  v60 = v51;
  v34 = v91;
  v61 = v52;
  v59 = v46;
  if ( v91 == (v92 & 0x3FFFFFFF) )
  {
    sub_8A6EE0((const void **)&v90, 0x90);
    v34 = v91;
  }
  v35 = (__m128 *)&v90[0x90 * v34];
  v91 = v34 + 1;
  v35->m128_i32[0] = v59;
  v35->m128_i32[1] = v60;
  v35[1] = v61;
  v35[2] = v62;
  v35[3] = v63;
  v35[4] = v64;
  v35[5] = v65;
  v35[6] = v66;
  v35[7] = v67;
  v35[8] = v68;
  sub_539B00(&v70);
  v36 = v48 * flt_A3D65C;
  v76 = v54;
  *(float *)&v51 = v36;
  v77 = v55;
  v50.m128_f32[2] = v36;
  v78 = v56;
  v79 = v57;
  v50.m128_u64[0] = 0;
  v50.m128_i32[3] = 0;
  sub_88FE00(&v50, &v54, &v50);
  v37 = v44;
  v72.m128_f32[2] = a3 * flt_A97F50;
  v50 = _mm_add_ps(v50, v79);
  v79 = v50;
  v72.m128_u64[0] = 0;
  v72.m128_i32[3] = 0;
  v62 = v52;
  v63 = v52;
  v64 = v52;
  sub_8B3550(a3, v44, (int)&v59);
  v73 = v62;
  v74 = v63;
  v75 = v64;
  v69 = v58;
  sub_8D2A60(&v73, &v69);
  v47 = v44 * flt_A3D65C;
  sub_8B36D0(v72.m128_f32, v47, v73.m128_f32);
  v38 = v91;
  v45 = v53 * flt_A3D65C;
  v70 = v45;
  v71 = v47;
  if ( v91 == (v92 & 0x3FFFFFFF) )
  {
    sub_8A6EE0((const void **)&v90, 0x90);
    v38 = v91;
  }
  v39 = (__m128 *)&v90[0x90 * v38];
  v91 = v38 + 1;
  v39->m128_f32[0] = v70;
  v39->m128_f32[1] = v71;
  v39[1] = v72;
  v39[2] = v73;
  v39[3] = v74;
  v39[4] = v75;
  v39[5] = v76;
  v39[6] = v77;
  v39[7] = v78;
  v39[8] = v79;
  sub_539B00(&v80);
  v86 = v54;
  v50.m128_f32[2] = -*(float *)&v51;
  v87 = v55;
  v88 = v56;
  v89 = v57;
  v50.m128_u64[0] = 0;
  v50.m128_i32[3] = 0;
  sub_88FE00(&v50, &v54, &v50);
  v82.m128_f32[2] = a3 * flt_A97F4C;
  v50 = _mm_add_ps(v50, v89);
  v89 = v50;
  v82.m128_u64[0] = 0;
  v82.m128_i32[3] = 0;
  v62 = v52;
  v63 = v52;
  v64 = v52;
  sub_8B3550(a3, v37, (int)&v59);
  v83 = v62;
  v84 = v63;
  v85 = v64;
  v69 = v58;
  sub_8D2A60(&v83, &v69);
  sub_8B36D0(v82.m128_f32, v47, v83.m128_f32);
  v81 = v47;
  v40 = v91;
  v80 = v45;
  if ( v91 == (v92 & 0x3FFFFFFF) )
  {
    sub_8A6EE0((const void **)&v90, 0x90);
    v40 = v91;
  }
  v41 = (__m128 *)&v90[0x90 * v40];
  v91 = v40 + 1;
  v41->m128_f32[0] = v80;
  v41->m128_f32[1] = v81;
  v41[1] = v82;
  v41[2] = v83;
  v41[3] = v84;
  v41[4] = v85;
  v41[5] = v86;
  v41[6] = v87;
  v41[7] = v88;
  v41[8] = v89;
  sub_8B3E60((int *)&v90, a5);
  if ( v92 >= 0 )
  {
    v42 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v42 )
      v42 = dword_BA7D9C;
    sub_8A75D0(v42, v90, 0x90 * (v92 & 0x3FFFFFFF), 0x14);
  }
  return 0;
}
