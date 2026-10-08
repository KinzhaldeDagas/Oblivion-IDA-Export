unsigned __int8 __thiscall sub_924A60(__m128 *this, int a2, int *a3)
{
  __m128 *v4; // ecx
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 *v8; // eax
  int v9; // ebx
  __m128 v10; // xmm0
  __m128 *v11; // ecx
  __m128 v12; // xmm1
  __m128 v13; // xmm2
  __m128 v14; // xmm3
  __m128 *v15; // eax
  int v16; // ebx
  __m128 v17; // xmm1
  __int32 v18; // eax
  int v19; // ecx
  int v20; // ebx
  __m128 v21; // xmm0
  __m128 v22; // xmm0
  long double v23; // st7
  long double v24; // st7
  double v25; // st7
  double v26; // st7
  int v27; // eax
  __m128 *v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  unsigned __int8 result; // al
  float v33; // [esp+0h] [ebp-F8h]
  float v34; // [esp+4h] [ebp-F4h]
  __m128 *v35; // [esp+14h] [ebp-E4h] BYREF
  float v36; // [esp+18h] [ebp-E0h]
  int v37; // [esp+1Ch] [ebp-DCh]
  int v38; // [esp+20h] [ebp-D8h]
  int v39; // [esp+24h] [ebp-D4h]
  int v40; // [esp+28h] [ebp-D0h]
  int v41; // [esp+2Ch] [ebp-CCh]
  float v42; // [esp+30h] [ebp-C8h]
  float v43; // [esp+34h] [ebp-C4h]
  __m128 v44; // [esp+38h] [ebp-C0h] BYREF
  __int32 v45; // [esp+48h] [ebp-B0h]
  int v46; // [esp+4Ch] [ebp-ACh]
  float v47; // [esp+50h] [ebp-A8h]
  __m128 v48; // [esp+58h] [ebp-A0h] BYREF
  __m128 v49; // [esp+68h] [ebp-90h]
  __m128 v50; // [esp+78h] [ebp-80h]
  __m128 v51; // [esp+88h] [ebp-70h] BYREF
  __m128 v52; // [esp+98h] [ebp-60h] BYREF
  __m128 v53; // [esp+A8h] [ebp-50h]
  __m128 v54; // [esp+B8h] [ebp-40h]
  __m128 v55; // [esp+C8h] [ebp-30h] BYREF
  __m128 v56; // [esp+D8h] [ebp-20h]
  __m128 v57; // [esp+E8h] [ebp-10h]

  sub_8F0F70(a2, a3, *(_DWORD *)(a2 + 0x28), 8); /*0x924a7f*/
  v4 = *(__m128 **)(a2 + 0x1C); /*0x924a84*/
  v5 = *v4; /*0x924a87*/
  v6 = v4[1]; /*0x924a8a*/
  v7 = v4[2]; /*0x924a8e*/
  v8 = this + 2; /*0x924a92*/
  v9 = 4; /*0x924aa1*/
  do /*0x924ade*/
  {
    *(__m128 *)((char *)v8 + (char *)&v51 - (char *)(this + 2)) = _mm_add_ps( /*0x924ad6*/
                                                                    _mm_add_ps(
                                                                      _mm_mul_ps(v5, _mm_shuffle_ps(*v8, *v8, 0)),
                                                                      _mm_mul_ps(v6, _mm_shuffle_ps(*v8, *v8, 0x55))),
                                                                    _mm_mul_ps(v7, _mm_shuffle_ps(*v8, *v8, 0xAA)));
    ++v8; /*0x924ada*/
    --v9; /*0x924add*/
  }
  while ( v9 ); /*0x924ade*/
  v10 = v4[3]; /*0x924ae0*/
  v11 = *(__m128 **)(a2 + 0x20); /*0x924aec*/
  v51 = _mm_add_ps(v51, v10); /*0x924af2*/
  v12 = *v11; /*0x924afa*/
  v13 = v11[1]; /*0x924afd*/
  v14 = v11[2]; /*0x924b01*/
  v15 = this + 6; /*0x924b05*/
  v16 = 3; /*0x924b11*/
  do /*0x924b4e*/
  {
    *(__m128 *)((char *)v15 + (char *)&v55 - (char *)(this + 6)) = _mm_add_ps( /*0x924b46*/
                                                                     _mm_add_ps(
                                                                       _mm_mul_ps(v12, _mm_shuffle_ps(*v15, *v15, 0)),
                                                                       _mm_mul_ps(v13, _mm_shuffle_ps(*v15, *v15, 0x55))),
                                                                     _mm_mul_ps(v14, _mm_shuffle_ps(*v15, *v15, 0xAA)));
    ++v15; /*0x924b4a*/
    --v16; /*0x924b4d*/
  }
  while ( v16 ); /*0x924b4e*/
  v17 = _mm_add_ps(v55, v11[3]); /*0x924b5f*/
  v49 = v53; /*0x924b6a*/
  v48 = v54; /*0x924b7c*/
  v55 = v17; /*0x924b8b*/
  v50 = v56; /*0x924b93*/
  sub_8F1310(&v48, a2, (int)a3); /*0x924b98*/
  v49 = v54; /*0x924bad*/
  v48 = v53; /*0x924bbb*/
  v50 = _mm_xor_ps(v56, (__m128)xmmword_A965C0); /*0x924bd0*/
  sub_8F1310(&v48, a2, (int)a3); /*0x924bd8*/
  sub_8F1CC0(&v51, &v55, a2, (__m128 **)a3); /*0x924bef*/
  v18 = this->m128_i32[3]; /*0x924c0c*/
  v44 = v52; /*0x924c0f*/
  v19 = *((_DWORD *)this + 4); /*0x924c14*/
  v20 = *(_DWORD *)(a2 + 0x28); /*0x924c17*/
  v21 = _mm_mul_ps(v57, v53); /*0x924c1d*/
  v42 = _mm_shuffle_ps(v21, v21, 0xAA).m128_f32[0] /*0x924c49*/
      + (float)(_mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0]);
  v22 = _mm_mul_ps( /*0x924c6b*/
          _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v57, v57, 0xC9), _mm_shuffle_ps(v56, v56, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v57, v57, 0xD2), _mm_shuffle_ps(v56, v56, 0xC9))),
          v53);
  v45 = v18; /*0x924c71*/
  v43 = _mm_shuffle_ps(v22, v22, 0xAA).m128_f32[0] /*0x924c8c*/
      + (float)(_mm_shuffle_ps(v22, v22, 0x55).m128_f32[0] + v22.m128_f32[0]);
  v34 = -v43; /*0x924c99*/
  v46 = v19; /*0x924c9d*/
  v33 = -v42; /*0x924ca7*/
  v23 = sub_8ECBB0(v33, v34) + flt_A9DF9C; /*0x924caf*/
  v47 = v23; /*0x924cb8*/
  v24 = v23 - *(float *)(v20 + 0x38); /*0x924cbc*/
  if ( v24 < flt_A9CD68 ) /*0x924cca*/
  {
    v25 = *(float *)(v20 + 0x3C) + fConstant_1; /*0x924cd1*/
LABEL_9:
    *(float *)(v20 + 0x3C) = v25; /*0x924cef*/
    goto LABEL_10; /*0x924cef*/
  }
  if ( v24 > flt_A9DF9C ) /*0x924ce4*/
  {
    v25 = *(float *)(v20 + 0x3C) - fConstant_1; /*0x924ce9*/
    goto LABEL_9; /*0x924ce9*/
  }
LABEL_10:
  v26 = *(float *)(v20 + 0x3C) * flt_A46B14; /*0x924cf2*/
  *(float *)(v20 + 0x38) = v47; /*0x924cff*/
  v27 = *((_DWORD *)this + 0x26); /*0x924d02*/
  v47 = v26 + v47; /*0x924d0e*/
  if ( v27 && *((_BYTE *)this + 0x90) ) /*0x924d18*/
  {
    v28 = (__m128 *)*a3; /*0x924d25*/
    v39 = 0; /*0x924d36*/
    v40 = 0; /*0x924d3e*/
    sub_8F1070(&v52, a2, v28, (float *)&v35); /*0x924d46*/
    v29 = *(_DWORD *)(v20 + 0x2C); /*0x924d4e*/
    v39 = *(_DWORD *)(v20 + 0x28); /*0x924d55*/
    v37 = *((_DWORD *)this + 0x25); /*0x924d5f*/
    v40 = v29; /*0x924d6a*/
    v30 = *((_DWORD *)this + 0x26); /*0x924d6e*/
    v38 = a2; /*0x924d7c*/
    v36 = v47; /*0x924d80*/
    v41 = v20 + 0x40; /*0x924d84*/
    (*(void (__thiscall **)(int, __m128 **, __m128 *))(*(_DWORD *)v30 + 8))(v30, &v35, &v48); /*0x924d8b*/
    sub_8F0FB0((int)&v48, (float *)a2, a3); /*0x924d98*/
  }
  else if ( *((float *)this + 5) != *(float *)&SrcStr ) /*0x924daf*/
  {
    v31 = *((_DWORD *)this + 5); /*0x924db4*/
    v35 = &v52; /*0x924dbf*/
    v37 = v31; /*0x924dcc*/
    v38 = 1; /*0x924dd0*/
    LODWORD(v36) = v20 + 0x28; /*0x924dd8*/
    sub_8F1460((int)&v35, a2, (int)a3); /*0x924ddc*/
  }
  result = *((_BYTE *)this + 0x91); /*0x924de4*/
  if ( !result ) /*0x924dec*/
    return (unsigned __int8)sub_8F1B60(&v44, a2, (int)a3); /*0x924df8*/
  return result; /*0x924e00*/
}
