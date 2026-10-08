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

  if ( a4 <= (double)*(float *)&SrcStr || a3 <= (double)*(float *)&SrcStr ) /*0x8b47bd*/
    return 1; /*0x8b47bf*/
  v6 = _mm_sub_ps(*a2, *a1); /*0x8b47d7*/
  v7 = _mm_mul_ps(v6, v6); /*0x8b47dd*/
  v8 = _mm_shuffle_ps(v7, v7, 0xAA); /*0x8b47f1*/
  v8.m128_f32[0] = v8.m128_f32[0] + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]); /*0x8b47f5*/
  v52 = v8; /*0x8b47f9*/
  v52.m128_i32[0] = fsqrt(v8.m128_f32[0]); /*0x8b4806*/
  v48 = v52.m128_f32[0]; /*0x8b4811*/
  if ( v52.m128_f32[0] <= (double)*(float *)&SrcStr ) /*0x8b4824*/
    goto LABEL_7; /*0x8b4824*/
  v9 = _mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]; /*0x8b4831*/
  v10 = _mm_shuffle_ps(v7, v7, 0xAA); /*0x8b4838*/
  v11 = v10; /*0x8b483c*/
  v11.m128_f32[0] = v10.m128_f32[0] + v9; /*0x8b483f*/
  v52 = v11; /*0x8b4843*/
  v52.m128_f32[0] = 1.0 / fsqrt(v10.m128_f32[0] + v9); /*0x8b484c*/
  v12 = (__m128)0x3F000000u; /*0x8b4875*/
  v13 = (__m128)0x3F000000u; /*0x8b4882*/
  v13.m128_f32[0] = (float)(0.5 * v52.m128_f32[0]) /*0x8b4889*/
                  * (float)(3.0 - (float)((float)((float)(v10.m128_f32[0] + v9) * v52.m128_f32[0]) * v52.m128_f32[0]));
  v14 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v6); /*0x8b4894*/
  v50.m128_u64[0] = 0; /*0x8b4897*/
  v50.m128_u64[1] = 0x3F800000; /*0x8b48a7*/
  v15 = _mm_mul_ps(v14, v50); /*0x8b48bf*/
  if ( fabs((float)(_mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0] /*0x8b48f1*/
                  + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]))) >= flt_A97F54 )
  {
LABEL_7:
    v54 = 0; /*0x8b49ca*/
    v55 = 0; /*0x8b49cf*/
    v56 = 0; /*0x8b49d4*/
    v54.m128_i32[0] = 0x3F800000; /*0x8b49dc*/
    v55.m128_i32[1] = 0x3F800000; /*0x8b49e4*/
    v56.m128_i32[2] = 0x3F800000; /*0x8b49ec*/
  }
  else
  {
    v16 = _mm_sub_ps( /*0x8b491c*/
            _mm_mul_ps(_mm_shuffle_ps(v50, v50, 0xC9), _mm_shuffle_ps(v14, v14, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v50, v50, 0xD2), _mm_shuffle_ps(v14, v14, 0xC9)));
    v17 = _mm_mul_ps(v16, v16); /*0x8b4922*/
    v18 = _mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]; /*0x8b492c*/
    v19 = _mm_shuffle_ps(v17, v17, 0xAA); /*0x8b4933*/
    v20 = v19; /*0x8b4937*/
    v20.m128_f32[0] = v19.m128_f32[0] + v18; /*0x8b493a*/
    v52 = v20; /*0x8b493e*/
    v52.m128_f32[0] = 1.0 / fsqrt(v19.m128_f32[0] + v18); /*0x8b4947*/
    v12.m128_f32[0] = 0.5 * v52.m128_f32[0]; /*0x8b495e*/
    v21 = v12; /*0x8b4962*/
    v21.m128_f32[0] = (float)(0.5 * v52.m128_f32[0]) /*0x8b4965*/
                    * (float)(3.0 - (float)((float)((float)(v19.m128_f32[0] + v18) * v52.m128_f32[0]) * v52.m128_f32[0]));
    v58 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v16); /*0x8b4996*/
    v43 = sub_8A2AF0( /*0x8b49a3*/
            _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]));
    hkQuaternion_SetAxisAngleScaled(&v52, &v58, v43); /*0x8b49b2*/
    hkMatrix3_SetFromQuaternion(v54.m128_f32, v52.m128_f32); /*0x8b49c0*/
  }
  v22 = *a2; /*0x8b49fa*/
  v23 = a3 * a3; /*0x8b49fd*/
  v24 = *a1; /*0x8b4a00*/
  v49 = v23; /*0x8b4a11*/
  v25 = v23 * a3 * flt_A97F2C; /*0x8b4a29*/
  v58 = (__m128)0x3F000000u; /*0x8b4a2f*/
  v53 = v25; /*0x8b4a3c*/
  v90 = &v93; /*0x8b4a40*/
  v57 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), _mm_add_ps(v24, v22)); /*0x8b4a51*/
  v91 = 0; /*0x8b4a59*/
  v92 = 0x80000003; /*0x8b4a60*/
  v52 = 0; /*0x8b4a6e*/
  v26 = &v94; /*0x8b4a73*/
  v27 = 3; /*0x8b4a7a*/
  v28 = v48 * a3 * a3 * flt_A97F28; /*0x8b4a7f*/
  *(float *)&v46 = v28; /*0x8b4a8a*/
  v29 = fConstant_1 / (v28 + v53); /*0x8b4a92*/
  v44 = v53 * v29 * a4; /*0x8b4aa1*/
  *(float *)&v51 = v29 * *(float *)&v46 * a4; /*0x8b4aac*/
  do /*0x8b4ae4*/
  {
    *((_DWORD *)v26 + 0xFFFFFFF0) = 0; /*0x8b4ab0*/
    *((_DWORD *)v26 + 0xFFFFFFF1) = 0; /*0x8b4ab3*/
    *((_OWORD *)v26 + 0xFFFFFFFD) = 0; /*0x8b4ab6*/
    *((_OWORD *)v26 + 0xFFFFFFFE) = 0; /*0x8b4aba*/
    *((_OWORD *)v26 + 0xFFFFFFFF) = 0; /*0x8b4abe*/
    *(_OWORD *)v26 = 0; /*0x8b4ac2*/
    *((_OWORD *)v26 + 1) = 0; /*0x8b4ac5*/
    *((_OWORD *)v26 + 2) = 0; /*0x8b4ac9*/
    *((_OWORD *)v26 + 3) = 0; /*0x8b4acd*/
    *((_DWORD *)v26 + 4) = 0x3F800000; /*0x8b4ad1*/
    *((_DWORD *)v26 + 9) = 0x3F800000; /*0x8b4ad4*/
    *((_DWORD *)v26 + 0xE) = 0x3F800000; /*0x8b4ad7*/
    *((_OWORD *)v26 + 4) = 0; /*0x8b4ada*/
    v26 += 0x90; /*0x8b4ade*/
    --v27; /*0x8b4ae3*/
  }
  while ( v27 ); /*0x8b4ae4*/
  sub_539B00((float *)&v59); /*0x8b4aed*/
  v65 = v54; /*0x8b4b03*/
  v30 = v48 * v48 * flt_A41304; /*0x8b4b0b*/
  v66 = v55; /*0x8b4b16*/
  v31 = v30 * flt_A7C038; /*0x8b4b26*/
  v67 = v56; /*0x8b4b30*/
  v32 = v49 * flt_A41304; /*0x8b4b38*/
  v68 = v57; /*0x8b4b46*/
  v62 = v52; /*0x8b4b55*/
  v63 = v52; /*0x8b4b5d*/
  v64 = v52; /*0x8b4b65*/
  v62.m128_f32[0] = v31 + v32; /*0x8b4b6d*/
  v63.m128_f32[1] = v62.m128_f32[0]; /*0x8b4b78*/
  v33 = v49 * kHeadBodyNormalMatchRadius; /*0x8b4b88*/
  v61 = 0u; /*0x8b4b9b*/
  v64.m128_f32[2] = v33; /*0x8b4ba6*/
  v50 = (__m128)v51; /*0x8b4bce*/
  sub_8D2A60(&v62, &v50); /*0x8b4bd3*/
  v60 = v51; /*0x8b4bec*/
  v34 = v91; /*0x8b4bf3*/
  v61 = v52; /*0x8b4c02*/
  v59 = v46; /*0x8b4c0a*/
  if ( v91 == (v92 & 0x3FFFFFFF) ) /*0x8b4c11*/
  {
    sub_8A6EE0((const void **)&v90, 0x90); /*0x8b4c20*/
    v34 = v91; /*0x8b4c25*/
  }
  v35 = (__m128 *)&v90[0x90 * v34]; /*0x8b4c3c*/
  v91 = v34 + 1; /*0x8b4c3f*/
  v35->m128_i32[0] = v59; /*0x8b4c4d*/
  v35->m128_i32[1] = v60; /*0x8b4c56*/
  v35[1] = v61; /*0x8b4c61*/
  v35[2] = v62; /*0x8b4c6d*/
  v35[3] = v63; /*0x8b4c79*/
  v35[4] = v64; /*0x8b4c85*/
  v35[5] = v65; /*0x8b4c91*/
  v35[6] = v66; /*0x8b4c9d*/
  v35[7] = v67; /*0x8b4ca9*/
  v35[8] = v68; /*0x8b4cbc*/
  sub_539B00(&v70); /*0x8b4cc3*/
  v36 = v48 * kHeadBodyNormalMatchRadius; /*0x8b4cd1*/
  v76 = v54; /*0x8b4cd7*/
  *(float *)&v51 = v36; /*0x8b4ce8*/
  v77 = v55; /*0x8b4cec*/
  v50.m128_f32[2] = v36; /*0x8b4cf4*/
  v78 = v56; /*0x8b4d05*/
  v79 = v57; /*0x8b4d1a*/
  v50.m128_u64[0] = 0; /*0x8b4d22*/
  v50.m128_i32[3] = 0; /*0x8b4d32*/
  hkBasis_TransformVector(&v50, &v54, &v50); /*0x8b4d3a*/
  v37 = v44; /*0x8b4d55*/
  v72.m128_f32[2] = a3 * flt_A97F50; /*0x8b4d5c*/
  v50 = _mm_add_ps(v50, v79); /*0x8b4d6e*/
  v79 = v50; /*0x8b4d73*/
  v72.m128_u64[0] = 0; /*0x8b4d82*/
  v72.m128_i32[3] = 0; /*0x8b4d98*/
  v62 = v52; /*0x8b4da3*/
  v63 = v52; /*0x8b4dab*/
  v64 = v52; /*0x8b4db3*/
  sub_8B3550(a3, v44, (int)&v59); /*0x8b4dbb*/
  v73 = v62; /*0x8b4dc8*/
  v74 = v63; /*0x8b4dd8*/
  v75 = v64; /*0x8b4de8*/
  v69 = v58; /*0x8b4dfb*/
  sub_8D2A60(&v73, &v69); /*0x8b4e12*/
  v47 = v44 * kHeadBodyNormalMatchRadius; /*0x8b4e30*/
  sub_8B36D0(v72.m128_f32, v47, v73.m128_f32); /*0x8b4e3a*/
  v38 = v91; /*0x8b4e50*/
  v45 = v53 * kHeadBodyNormalMatchRadius; /*0x8b4e60*/
  v70 = v45; /*0x8b4e66*/
  v71 = v47; /*0x8b4e6f*/
  if ( v91 == (v92 & 0x3FFFFFFF) ) /*0x8b4e76*/
  {
    sub_8A6EE0((const void **)&v90, 0x90); /*0x8b4e85*/
    v38 = v91; /*0x8b4e8a*/
  }
  v39 = (__m128 *)&v90[0x90 * v38]; /*0x8b4ea1*/
  v91 = v38 + 1; /*0x8b4ea4*/
  v39->m128_f32[0] = v70; /*0x8b4eb2*/
  v39->m128_f32[1] = v71; /*0x8b4ebb*/
  v39[1] = v72; /*0x8b4ec6*/
  v39[2] = v73; /*0x8b4ed2*/
  v39[3] = v74; /*0x8b4ede*/
  v39[4] = v75; /*0x8b4eea*/
  v39[5] = v76; /*0x8b4ef6*/
  v39[6] = v77; /*0x8b4f02*/
  v39[7] = v78; /*0x8b4f0e*/
  v39[8] = v79; /*0x8b4f21*/
  sub_539B00(&v80); /*0x8b4f28*/
  v86 = v54; /*0x8b4f38*/
  v50.m128_f32[2] = -*(float *)&v51; /*0x8b4f40*/
  v87 = v55; /*0x8b4f4d*/
  v88 = v56; /*0x8b4f62*/
  v89 = v57; /*0x8b4f77*/
  v50.m128_u64[0] = 0; /*0x8b4f7f*/
  v50.m128_i32[3] = 0; /*0x8b4f8f*/
  hkBasis_TransformVector(&v50, &v54, &v50); /*0x8b4f97*/
  v82.m128_f32[2] = a3 * flt_A97F4C; /*0x8b4fbc*/
  v50 = _mm_add_ps(v50, v89); /*0x8b4fc4*/
  v89 = v50; /*0x8b4fc9*/
  v82.m128_u64[0] = 0; /*0x8b4fd8*/
  v82.m128_i32[3] = 0; /*0x8b4fee*/
  v62 = v52; /*0x8b4ff9*/
  v63 = v52; /*0x8b5001*/
  v64 = v52; /*0x8b5009*/
  sub_8B3550(a3, v37, (int)&v59); /*0x8b5011*/
  v83 = v62; /*0x8b501e*/
  v84 = v63; /*0x8b502e*/
  v85 = v64; /*0x8b5048*/
  v69 = v58; /*0x8b5060*/
  sub_8D2A60(&v83, &v69); /*0x8b5068*/
  sub_8B36D0(v82.m128_f32, v47, v83.m128_f32); /*0x8b507e*/
  v81 = v47; /*0x8b5092*/
  v40 = v91; /*0x8b5099*/
  v80 = v45; /*0x8b50ab*/
  if ( v91 == (v92 & 0x3FFFFFFF) ) /*0x8b50b2*/
  {
    sub_8A6EE0((const void **)&v90, 0x90); /*0x8b50c1*/
    v40 = v91; /*0x8b50c6*/
  }
  v41 = (__m128 *)&v90[0x90 * v40]; /*0x8b50dd*/
  v91 = v40 + 1; /*0x8b50e0*/
  v41->m128_f32[0] = v80; /*0x8b50ee*/
  v41->m128_f32[1] = v81; /*0x8b50f7*/
  v41[1] = v82; /*0x8b5102*/
  v41[2] = v83; /*0x8b510e*/
  v41[3] = v84; /*0x8b511a*/
  v41[4] = v85; /*0x8b5126*/
  v41[5] = v86; /*0x8b5132*/
  v41[6] = v87; /*0x8b513e*/
  v41[7] = v88; /*0x8b514a*/
  v41[8] = v89; /*0x8b5156*/
  sub_8B3E60((int *)&v90, a5); /*0x8b5169*/
  if ( v92 >= 0 ) /*0x8b517a*/
  {
    v42 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8b518c*/
    if ( !v42 ) /*0x8b5194*/
      v42 = unk_BA7D9C; /*0x8b5196*/
    sub_8A75D0(v42, v90, 0x90 * (v92 & 0x3FFFFFFF), 0x14); /*0x8b51b2*/
  }
  return 0; /*0x8b47c7*/
}
