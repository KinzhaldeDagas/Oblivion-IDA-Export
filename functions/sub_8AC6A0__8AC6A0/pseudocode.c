int __thiscall sub_8AC6A0(__m128 *this, int a2, __m128 *a3)
{
  int result; // eax
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // edi
  int v13; // ecx
  _DWORD *v14; // edi
  int i; // edi
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  __m128 *v19; // ecx
  int v20; // edi
  int v21; // edx
  __m128 v22; // xmm4
  __m128 v23; // xmm2
  __m128 *v24; // eax
  __m128 v25; // xmm0
  __m128 v26; // xmm0
  double v27; // st7
  bool v28; // c0
  __m128 v29; // xmm1
  __m128 v30; // xmm0
  __m128 v31; // xmm0
  double v32; // st7
  __m128 v33; // xmm0
  double v34; // st7
  int j; // ebx
  int v36; // ecx
  bool v37; // cc
  float v38; // [esp+18h] [ebp-D8h]
  unsigned int v39; // [esp+18h] [ebp-D8h]
  float v40; // [esp+1Ch] [ebp-D4h]
  int v41; // [esp+20h] [ebp-D0h]
  int v42; // [esp+28h] [ebp-C8h]
  float v43; // [esp+2Ch] [ebp-C4h]
  int v44; // [esp+30h] [ebp-C0h]
  __m128 v45; // [esp+40h] [ebp-B0h] BYREF
  __m128 v46; // [esp+50h] [ebp-A0h]
  float v47; // [esp+60h] [ebp-90h]
  int v48; // [esp+64h] [ebp-8Ch]
  float v49; // [esp+68h] [ebp-88h]
  float v50; // [esp+6Ch] [ebp-84h]
  int v51; // [esp+70h] [ebp-80h]
  _DWORD v52[7]; // [esp+74h] [ebp-7Ch] BYREF
  __m128 v53; // [esp+90h] [ebp-60h] BYREF
  __m128 v54; // [esp+A0h] [ebp-50h] BYREF
  __m128 v55; // [esp+B0h] [ebp-40h] BYREF
  __m128 v56[3]; // [esp+C0h] [ebp-30h] BYREF

  result = *((_DWORD *)this + 0x1E);
  v5 = 0;
  v48 = *(_DWORD *)(a2 + 8);
  v41 = 0;
  if ( result > 0 )
  {
    v42 = 0;
    do
    {
      v6 = *(_DWORD *)(v5 + *((_DWORD *)this + 0x1D) + 0x28);
      v7 = *(_DWORD *)(v6 + 0x10);
      v8 = *(_DWORD *)(v7 + v6 + 0x48);
      v9 = v6 + v7;
      v10 = 0;
      if ( v8 > 0 )
      {
        v11 = *(_DWORD **)(v9 + 0x44);
        v12 = v11;
        while ( *v12 != 0x1300 )
        {
          ++v10;
          v12 += 4;
          if ( v10 >= v8 )
            goto LABEL_17;
        }
        v13 = 0;
        v14 = v11;
        while ( *v14 != 0x1300 )
        {
          ++v13;
          v14 += 4;
          if ( v13 >= v8 )
          {
            v44 = 0;
            goto LABEL_13;
          }
        }
        v44 = v11[4 * v13 + 2];
LABEL_13:
        for ( i = *((_DWORD *)this + 0x21) - 1; i >= 0; --i )
        {
          v16 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * i);
          if ( v16 )
            (*(void (__thiscall **)(int, __m128 *, int, int))(*(_DWORD *)v16 + 0x10))(
              v16,
              this,
              v44,
              v5 + *((_DWORD *)this + 0x1D));
        }
      }
LABEL_17:
      v17 = *((_DWORD *)this + 0x1D);
      v18 = *(_DWORD *)(v17 + v5 + 0x28);
      v19 = (__m128 *)(v5 + v17);
      if ( *(_BYTE *)(v18 + 0x18) == 1 )
      {
        v20 = v18 + *(_DWORD *)(v18 + 0x10);
        if ( v20 )
        {
          if ( !*(_BYTE *)(v20 + 0x92) )
          {
            v21 = *((_DWORD *)this + 0x1D);
            v45 = *v19;
            v22 = *(this + 1);
            v45.m128_i32[3] = *(_DWORD *)(v5 + v21 + 0x1C);
            v23 = *(__m128 *)(v5 + v21 + 0x10);
            v46 = v23;
            v51 = v20;
            v24 = *(__m128 **)(v20 + 0x50);
            v25 = _mm_sub_ps(v45, v24[6]);
            v26 = _mm_mul_ps(
                    _mm_sub_ps(
                      _mm_add_ps(
                        _mm_sub_ps(
                          _mm_mul_ps(_mm_shuffle_ps(v24[0xE], v24[0xE], 0xC9), _mm_shuffle_ps(v25, v25, 0xD2)),
                          _mm_mul_ps(_mm_shuffle_ps(v24[0xE], v24[0xE], 0xD2), _mm_shuffle_ps(v25, v25, 0xC9))),
                        v24[0xD]),
                      v22),
                    v23);
            v43 = _mm_shuffle_ps(v26, v26, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v26, v26, 0x55).m128_f32[0] + v26.m128_f32[0]);
            v27 = v43 * flt_A97BDC;
            v49 = v43;
            v38 = v27;
            if ( v45.m128_f32[3] < (double)*(float *)&SrcStr )
            {
              v27 = v27 + v45.m128_f32[3] * *(float *)(a2 + 0xC) * flt_A47E6C;
              v38 = v27;
            }
            v28 = v27 < *(float *)&SrcStr;
            v29 = 0;
            v53 = v45;
            *(_OWORD *)&v52[3] = 0;
            if ( v28 )
            {
              (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v20 + 0x50) + 0x3C))(
                *(_DWORD *)(v20 + 0x50),
                v56);
              v30 = _mm_sub_ps(v45, *(__m128 *)(*(_DWORD *)(v20 + 0x50) + 0x60));
              v54 = _mm_sub_ps(
                      _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0xC9), _mm_shuffle_ps(v46, v46, 0xD2)),
                      _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0xD2), _mm_shuffle_ps(v46, v46, 0xC9)));
              sub_88FE00(&v55, v56, &v54);
              v31 = _mm_mul_ps(v55, v54);
              v50 = _mm_shuffle_ps(v31, v31, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v31, v31, 0x55).m128_f32[0] + v31.m128_f32[0]);
              v50 = v50 + *(float *)(*(_DWORD *)(v20 + 0x50) + 0xC0);
              v47 = v38 / v50;
              v32 = -(*((float *)this + 0x1B) * *(float *)(a2 + 8));
              if ( v47 < v32 )
                v47 = v32;
              v23 = v46;
              v29 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v47), (__m128)LODWORD(v47), 0), v46);
              *(__m128 *)&v52[3] = v29;
            }
            else
            {
              v47 = 0.0;
              v50 = *(float *)(*(_DWORD *)(v20 + 0x50) + 0xC0);
            }
            v33 = _mm_mul_ps(
                    _mm_mul_ps(
                      _mm_shuffle_ps((__m128)*(unsigned int *)(a2 + 8), (__m128)*(unsigned int *)(a2 + 8), 0),
                      *a3),
                    v23);
            v40 = _mm_shuffle_ps(v33, v33, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v33, v33, 0x55).m128_f32[0] + v33.m128_f32[0]);
            v34 = v40;
            if ( v49 < (double)*(float *)&SrcStr )
              v34 = v40 - v49;
            if ( v34 < flt_A97BD8 )
            {
              *(float *)&v39 = v34 * *((float *)this + 0x1C);
              *(__m128 *)&v52[3] = _mm_add_ps(v29, _mm_mul_ps(_mm_shuffle_ps((__m128)v39, (__m128)v39, 0), v23));
            }
            for ( j = *((_DWORD *)this + 0x21) - 1; j >= 0; --j )
            {
              v36 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * j);
              if ( v36 )
                (*(void (__thiscall **)(int, __m128 *, __m128 *, _DWORD *))(*(_DWORD *)v36 + 0x14))(
                  v36,
                  this,
                  &v45,
                  &v52[3]);
            }
            sub_8A6410(v20);
            (*(void (__thiscall **)(_DWORD, _DWORD *, __m128 *))(**(_DWORD **)(v20 + 0x50) + 0x60))(
              *(_DWORD *)(v20 + 0x50),
              &v52[3],
              &v53);
            v5 = v42;
          }
        }
      }
      result = v41 + 1;
      v5 += 0x30;
      v37 = ++v41 < *((_DWORD *)this + 0x1E);
      v42 = v5;
    }
    while ( v37 );
  }
  return result;
}
