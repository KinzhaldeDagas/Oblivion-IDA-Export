char __thiscall sub_891CC0(__m128 *this, __m128 *a2)
{
  __int32 v4; // ecx
  __int32 v5; // edx
  __int32 v6; // eax
  __int32 v7; // esi
  float v8; // ebx
  int v9; // ecx
  int (__thiscall *v10)(int); // edx
  double v11; // st7
  __m128 *v12; // eax
  __m128 v13; // xmm0
  __m128 v14; // xmm0
  __m128 v15; // xmm0
  double v16; // st7
  unsigned int v17; // esi
  __m128 v18; // xmm0
  float v19; // xmm4_4
  double v20; // st6
  __m128 v21; // xmm0
  float v22; // xmm1_4
  float v23; // xmm3_4
  __m128 v24; // xmm0
  __m128 v25; // xmm0
  __m128 v26; // xmm2
  double v27; // st3
  __m128 *v28; // ebx
  __m128 v29; // xmm1
  int v30; // eax
  double v31; // st7
  __m128 v32; // xmm0
  __m128 v33; // xmm0
  float v34; // xmm2_4
  float v35; // xmm3_4
  __m128 v36; // xmm0
  unsigned int v37; // ecx
  __m128 v38; // xmm0
  int v39; // eax
  float v40; // esi
  int v41; // ebx
  __m128 *v42; // eax
  __m128 v43; // xmm1
  __m128 v44; // xmm2
  __m128 v45; // xmm3
  __m128 v46; // xmm4
  __m128 *v47; // ecx
  int i; // edx
  double v49; // st7
  bool v50; // bl
  int v51; // ecx
  double v52; // st7
  float v53; // xmm1_4
  _DWORD *v54; // esi
  int v55; // eax
  int v56; // eax
  char v57; // al
  char v58; // [esp+3Eh] [ebp-3D6h]
  char v59; // [esp+3Fh] [ebp-3D5h]
  __m128 *v60; // [esp+40h] [ebp-3D4h]
  float v61; // [esp+40h] [ebp-3D4h]
  float v62; // [esp+40h] [ebp-3D4h]
  BOOL v63; // [esp+48h] [ebp-3CCh]
  __int32 v64; // [esp+4Ch] [ebp-3C8h]
  float v65; // [esp+50h] [ebp-3C4h]
  char v66; // [esp+57h] [ebp-3BDh] BYREF
  float v67; // [esp+58h] [ebp-3BCh]
  int v68; // [esp+5Ch] [ebp-3B8h]
  int v69[5]; // [esp+60h] [ebp-3B4h] BYREF
  __m128 v70; // [esp+74h] [ebp-3A0h] BYREF
  __m128 v71; // [esp+84h] [ebp-390h] BYREF
  __m128 v72; // [esp+94h] [ebp-380h] BYREF
  __m128 v73; // [esp+A4h] [ebp-370h] BYREF
  __m128 v74; // [esp+B4h] [ebp-360h] BYREF
  __m128 v75; // [esp+C4h] [ebp-350h] BYREF
  __m128 v76; // [esp+D4h] [ebp-340h]
  __m128 v77; // [esp+E4h] [ebp-330h] BYREF
  int v78; // [esp+F4h] [ebp-320h]
  float v79; // [esp+F8h] [ebp-31Ch]
  __m128 v80[4]; // [esp+104h] [ebp-310h] BYREF
  __m128 v81; // [esp+144h] [ebp-2D0h] BYREF
  __m128 v82; // [esp+154h] [ebp-2C0h] BYREF
  int v83; // [esp+164h] [ebp-2B0h]
  int v84; // [esp+168h] [ebp-2ACh]
  __m128 v85[3]; // [esp+174h] [ebp-2A0h] BYREF
  __m128 v86; // [esp+1A4h] [ebp-270h] BYREF
  float v87; // [esp+1C0h] [ebp-254h]
  float v88; // [esp+1E0h] [ebp-234h]
  char v89[524]; // [esp+204h] [ebp-210h] BYREF

  if ( *((_DWORD *)this + 0xDB) == 1 ) /*0x891ced*/
    return sub_8919A0(this, a2); /*0x891d09*/
  v4 = a2[2].m128_i32[0]; /*0x891d0c*/
  if ( *(_BYTE *)(v4 + 0x18) == 2 ) /*0x891d13*/
  {
    v5 = v4 + *(_DWORD *)(v4 + 0x10); /*0x891d18*/
    v60 = (__m128 *)v5; /*0x891d1a*/
  }
  else
  {
    v60 = 0; /*0x891d20*/
    v5 = 0; /*0x891d28*/
  }
  v6 = a2[2].m128_i32[2]; /*0x891d2c*/
  if ( *(_BYTE *)(v6 + 0x18) == 1 ) /*0x891d33*/
  {
    v7 = v6 + *(_DWORD *)(v6 + 0x10); /*0x891d38*/
    v64 = v7; /*0x891d3a*/
  }
  else
  {
    v64 = 0; /*0x891d40*/
    v7 = 0; /*0x891d48*/
  }
  v58 = 1; /*0x891d4e*/
  if ( !v5 || !v7 ) /*0x891d5b*/
    return v58; /*0x891d5b*/
  v8 = *(float *)v6; /*0x891d61*/
  v9 = *(_DWORD *)v4; /*0x891d63*/
  v10 = *(int (__thiscall **)(int))(*(_DWORD *)v9 + 8); /*0x891d67*/
  v58 = 0; /*0x891d6a*/
  v67 = *(float *)v6; /*0x891d6f*/
  if ( v10(v9) == 8 ) /*0x891d78*/
  {
    v11 = *(float *)(*(_DWORD *)a2[2].m128_i32[0] + 0xC); /*0x891d83*/
    v68 = *(_DWORD *)a2[2].m128_i32[0]; /*0x891d86*/
  }
  else
  {
    v11 = *((float *)this + 0xE8); /*0x891d8e*/
    v68 = 0; /*0x891d96*/
  }
  v12 = *(__m128 **)(v7 + 0x50); /*0x891d9a*/
  v65 = v11; /*0x891d9d*/
  v13 = v12[1]; /*0x891da1*/
  ++v12; /*0x891dab*/
  v80[0] = v13; /*0x891dae*/
  v80[1] = v12[1]; /*0x891dba*/
  v80[2] = v12[2]; /*0x891dc6*/
  v14 = v12[3]; /*0x891dce*/
  v79 = 1.0; /*0x891dd2*/
  v80[3] = v14; /*0x891dd9*/
  v15 = *a2; /*0x891de1*/
  v83 = 0; /*0x891de8*/
  v84 = 0; /*0x891def*/
  v76 = v15; /*0x891df6*/
  v71.m128_i32[0] = _mm_shuffle_ps(v15, v15, 0xAA).m128_u32[0]; /*0x891e05*/
  sub_8914C0(this, &v72); /*0x891e0b*/
  v16 = 0.0; /*0x891e10*/
  v17 = 0; /*0x891e12*/
  v63 = 0; /*0x891e1b*/
  if ( (*((_BYTE *)this + 0x1F4) & 1) != 0 ) /*0x891e1f*/
  {
    while ( 1 ) /*0x891f48*/
    {
      if ( v68 ) /*0x891f48*/
      {
        v70 = *(__m128 *)(0x10 * (v17 + 1) + v68); /*0x891f56*/
      }
      else
      {
        v70.m128_f32[0] = v16; /*0x891f60*/
        v70.m128_f32[1] = *((float *)this + 0xE9) * dbl_A2FAA0; /*0x891f70*/
        v70.m128_f32[2] = v65; /*0x891f78*/
        v70.m128_f32[3] = v16; /*0x891f7c*/
        if ( v17 == 1 ) /*0x891f80*/
          v70.m128_f32[1] = v70.m128_f32[1] * dbl_A3D360; /*0x891f8c*/
      }
      v28 = this + v17 + 0x38; /*0x891f9f*/
      hkTransform_TransformPosition(v28, v60 + 7, &v70); /*0x891fa8*/
      v29 = v76; /*0x891fb3*/
      v30 = 0x10 * v17; /*0x891fbd*/
      v31 = *((float *)this + 0x92) + *((float *)this + 4 * v17++ + 0xE2); /*0x891fc0*/
      v32 = v76; /*0x891fcd*/
      *(float *)((char *)this + v30 + 0x388) = v31; /*0x891fd0*/
      *(__m128 *)((char *)&v74 + v30) = _mm_sub_ps(v32, *v28); /*0x891fdd*/
      if ( v17 >= 2 ) /*0x891fe5*/
        break; /*0x891fe5*/
      v16 = 0.0; /*0x891f40*/
    }
    v33 = _mm_mul_ps(v74, v74); /*0x891ff3*/
    v34 = _mm_shuffle_ps(v33, v33, 0x55).m128_f32[0] + v33.m128_f32[0]; /*0x891ffd*/
    v35 = _mm_shuffle_ps(v33, v33, 0xAA).m128_f32[0]; /*0x892004*/
    v36 = _mm_mul_ps(v75, v75); /*0x892014*/
    v70.m128_f32[0] = v35 + v34; /*0x892017*/
    *(float *)v69 = _mm_shuffle_ps(v36, v36, 0xAA).m128_f32[0] /*0x892037*/
                  + (float)(_mm_shuffle_ps(v36, v36, 0x55).m128_f32[0] + v36.m128_f32[0]);
    v63 = *(float *)v69 <= (double)(float)(v35 + v34); /*0x892052*/
    v8 = v67; /*0x892062*/
    v37 = 0x10 * (v63 + 0x38); /*0x892069*/
    v69[0] = this->m128_i32[v37 / 4]; /*0x892070*/
    v72.m128_f32[0] = *(float *)v69; /*0x89207d*/
    v69[0] = _mm_shuffle_ps(*(__m128 *)((char *)this + v37), *(__m128 *)((char *)this + v37), 0x55).m128_i32[0]; /*0x892088*/
    v38 = v60[0xA]; /*0x892092*/
    v72.m128_f32[1] = *(float *)v69; /*0x892099*/
    v16 = 0.0; /*0x89209d*/
    v18 = _mm_sub_ps(v38, v29); /*0x89209f*/
  }
  else
  {
    v18 = _mm_sub_ps(v72, v76); /*0x891e2a*/
  }
  v19 = *(float *)&dword_A46C30; /*0x891e32*/
  v70 = v18; /*0x891e3a*/
  v70.m128_f32[2] = v16; /*0x891e3f*/
  v20 = *((float *)this + 0x92); /*0x891e48*/
  v21 = _mm_mul_ps(v70, v70); /*0x891e55*/
  v72.m128_f32[2] = v72.m128_f32[2] + v20; /*0x891e65*/
  v21.m128_f32[0] = _mm_shuffle_ps(v21, v21, 0xAA).m128_f32[0] /*0x891e6d*/
                  + (float)(_mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0]);
  v22 = 1.0 / fsqrt(v21.m128_f32[0]); /*0x891e74*/
  v23 = v19 - (float)((float)(v21.m128_f32[0] * v22) * v22); /*0x891e8f*/
  v24 = 0; /*0x891e93*/
  v24.m128_f32[0] = (float)(kHeadBodyNormalMatchRadius * v22) * v23; /*0x891e9e*/
  v25 = _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), v70); /*0x891ea6*/
  v26 = v72; /*0x891ea9*/
  v76.m128_f32[2] = _mm_shuffle_ps(v72, v72, 0xAA).m128_f32[0]; /*0x891ebf*/
  v69[0] = v76.m128_i32[2]; /*0x891ec6*/
  v70 = v25; /*0x891ed0*/
  v59 = 0; /*0x891ed9*/
  v61 = v71.m128_f32[0] - v76.m128_f32[2]; /*0x891ee0*/
  if ( v61 > v16 ) /*0x891eef*/
  {
    v27 = v20 / dbl_A30E48; /*0x891ef7*/
    if ( v27 >= v61 ) /*0x891f06*/
    {
      v59 = 1; /*0x8920e4*/
    }
    else
    {
      if ( (*((_BYTE *)this + 0x1F4) & 1) == 0 ) /*0x891f13*/
        return 1; /*0x891f37*/
      v62 = v20 + v71.m128_f32[0] - *((float *)this + 4 * v63 + 0xE2); /*0x8920bd*/
      if ( v62 > v16 ) /*0x8920ce*/
      {
        if ( v27 < v62 ) /*0x8920d7*/
          return 1; /*0x8920d7*/
        v59 = 1; /*0x8920dd*/
      }
    }
  }
  if ( a2[2].m128_i32[3] == 0xFFFFFFFF )
  {
LABEL_47:
    v52 = *((float *)this + 0x93); /*0x892345*/
    v73.m128_u64[1] = v26.m128_u64[1]; /*0x89234b*/
    v53 = _mm_shuffle_ps(v25, v25, 0x55).m128_f32[0]; /*0x892360*/
    v67 = v52 + v65; /*0x892364*/
    v73.m128_f32[0] = v26.m128_f32[0] - v25.m128_f32[0] * v67; /*0x892395*/
    v73.m128_f32[1] = v26.m128_f32[1] - v53 * v67; /*0x8923b1*/
    v71.m128_f32[0] = v53; /*0x8923bc*/
    v72.m128_f32[0] = v25.m128_f32[0] * v67 + v72.m128_f32[0]; /*0x8923c8*/
    v72.m128_f32[1] = v67 * v53 + v72.m128_f32[1]; /*0x8923d4*/
    sub_88FD10(&v81, v80, &v72); /*0x8923d8*/
    sub_88FD10(&v82, v80, &v73); /*0x8923f4*/
    (*(void (__thiscall **)(float, char *, __m128 *, __m128 *))(*(_DWORD *)LODWORD(v8) + 0x14))( /*0x892415*/
      COERCE_FLOAT(LODWORD(v8)),
      &v66,
      &v81,
      &v77);
    if ( v79 >= 1.0 ) /*0x892425*/
      goto LABEL_61; /*0x892425*/
    if ( v78 != a2[2].m128_i32[3] /*0x892478*/
      && (hkBasis_TransformVector(&v71, v80, &v77),
          _mm_movemask_ps(
            _mm_cmplt_ps(
              _mm_shuffle_ps((__m128)LODWORD(flt_A34BA0), (__m128)LODWORD(flt_A34BA0), 0),
              _mm_and_ps(_mm_sub_ps(v71, v70), (__m128)xmmword_A372D0)))) )
    {
      if ( v59 ) /*0x8924d2*/
        v58 = 1; /*0x8924d4*/
    }
    else
    {
      v54 = *(_DWORD **)(LODWORD(v8) + 8); /*0x89247f*/
      v58 = 1; /*0x892484*/
      if ( v54 ) /*0x892489*/
      {
        if ( v78 == 0xFFFFFFFF || (v55 = (*(int (__thiscall **)(_DWORD *))(*v54 + 0x88))(v54)) == 0 ) /*0x8924a3*/
          v56 = v54[4]; /*0x8924bb*/
        else
          v56 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v55 + 0x9C))(v55, v78); /*0x8924b7*/
        if ( (unsigned int)(v56 - 0xF) <= 0xD ) /*0x8924c4*/
          v58 = 0; /*0x8924c6*/
      }
    }
    if ( v79 >= 1.0 ) /*0x8924e7*/
LABEL_61:
      v57 = 0; /*0x8924ed*/
    else
      v57 = 1; /*0x8924e9*/
    sub_8A78E0((LPCRITICAL_SECTION *)unk_BA7DA0, (int)&v72, (int)&v73, v57 != 0 ? 0xFF888888 : 0xFFFF0000, 0);
    if ( (*((_BYTE *)this + 0x1F4) & 1) != 0 && !v58 ) /*0x892526*/
    {
      v71.m128_f32[0] = _mm_shuffle_ps(*a2, *a2, 0xAA).m128_f32[0]; /*0x892538*/
      sub_88FEE0((float *)this + 0x7C, v63, v71.m128_f32[0]); /*0x89254c*/
    }
    return v58; /*0x892558*/
  }
  v39 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v8) + 8))(COERCE_FLOAT(LODWORD(v8))); /*0x892106*/
  v40 = v8; /*0x89210b*/
  if ( v39 == 0x18 ) /*0x89210d*/
  {
    v40 = *(float *)(LODWORD(v8) + 0xC); /*0x89210f*/
    v39 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v40) + 8))(COERCE_FLOAT(LODWORD(v40))); /*0x892119*/
  }
  if ( v39 != 0x10 ) /*0x89211e*/
  {
    v26 = v72; /*0x89233b*/
    v25 = v70; /*0x892340*/
    goto LABEL_47; /*0x892340*/
  }
  v41 = (*(int (__thiscall **)(float, __int32, char *))(*(_DWORD *)LODWORD(v40) + 0x28))( /*0x89213d*/
          COERCE_FLOAT(LODWORD(v40)),
          a2[2].m128_i32[3],
          v89);
  v42 = *(__m128 **)(v64 + 0x50); /*0x892143*/
  v43 = v42[1]; /*0x892146*/
  v44 = v42[2]; /*0x89214a*/
  v45 = v42[3]; /*0x89214e*/
  v46 = v42[4]; /*0x892152*/
  v47 = (__m128 *)(v41 + 0x10); /*0x892159*/
  for ( i = 3; i > 0; --i ) /*0x892163*/
  {
    *(__m128 *)((char *)&v85[0xFFFFFFFF] + (_DWORD)v47 - v41) = _mm_add_ps( /*0x89219a*/
                                                                  _mm_add_ps(
                                                                    _mm_mul_ps(_mm_shuffle_ps(*v47, *v47, 0x55), v44),
                                                                    _mm_mul_ps(_mm_shuffle_ps(*v47, *v47, 0), v43)),
                                                                  _mm_add_ps(
                                                                    _mm_mul_ps(_mm_shuffle_ps(*v47, *v47, 0xAA), v45),
                                                                    v46));
    ++v47; /*0x8921a1*/
  }
  sub_8D1EF0(v85, (float *)v69); /*0x8921b5*/
  v49 = *((float *)this + 0x93); /*0x8921ba*/
  v75.m128_u64[1] = v76.m128_u64[1]; /*0x8921c8*/
  v74 = v76; /*0x8921d7*/
  v71.m128_f32[0] = _mm_shuffle_ps(v70, v70, 0x55).m128_f32[0]; /*0x8921f4*/
  v75.m128_f32[0] = v76.m128_f32[0] - v70.m128_f32[0] * v49; /*0x892209*/
  v75.m128_f32[1] = v76.m128_f32[1] - v49 * v71.m128_f32[0]; /*0x892230*/
  sub_8D0CA0(&v74, kHeadBodyNormalMatchRadius, v85, *(float *)(v41 + 0xC), (float *)v69, 0.0, 0, &v86); /*0x892250*/
  if ( v87 < 0.0 || v88 < 0.0 ) /*0x892278*/
  {
    v51 = *(_DWORD *)(LODWORD(v40) + 8); /*0x892309*/
    v50 = 1; /*0x89230e*/
    if ( v51 ) /*0x892310*/
      v50 = (unsigned int)((*(int (__thiscall **)(int, __int32))(*(_DWORD *)v51 + 0x9C))(v51, a2[2].m128_i32[3]) - 0xF) > 0xE; /*0x892334*/
  }
  else
  {
    v50 = v59 != 0; /*0x892286*/
  }
  if ( (*((_BYTE *)this + 0x1F4) & 1) != 0 && !v50 ) /*0x892293*/
  {
    v71.m128_f32[0] = _mm_shuffle_ps(*a2, *a2, 0xAA).m128_f32[0]; /*0x8922a5*/
    sub_88FEE0((float *)this + 0x7C, v63, v71.m128_f32[0]); /*0x8922b9*/
  }
  sub_8A78E0((LPCRITICAL_SECTION *)unk_BA7DA0, (int)&v74, (int)&v75, v50 ? 0xFF888888 : 0xFFFF0000, 0);
  return v50; /*0x891cf5*/
}
