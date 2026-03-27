void __thiscall sub_925790(int this, int a2, int *a3)
{
  signed int v3; // edx
  int v4; // eax
  int v5; // ebx
  __m128 *v6; // edi
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  __m128 *v10; // ecx
  __m128 v11; // xmm0
  __m128 *v12; // edx
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  int v15; // ecx
  int v16; // eax
  double v17; // st7
  double v18; // st6
  __m128 v19; // xmm0
  __m128 *v20; // edx
  __m128 *v21; // eax
  double v22; // st7
  float v23; // [esp+18h] [ebp-68h]
  int v24; // [esp+1Ch] [ebp-64h]
  float v25; // [esp+1Ch] [ebp-64h]
  int v26; // [esp+20h] [ebp-60h]
  int v27; // [esp+24h] [ebp-5Ch]
  int v28; // [esp+24h] [ebp-5Ch]
  int v29; // [esp+28h] [ebp-58h]
  signed int v30; // [esp+2Ch] [ebp-54h]
  float v31; // [esp+30h] [ebp-50h] BYREF
  _DWORD v32[5]; // [esp+34h] [ebp-4Ch] BYREF
  float v33; // [esp+48h] [ebp-38h]
  int v34; // [esp+4Ch] [ebp-34h]
  __m128 v35; // [esp+50h] [ebp-30h] BYREF
  float v36; // [esp+60h] [ebp-20h]
  float v37; // [esp+64h] [ebp-1Ch]
  float v38; // [esp+68h] [ebp-18h]
  int v39; // [esp+6Ch] [ebp-14h]
  int v40; // [esp+70h] [ebp-10h]

  v3 = *(_DWORD *)(this + 0x24);
  v4 = this + 0x44;
  v29 = this;
  v30 = v3;
  if ( (*(_BYTE *)(this + 0x44) & 2) != 0 )
  {
    v5 = *(_DWORD *)(this + 0x38);
    v6 = *(__m128 **)(this + 0x20);
    if ( v3 - 1 >= 0 )
    {
      v26 = *(_DWORD *)(this + 0x24);
      do
      {
        if ( (*(_BYTE *)(v5 + 0xF) & 1) != 0 )
        {
          v7 = *(_DWORD *)(a2 + 0x24);
          v8 = *(_DWORD **)(v7 + 0x10);
          v9 = *(_DWORD *)(v7 + 0x14);
          v10 = (__m128 *)v8[0x14];
          v11 = _mm_sub_ps(*v6, *(__m128 *)(*(_DWORD *)(a2 + 0x14) + 0x40));
          v12 = *(__m128 **)(v9 + 0x50);
          v13 = _mm_sub_ps(*v6, *(__m128 *)(*(_DWORD *)(a2 + 0x18) + 0x40));
          v14 = _mm_mul_ps(
                  _mm_sub_ps(
                    _mm_add_ps(
                      _mm_sub_ps(
                        _mm_mul_ps(_mm_shuffle_ps(v10[0xE], v10[0xE], 0xC9), _mm_shuffle_ps(v11, v11, 0xD2)),
                        _mm_mul_ps(_mm_shuffle_ps(v10[0xE], v10[0xE], 0xD2), _mm_shuffle_ps(v11, v11, 0xC9))),
                      v10[0xD]),
                    _mm_add_ps(
                      _mm_sub_ps(
                        _mm_mul_ps(_mm_shuffle_ps(v12[0xE], v12[0xE], 0xC9), _mm_shuffle_ps(v13, v13, 0xD2)),
                        _mm_mul_ps(_mm_shuffle_ps(v12[0xE], v12[0xE], 0xD2), _mm_shuffle_ps(v13, v13, 0xC9))),
                      v12[0xD])),
                  v6[1]);
          v24 = v9;
          v32[1] = v9 + 0x14;
          v23 = _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]);
          v32[0] = v8 + 5;
          v32[3] = v6;
          v32[4] = v5 + 8;
          v33 = v23;
          v34 = 1;
          v27 = v8[2];
          sub_8DC890(v27, v27, (int)v32);
          if ( v8[0x26] )
            sub_8DC010((int)v32, (int)v8, (int)v32);
          v15 = v24;
          v16 = *(_DWORD *)(v24 + 0x98);
          if ( v16 )
          {
            sub_8DC010(v16, v24, (int)v32);
            v15 = v24;
          }
          v17 = (double)*(unsigned __int8 *)(v5 + 0xE);
          v18 = flt_A9A02C * v17;
          if ( -*(float *)(*(_DWORD *)(*(_DWORD *)(v27 + 0x74) + 0x24) + 0x40) <= v33
            || (v25 = v18, v25 <= (double)flt_A3744C) )
          {
            *(float *)v5 = fConstant_1
                         / (*(float *)(v8[0x14] + 0xC0) + *(float *)(*(_DWORD *)(v15 + 0x50) + 0xC0) + flt_A9E034)
                         * (v18 + fConstant_1)
                         * v23
                         * flt_A5AC50;
            v22 = v17 * *(float *)a2 * v23 * flt_A9A02C * flt_A9E030;
            *(float *)(v5 + 4) = v22;
            *(float *)(v5 + 0x10) = v22 + v6[1].m128_f32[3];
          }
          else
          {
            v19 = v6[1];
            v28 = *(unsigned __int16 *)(v5 + 0xC);
            v37 = v18;
            v38 = v33;
            v20 = *(__m128 **)(a2 + 0x18);
            v21 = *(__m128 **)(a2 + 0x14);
            v36 = (double)v28 * flt_A9A028;
            v35 = v19;
            v39 = 0;
            v40 = 0;
            sub_91FB20(v6, v35.m128_f32, (int)v8, v15, v21, v20, &v31);
            *(_DWORD *)v5 = 0;
            *(_DWORD *)(v5 + 0x10) = v6[1].m128_i32[3];
          }
          this = v29;
          *(_BYTE *)(v5 + 0xF) &= ~1u;
        }
        v6 += 2;
        v5 += 0x14;
        --v26;
      }
      while ( v26 );
      v3 = v30;
    }
    *(_BYTE *)(this + 0x44) &= ~2u;
    v4 = this + 0x44;
  }
  sub_94FEF0(*(__m128 **)(this + 0x20), v3, *(_DWORD *)(this + 0x38), v4, a2, a3);
}
