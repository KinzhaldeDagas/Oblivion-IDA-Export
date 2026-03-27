bool __thiscall sub_891CC0(__m128 *this, __m128 *a2)
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
  int v86[24]; // [esp+1A4h] [ebp-270h] BYREF
  char v87[524]; // [esp+204h] [ebp-210h] BYREF

  if ( *((_DWORD *)this + 0xDB) == 1 )
    return sub_8919A0(this, a2);
  v4 = a2[2].m128_i32[0];
  if ( *(_BYTE *)(v4 + 0x18) == 2 )
  {
    v5 = v4 + *(_DWORD *)(v4 + 0x10);
    v60 = (__m128 *)v5;
  }
  else
  {
    v60 = 0;
    v5 = 0;
  }
  v6 = a2[2].m128_i32[2];
  if ( *(_BYTE *)(v6 + 0x18) == 1 )
  {
    v7 = v6 + *(_DWORD *)(v6 + 0x10);
    v64 = v7;
  }
  else
  {
    v64 = 0;
    v7 = 0;
  }
  v58 = 1;
  if ( !v5 || !v7 )
    return v58;
  v8 = *(float *)v6;
  v9 = *(_DWORD *)v4;
  v10 = *(int (__thiscall **)(int))(*(_DWORD *)v9 + 8);
  v58 = 0;
  v67 = *(float *)v6;
  if ( v10(v9) == 8 )
  {
    v11 = *(float *)(*(_DWORD *)a2[2].m128_i32[0] + 0xC);
    v68 = *(_DWORD *)a2[2].m128_i32[0];
  }
  else
  {
    v11 = *((float *)this + 0xE8);
    v68 = 0;
  }
  v12 = *(__m128 **)(v7 + 0x50);
  v65 = v11;
  v13 = v12[1];
  ++v12;
  v80[0] = v13;
  v80[1] = v12[1];
  v80[2] = v12[2];
  v14 = v12[3];
  v79 = 1.0;
  v80[3] = v14;
  v15 = *a2;
  v83 = 0;
  v84 = 0;
  v76 = v15;
  v71.m128_i32[0] = _mm_shuffle_ps(v15, v15, 0xAA).m128_u32[0];
  sub_8914C0(this, &v72);
  v16 = 0.0;
  v17 = 0;
  v63 = 0;
  if ( (*((_BYTE *)this + 0x1F4) & 1) != 0 )
  {
    while ( 1 )
    {
      if ( v68 )
      {
        v70 = *(__m128 *)(0x10 * (v17 + 1) + v68);
      }
      else
      {
        v70.m128_f32[0] = v16;
        v70.m128_f32[1] = *((float *)this + 0xE9) * dbl_A2FAA0;
        v70.m128_f32[2] = v65;
        v70.m128_f32[3] = v16;
        if ( v17 == 1 )
          v70.m128_f32[1] = v70.m128_f32[1] * dbl_A3D360;
      }
      v28 = this + v17 + 0x38;
      sub_88FCC0(v28, v60 + 7, &v70);
      v29 = v76;
      v30 = 0x10 * v17;
      v31 = *((float *)this + 0x92) + *((float *)this + 4 * v17++ + 0xE2);
      v32 = v76;
      *(float *)((char *)this + v30 + 0x388) = v31;
      *(__m128 *)((char *)&v74 + v30) = _mm_sub_ps(v32, *v28);
      if ( v17 >= 2 )
        break;
      v16 = 0.0;
    }
    v33 = _mm_mul_ps(v74, v74);
    v34 = _mm_shuffle_ps(v33, v33, 0x55).m128_f32[0] + v33.m128_f32[0];
    v35 = _mm_shuffle_ps(v33, v33, 0xAA).m128_f32[0];
    v36 = _mm_mul_ps(v75, v75);
    v70.m128_f32[0] = v35 + v34;
    *(float *)v69 = _mm_shuffle_ps(v36, v36, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v36, v36, 0x55).m128_f32[0] + v36.m128_f32[0]);
    v63 = *(float *)v69 <= (double)(float)(v35 + v34);
    v8 = v67;
    v37 = 0x10 * (v63 + 0x38);
    v69[0] = this->m128_i32[v37 / 4];
    v72.m128_f32[0] = *(float *)v69;
    v69[0] = _mm_shuffle_ps(*(__m128 *)((char *)this + v37), *(__m128 *)((char *)this + v37), 0x55).m128_i32[0];
    v38 = v60[0xA];
    v72.m128_f32[1] = *(float *)v69;
    v16 = 0.0;
    v18 = _mm_sub_ps(v38, v29);
  }
  else
  {
    v18 = _mm_sub_ps(v72, v76);
  }
  v19 = *(float *)&dword_A46C30;
  v70 = v18;
  v70.m128_f32[2] = v16;
  v20 = *((float *)this + 0x92);
  v21 = _mm_mul_ps(v70, v70);
  v72.m128_f32[2] = v72.m128_f32[2] + v20;
  v21.m128_f32[0] = _mm_shuffle_ps(v21, v21, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0]);
  v22 = 1.0 / fsqrt(v21.m128_f32[0]);
  v23 = v19 - (float)((float)(v21.m128_f32[0] * v22) * v22);
  v24 = 0;
  v24.m128_f32[0] = (float)(flt_A3D65C * v22) * v23;
  v25 = _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), v70);
  v26 = v72;
  v76.m128_f32[2] = _mm_shuffle_ps(v72, v72, 0xAA).m128_f32[0];
  v69[0] = v76.m128_i32[2];
  v70 = v25;
  v59 = 0;
  v61 = v71.m128_f32[0] - v76.m128_f32[2];
  if ( v61 > v16 )
  {
    v27 = v20 / dbl_A30E48;
    if ( v27 >= v61 )
    {
      v59 = 1;
    }
    else
    {
      if ( (*((_BYTE *)this + 0x1F4) & 1) == 0 )
        return 1;
      v62 = v20 + v71.m128_f32[0] - *((float *)this + 4 * v63 + 0xE2);
      if ( v62 > v16 )
      {
        if ( v27 < v62 )
          return 1;
        v59 = 1;
      }
    }
  }
  if ( a2[2].m128_i32[3] == 0xFFFFFFFF )
  {
LABEL_47:
    v52 = *((float *)this + 0x93);
    v73.m128_u64[1] = v26.m128_u64[1];
    v53 = _mm_shuffle_ps(v25, v25, 0x55).m128_f32[0];
    v67 = v52 + v65;
    v73.m128_f32[0] = v26.m128_f32[0] - v25.m128_f32[0] * v67;
    v73.m128_f32[1] = v26.m128_f32[1] - v53 * v67;
    v71.m128_f32[0] = v53;
    v72.m128_f32[0] = v25.m128_f32[0] * v67 + v72.m128_f32[0];
    v72.m128_f32[1] = v67 * v53 + v72.m128_f32[1];
    sub_88FD10(&v81, v80, &v72);
    sub_88FD10(&v82, v80, &v73);
    (*(void (__thiscall **)(float, char *, __m128 *, __m128 *))(*(_DWORD *)LODWORD(v8) + 0x14))(
      COERCE_FLOAT(LODWORD(v8)),
      &v66,
      &v81,
      &v77);
    if ( v79 >= 1.0 )
      goto LABEL_61;
    if ( v78 != a2[2].m128_i32[3]
      && (sub_88FE00(&v71, v80, &v77),
          _mm_movemask_ps(
            _mm_cmplt_ps(
              _mm_shuffle_ps((__m128)LODWORD(flt_A34BA0), (__m128)LODWORD(flt_A34BA0), 0),
              _mm_and_ps(_mm_sub_ps(v71, v70), (__m128)xmmword_A372D0)))) )
    {
      if ( v59 )
        v58 = 1;
    }
    else
    {
      v54 = *(_DWORD **)(LODWORD(v8) + 8);
      v58 = 1;
      if ( v54 )
      {
        if ( v78 == 0xFFFFFFFF || (v55 = (*(int (__thiscall **)(_DWORD *))(*v54 + 0x88))(v54)) == 0 )
          v56 = v54[4];
        else
          v56 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v55 + 0x9C))(v55, v78);
        if ( (unsigned int)(v56 - 0xF) <= 0xD )
          v58 = 0;
      }
    }
    if ( v79 >= 1.0 )
LABEL_61:
      v57 = 0;
    else
      v57 = 1;
    sub_8A78E0((LPCRITICAL_SECTION *)dword_BA7DA0, (int)&v72, (int)&v73, v57 != 0 ? 0xFF888888 : 0xFFFF0000, 0);
    if ( (*((_BYTE *)this + 0x1F4) & 1) != 0 && !v58 )
    {
      v71.m128_f32[0] = _mm_shuffle_ps(*a2, *a2, 0xAA).m128_f32[0];
      sub_88FEE0((float *)this + 0x7C, v63, v71.m128_f32[0]);
    }
    return v58;
  }
  v39 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v8) + 8))(COERCE_FLOAT(LODWORD(v8)));
  v40 = v8;
  if ( v39 == 0x18 )
  {
    v40 = *(float *)(LODWORD(v8) + 0xC);
    v39 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v40) + 8))(COERCE_FLOAT(LODWORD(v40)));
  }
  if ( v39 != 0x10 )
  {
    v26 = v72;
    v25 = v70;
    goto LABEL_47;
  }
  v41 = (*(int (__thiscall **)(float, __int32, char *))(*(_DWORD *)LODWORD(v40) + 0x28))(
          COERCE_FLOAT(LODWORD(v40)),
          a2[2].m128_i32[3],
          v87);
  v42 = *(__m128 **)(v64 + 0x50);
  v43 = v42[1];
  v44 = v42[2];
  v45 = v42[3];
  v46 = v42[4];
  v47 = (__m128 *)(v41 + 0x10);
  for ( i = 3; i > 0; --i )
  {
    *(__m128 *)((char *)&v85[0xFFFFFFFF] + (_DWORD)v47 - v41) = _mm_add_ps(
                                                                  _mm_add_ps(
                                                                    _mm_mul_ps(_mm_shuffle_ps(*v47, *v47, 0x55), v44),
                                                                    _mm_mul_ps(_mm_shuffle_ps(*v47, *v47, 0), v43)),
                                                                  _mm_add_ps(
                                                                    _mm_mul_ps(_mm_shuffle_ps(*v47, *v47, 0xAA), v45),
                                                                    v46));
    ++v47;
  }
  sub_8D1EF0(v85, (float *)v69);
  v49 = *((float *)this + 0x93);
  v75.m128_u64[1] = v76.m128_u64[1];
  v74 = v76;
  v71.m128_f32[0] = _mm_shuffle_ps(v70, v70, 0x55).m128_f32[0];
  v75.m128_f32[0] = v76.m128_f32[0] - v70.m128_f32[0] * v49;
  v75.m128_f32[1] = v76.m128_f32[1] - v49 * v71.m128_f32[0];
  sub_8D0CA0((int)&v74, flt_A3D65C, (int)v85, *(float *)(v41 + 0xC), (int)v69, 0.0, 0, (int)v86);
  if ( *(float *)&v86[7] < 0.0 || *(float *)&v86[0xF] < 0.0 )
  {
    v51 = *(_DWORD *)(LODWORD(v40) + 8);
    v50 = 1;
    if ( v51 )
      v50 = (unsigned int)((*(int (__thiscall **)(int, __int32))(*(_DWORD *)v51 + 0x9C))(v51, a2[2].m128_i32[3]) - 0xF) > 0xE;
  }
  else
  {
    v50 = v59 != 0;
  }
  if ( (*((_BYTE *)this + 0x1F4) & 1) != 0 && !v50 )
  {
    v71.m128_f32[0] = _mm_shuffle_ps(*a2, *a2, 0xAA).m128_f32[0];
    sub_88FEE0((float *)this + 0x7C, v63, v71.m128_f32[0]);
  }
  sub_8A78E0((LPCRITICAL_SECTION *)dword_BA7DA0, (int)&v74, (int)&v75, v50 ? 0xFF888888 : 0xFFFF0000, 0);
  return v50;
}
