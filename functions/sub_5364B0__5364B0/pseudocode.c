void __cdecl sub_5364B0(int a1, __m128 *a2, float a3)
{
  int BhkCollisionObject; // eax
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  __m128 v8; // xmm1
  int v9; // esi
  __m128 v10; // xmm0
  float v11; // xmm2_4
  float v12; // xmm3_4
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  int v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // esi
  int i; // eax
  __m128 v20[2]; // [esp+18h] [ebp-24h] BYREF

  if ( a1 ) /*0x5364cf*/
  {
    BhkCollisionObject = NiAVObject_GetBhkCollisionObject(a1); /*0x5364d6*/
    if ( BhkCollisionObject ) /*0x5364e0*/
    {
      v4 = *(_DWORD **)(BhkCollisionObject + 0x10); /*0x5364e6*/
      if ( v4 ) /*0x5364eb*/
      {
        v5 = v4[2]; /*0x5364f1*/
        if ( v5 && (v6 = v5 + 0x14) != 0 ) /*0x5364fb*/
          v7 = *(_DWORD *)(v6 + 0x1C); /*0x5364fd*/
        else
          v7 = 0; /*0x536502*/
        v20[0].m128_f32[0] = *(float *)(4 * ((v7 >> 8) & 0x1F) + 0xB11760) * a3; /*0x536523*/
        (*(void (__thiscall **)(_DWORD *, __int16 *))(*v4 + 0xA8))(v4, &v20[0].m128_i16[2]); /*0x536527*/
        v8 = _mm_sub_ps(*(__m128 *)((char *)v20 + 4), *a2); /*0x536539*/
        v9 = v4[2]; /*0x53653c*/
        v10 = _mm_mul_ps(v8, v8); /*0x536542*/
        v10.m128_f32[0] = _mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0] /*0x536554*/
                        + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]);
        v11 = 1.0 / fsqrt(v10.m128_f32[0]); /*0x53655b*/
        v12 = *(float *)&dword_A46C30 - (float)((float)(v10.m128_f32[0] * v11) * v11); /*0x536576*/
        v13 = 0; /*0x53657a*/
        v13.m128_f32[0] = (float)(kHeadBodyNormalMatchRadius * v11) * v12; /*0x536585*/
        *(__m128 *)((char *)v20 + 4) = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v8); /*0x536590*/
        v14 = 0; /*0x53659e*/
        v20[0].m128_f32[0] = (*(float *)(*(_DWORD *)(v9 + 0x50) + 0xC8) * dbl_A3C770 + dbl_A31C70) * v20[0].m128_f32[0]; /*0x5365b1*/
        v14.m128_f32[0] = v20[0].m128_f32[0]; /*0x5365bb*/
        *(__m128 *)((char *)v20 + 4) = _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), *(__m128 *)((char *)v20 + 4)); /*0x5365c6*/
        *(__m128 *)((char *)v20 + 4) = _mm_add_ps( /*0x5365da*/
                                         *(__m128 *)(*(_DWORD *)(v9 + 0x50) + 0xD0),
                                         *(__m128 *)((char *)v20 + 4));
        sub_8A6410(v9); /*0x5365df*/
        (*(void (__thiscall **)(_DWORD, __int16 *))(**(_DWORD **)(v9 + 0x50) + 0x54))( /*0x5365f1*/
          *(_DWORD *)(v9 + 0x50),
          &v20[0].m128_i16[2]);
      }
    }
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x5365fa*/
    v16 = v15; /*0x5365fc*/
    if ( v15 ) /*0x536600*/
    {
      v17 = *(unsigned __int16 *)(v15 + 0xB6); /*0x536602*/
      v18 = 0; /*0x536609*/
      if ( *(_WORD *)(v16 + 0xB6) ) /*0x536602*/
      {
        if ( v17 ) /*0x536611*/
          goto LABEL_13; /*0x536611*/
        for ( i = 0; ; i = *(_DWORD *)(*(_DWORD *)(v16 + 0xB0) + 4 * v18) ) /*0x536613*/
        {
          sub_5364B0(i, a2, a3); /*0x536629*/
          if ( *(unsigned __int16 *)(v16 + 0xB6) <= (unsigned int)++v18 ) /*0x53663d*/
            break; /*0x53663d*/
LABEL_13:
          ; /*0x536617*/
        }
      }
    }
  }
}
