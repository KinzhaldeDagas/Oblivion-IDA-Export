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
  double v23; // st7
  double v24; // st7
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

  sub_8F0F70(a2, a3, *(_DWORD *)(a2 + 0x28), 8);
  v4 = *(__m128 **)(a2 + 0x1C);
  v5 = *v4;
  v6 = v4[1];
  v7 = v4[2];
  v8 = this + 2;
  v9 = 4;
  do
  {
    *(__m128 *)((char *)v8 + (char *)&v51 - (char *)(this + 2)) = _mm_add_ps(
                                                                    _mm_add_ps(
                                                                      _mm_mul_ps(v5, _mm_shuffle_ps(*v8, *v8, 0)),
                                                                      _mm_mul_ps(v6, _mm_shuffle_ps(*v8, *v8, 0x55))),
                                                                    _mm_mul_ps(v7, _mm_shuffle_ps(*v8, *v8, 0xAA)));
    ++v8;
    --v9;
  }
  while ( v9 );
  v10 = v4[3];
  v11 = *(__m128 **)(a2 + 0x20);
  v51 = _mm_add_ps(v51, v10);
  v12 = *v11;
  v13 = v11[1];
  v14 = v11[2];
  v15 = this + 6;
  v16 = 3;
  do
  {
    *(__m128 *)((char *)v15 + (char *)&v55 - (char *)(this + 6)) = _mm_add_ps(
                                                                     _mm_add_ps(
                                                                       _mm_mul_ps(v12, _mm_shuffle_ps(*v15, *v15, 0)),
                                                                       _mm_mul_ps(v13, _mm_shuffle_ps(*v15, *v15, 0x55))),
                                                                     _mm_mul_ps(v14, _mm_shuffle_ps(*v15, *v15, 0xAA)));
    ++v15;
    --v16;
  }
  while ( v16 );
  v17 = _mm_add_ps(v55, v11[3]);
  v49 = v53;
  v48 = v54;
  v55 = v17;
  v50 = v56;
  sub_8F1310(&v48, a2, (int)a3);
  v49 = v54;
  v48 = v53;
  v50 = _mm_xor_ps(v56, (__m128)xmmword_A965C0);
  sub_8F1310(&v48, a2, (int)a3);
  sub_8F1CC0(&v51, &v55, a2, (__m128 **)a3);
  v18 = this->m128_i32[3];
  v44 = v52;
  v19 = *((_DWORD *)this + 4);
  v20 = *(_DWORD *)(a2 + 0x28);
  v21 = _mm_mul_ps(v57, v53);
  v42 = _mm_shuffle_ps(v21, v21, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0]);
  v22 = _mm_mul_ps(
          _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v57, v57, 0xC9), _mm_shuffle_ps(v56, v56, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v57, v57, 0xD2), _mm_shuffle_ps(v56, v56, 0xC9))),
          v53);
  v45 = v18;
  v43 = _mm_shuffle_ps(v22, v22, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v22, v22, 0x55).m128_f32[0] + v22.m128_f32[0]);
  v34 = -v43;
  v46 = v19;
  v33 = -v42;
  v23 = sub_8ECBB0(v33, v34) + flt_A9DF9C;
  v47 = v23;
  v24 = v23 - *(float *)(v20 + 0x38);
  if ( v24 < flt_A9CD68 )
  {
    v25 = *(float *)(v20 + 0x3C) + fConstant_1;
LABEL_9:
    *(float *)(v20 + 0x3C) = v25;
    goto LABEL_10;
  }
  if ( v24 > flt_A9DF9C )
  {
    v25 = *(float *)(v20 + 0x3C) - fConstant_1;
    goto LABEL_9;
  }
LABEL_10:
  v26 = *(float *)(v20 + 0x3C) * flt_A46B14;
  *(float *)(v20 + 0x38) = v47;
  v27 = *((_DWORD *)this + 0x26);
  v47 = v26 + v47;
  if ( v27 && *((_BYTE *)this + 0x90) )
  {
    v28 = (__m128 *)*a3;
    v39 = 0;
    v40 = 0;
    sub_8F1070(&v52, a2, v28, (float *)&v35);
    v29 = *(_DWORD *)(v20 + 0x2C);
    v39 = *(_DWORD *)(v20 + 0x28);
    v37 = *((_DWORD *)this + 0x25);
    v40 = v29;
    v30 = *((_DWORD *)this + 0x26);
    v38 = a2;
    v36 = v47;
    v41 = v20 + 0x40;
    (*(void (__thiscall **)(int, __m128 **, __m128 *))(*(_DWORD *)v30 + 8))(v30, &v35, &v48);
    sub_8F0FB0((int)&v48, (float *)a2, a3);
  }
  else if ( *((float *)this + 5) != *(float *)&SrcStr )
  {
    v31 = *((_DWORD *)this + 5);
    v35 = &v52;
    v37 = v31;
    v38 = 1;
    LODWORD(v36) = v20 + 0x28;
    sub_8F1460((int)&v35, a2, (int)a3);
  }
  result = *((_BYTE *)this + 0x91);
  if ( !result )
    return (unsigned __int8)sub_8F1B60(&v44, a2, (int)a3);
  return result;
}
