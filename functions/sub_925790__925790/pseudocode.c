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

  v3 = *(_DWORD *)(this + 0x24); /*0x925799*/
  v4 = this + 0x44; /*0x9257a3*/
  v29 = this; /*0x9257a8*/
  v30 = v3; /*0x9257ac*/
  if ( (*(_BYTE *)(this + 0x44) & 2) != 0 ) /*0x9257b0*/
  {
    v5 = *(_DWORD *)(this + 0x38); /*0x9257b6*/
    v6 = *(__m128 **)(this + 0x20); /*0x9257b9*/
    if ( v3 - 1 >= 0 ) /*0x9257c1*/
    {
      v26 = *(_DWORD *)(this + 0x24); /*0x9257c8*/
      do /*0x925a3f*/
      {
        if ( (*(_BYTE *)(v5 + 0xF) & 1) != 0 ) /*0x9257d4*/
        {
          v7 = *(_DWORD *)(a2 + 0x24); /*0x9257dd*/
          v8 = *(_DWORD **)(v7 + 0x10); /*0x9257e0*/
          v9 = *(_DWORD *)(v7 + 0x14); /*0x9257e3*/
          v10 = (__m128 *)v8[0x14]; /*0x9257f3*/
          v11 = _mm_sub_ps(*v6, *(__m128 *)(*(_DWORD *)(a2 + 0x14) + 0x40)); /*0x925800*/
          v12 = *(__m128 **)(v9 + 0x50); /*0x925807*/
          v13 = _mm_sub_ps(*v6, *(__m128 *)(*(_DWORD *)(a2 + 0x18) + 0x40)); /*0x925811*/
          v14 = _mm_mul_ps( /*0x925879*/
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
          v24 = v9; /*0x92587c*/
          v32[1] = v9 + 0x14; /*0x9258a0*/
          v23 = _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0] /*0x9258a4*/
              + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]);
          v32[0] = v8 + 5; /*0x9258ac*/
          v32[3] = v6; /*0x9258b7*/
          v32[4] = v5 + 8; /*0x9258bb*/
          v33 = v23; /*0x9258bf*/
          v34 = 1; /*0x9258c3*/
          v27 = v8[2]; /*0x9258d0*/
          sub_8DC890(v27, v27, (int)v32); /*0x9258d4*/
          if ( v8[0x26] ) /*0x9258d9*/
            sub_8DC010((int)v32, (int)v8, (int)v32); /*0x9258ec*/
          v15 = v24; /*0x9258f4*/
          v16 = *(_DWORD *)(v24 + 0x98); /*0x9258f8*/
          if ( v16 ) /*0x925900*/
          {
            sub_8DC010(v16, v24, (int)v32); /*0x925908*/
            v15 = v24; /*0x92590d*/
          }
          v17 = (double)*(unsigned __int8 *)(v5 + 0xE); /*0x925926*/
          v18 = flt_A9A02C * v17; /*0x925930*/
          if ( -*(float *)(*(_DWORD *)(*(_DWORD *)(v27 + 0x74) + 0x24) + 0x40) <= v33 /*0x925959*/
            || (v25 = v18, v25 <= (double)flt_A3744C) )
          {
            *(float *)v5 = fConstant_1 /*0x925a07*/
                         / (*(float *)(v8[0x14] + 0xC0) + *(float *)(*(_DWORD *)(v15 + 0x50) + 0xC0) + flt_A9E034)
                         * (v18 + fConstant_1)
                         * v23
                         * flt_A5AC50;
            v22 = v17 * *(float *)a2 * v23 * flt_A9A02C * flt_A9E030; /*0x925a15*/
            *(float *)(v5 + 4) = v22; /*0x925a1b*/
            *(float *)(v5 + 0x10) = v22 + v6[1].m128_f32[3]; /*0x925a21*/
          }
          else
          {
            v19 = v6[1]; /*0x925967*/
            v28 = *(unsigned __int16 *)(v5 + 0xC); /*0x92596b*/
            v37 = v18; /*0x925977*/
            v38 = v33; /*0x92597b*/
            v20 = *(__m128 **)(a2 + 0x18); /*0x92598d*/
            v21 = *(__m128 **)(a2 + 0x14); /*0x925990*/
            v36 = (double)v28 * flt_A9A028; /*0x925993*/
            v35 = v19; /*0x9259a1*/
            v39 = 0; /*0x9259a6*/
            v40 = 0; /*0x9259b1*/
            sub_91FB20(v6, v35.m128_f32, (int)v8, v15, v21, v20, &v31); /*0x9259bc*/
            *(_DWORD *)v5 = 0; /*0x9259c1*/
            *(_DWORD *)(v5 + 0x10) = v6[1].m128_i32[3]; /*0x9259cd*/
          }
          this = v29; /*0x925a27*/
          *(_BYTE *)(v5 + 0xF) &= ~1u; /*0x925a2d*/
        }
        v6 += 2; /*0x925a34*/
        v5 += 0x14; /*0x925a37*/
        --v26; /*0x925a3b*/
      }
      while ( v26 ); /*0x925a3f*/
      v3 = v30; /*0x925a45*/
    }
    *(_BYTE *)(this + 0x44) &= ~2u; /*0x925a49*/
    v4 = this + 0x44; /*0x925a4d*/
  }
  sub_94FEF0(*(__m128 **)(this + 0x20), v3, *(_DWORD *)(this + 0x38), v4, a2, a3); /*0x925a62*/
}
