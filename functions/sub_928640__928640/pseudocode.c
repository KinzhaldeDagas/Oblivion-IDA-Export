_BYTE *__thiscall sub_928640(int this, int a2, int *a3)
{
  long double v5; // st7
  unsigned __int64 v6; // rcx
  long double v7; // st6
  int v8; // edx
  int v9; // eax
  double v10; // st7
  __m128 v11; // xmm0
  float v12; // xmm1_4
  __m128 v13; // xmm3
  int v14; // eax
  __m128 v15; // xmm0
  int v16; // edx
  float v17; // xmm1_4
  __m128 v18; // xmm0
  double v19; // st7
  bool v20; // c0
  bool v21; // c3
  __m128 v22; // xmm0
  _BYTE *result; // eax
  int *v24; // ecx
  int v25; // ebx
  int v26; // ebx
  float v27; // [esp+28h] [ebp-174h]
  float v28; // [esp+28h] [ebp-174h]
  unsigned int v29; // [esp+44h] [ebp-158h]
  char v30; // [esp+4Bh] [ebp-151h] BYREF
  __m128 v31; // [esp+4Ch] [ebp-150h] BYREF
  __m128 v32; // [esp+5Ch] [ebp-140h] BYREF
  __m128 v33; // [esp+6Ch] [ebp-130h] BYREF
  float v34; // [esp+84h] [ebp-118h]
  float v35; // [esp+88h] [ebp-114h]
  __m128 v36; // [esp+8Ch] [ebp-110h] BYREF
  __m128 v37; // [esp+9Ch] [ebp-100h]
  __m128 v38; // [esp+ACh] [ebp-F0h]
  float v39; // [esp+BCh] [ebp-E0h]
  float v40; // [esp+C0h] [ebp-DCh]
  __m128 v41; // [esp+CCh] [ebp-D0h] BYREF
  __m128 v42; // [esp+DCh] [ebp-C0h]
  __m128 v43; // [esp+ECh] [ebp-B0h]
  __m128 v44; // [esp+FCh] [ebp-A0h] BYREF
  __m128 v45; // [esp+10Ch] [ebp-90h]
  __m128 v46; // [esp+11Ch] [ebp-80h] BYREF
  __m128 v47[2]; // [esp+12Ch] [ebp-70h] BYREF
  __m128 v48; // [esp+14Ch] [ebp-50h]
  __m128 v49[4]; // [esp+15Ch] [ebp-40h] BYREF

  sub_8F0F70(a2, a3, *(_DWORD *)(a2 + 0x28), 8);
  sub_8B1F70(v49, *(__m128 **)(a2 + 0x20), (__m128 *)(this + 0x60));
  sub_8B1F70(&v41, *(__m128 **)(a2 + 0x1C), (__m128 *)(this + 0x20));
  HIDWORD(v6) = *(_DWORD *)(a2 + 0x28);
  sub_88FD10(&v31, v49, &v44);
  *(float *)(HIDWORD(v6) + 0x38) = ((double (__thiscall *)(_DWORD, _DWORD, __m128 *, __m128 *))*(_DWORD *)(**(_DWORD **)(this + 0xC) + 0xC))(
                                     *(_DWORD *)(this + 0xC),
                                     *(_DWORD *)(HIDWORD(v6) + 0x38),
                                     &v31,
                                     &v31);
  sub_88FCC0(&v46, v49, &v31);
  (*(void (__thiscall **)(_DWORD, _DWORD, __m128 *))(**(_DWORD **)(this + 0xC) + 0x10))(
    *(_DWORD *)(this + 0xC),
    *(_DWORD *)(HIDWORD(v6) + 0x38),
    &v33);
  sub_88FE00(&v32, v49, &v33);
  v5 = fabs(v32.m128_f32[0]);
  LODWORD(v6) = 0;
  v7 = fabs(v32.m128_f32[1]);
  v8 = 1;
  v35 = v7;
  v34 = fabs(v32.m128_f32[2]);
  if ( v7 < v5 )
  {
    v8 = 0;
    v5 = v35;
    LODWORD(v6) = 1;
  }
  if ( v34 >= v5 )
  {
    v9 = 2;
  }
  else
  {
    v9 = v6;
    LODWORD(v6) = 2;
  }
  v10 = v32.m128_f32[v8];
  v31.m128_i32[v6] = 0;
  LODWORD(v6) = v32.m128_i32[v9];
  v31.m128_i32[3] = 0;
  v31.m128_i32[v8] = v6;
  v31.m128_f32[v9] = -v10;
  v11 = _mm_mul_ps(v31, v31);
  v12 = _mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0];
  v13 = _mm_shuffle_ps(v11, v11, 0xAA);
  LODWORD(v6) = *(_DWORD *)(this + 0xC);
  v14 = *(_DWORD *)(HIDWORD(v6) + 0x38);
  v15 = v13;
  v15.m128_f32[0] = v13.m128_f32[0] + v12;
  v33 = v15;
  v16 = *(_DWORD *)v6;
  v17 = 1.0 / fsqrt(v13.m128_f32[0] + v12);
  v13.m128_f32[0] = 3.0 - (float)((float)(v15.m128_f32[0] * v17) * v17);
  v18 = (__m128)0x3F000000u;
  v18.m128_f32[0] = (float)(0.5 * v17) * v13.m128_f32[0];
  v31 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v31);
  v33 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0xC9), _mm_shuffle_ps(v31, v31, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0xD2), _mm_shuffle_ps(v31, v31, 0xC9)));
  *(float *)&v29 = -((double (__thiscall *)(_DWORD, int))*(_DWORD *)(v16 + 0x1C))(v6, v14);
  v19 = *(float *)(this + 0x10);
  v20 = v19 < *(float *)&SrcStr;
  v21 = v19 == *(float *)&SrcStr;
  v22 = _mm_add_ps(v44, _mm_mul_ps(_mm_shuffle_ps((__m128)v29, (__m128)v29, 0), v32));
  v45 = v22;
  if ( !v20 && !v21 )
  {
    LODWORD(v6) = *(_DWORD *)(this + 0x10);
    v37 = v32;
    v36 = v22;
    v38.m128_u64[0] = v6;
  }
  v47[0] = v44;
  v47[1] = v46;
  v48 = v31;
  sub_8F1790(v47, a2, (__m128 **)a3);
  v48 = v33;
  sub_8F1790(v47, a2, (__m128 **)a3);
  if ( *(char *)(this + 0x14) >= 1 )
  {
    v36 = v32;
    v38 = v43;
    v37 = v42;
    sub_8F1310(&v36, a2, (int)a3);
    v38 = v42;
    v37 = _mm_xor_ps(v43, (__m128)xmmword_A965C0);
    sub_8F1310(&v36, a2, (int)a3);
    if ( *(_BYTE *)(this + 0x14) == 3 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD, __m128 *))(**(_DWORD **)(this + 0xC) + 0x20))(
        *(_DWORD *)(this + 0xC),
        *(_DWORD *)(HIDWORD(v6) + 0x38),
        &v33);
      sub_88FE00(&v31, v49, &v33);
      v36 = v43;
      v38 = _mm_xor_ps(v31, (__m128)xmmword_A965C0);
      v37 = v41;
      sub_8F1310(&v36, a2, (int)a3);
    }
  }
  result = (_BYTE *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 0xC) + 0x24))(
                      *(_DWORD *)(this + 0xC),
                      &v30);
  if ( !*result )
  {
    v24 = *(int **)(this + 0xC);
    v36 = v44;
    v37 = v45;
    v25 = *v24;
    v27 = ((double (__thiscall *)(int *))*(_DWORD *)(*v24 + 0x14))(v24);
    v39 = ((double (__thiscall *)(_DWORD, _DWORD))*(_DWORD *)(v25 + 0x1C))(*(_DWORD *)(this + 0xC), LODWORD(v27));
    v26 = **(_DWORD **)(this + 0xC);
    v28 = ((double (*)(void))*(_DWORD *)(v26 + 0x18))();
    v40 = ((double (__thiscall *)(_DWORD, _DWORD))*(_DWORD *)(v26 + 0x1C))(*(_DWORD *)(this + 0xC), LODWORD(v28));
    v38 = v32;
    return (_BYTE *)sub_8F1970(&v36, a2, a3);
  }
  return result;
}
