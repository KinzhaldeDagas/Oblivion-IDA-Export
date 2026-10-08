char __thiscall sub_532F50(_WORD *this, int *a2, float *a3, int a4)
{
  __m128 v4; // xmm0
  int v5; // ebx
  double v6; // st7
  int *v7; // esi
  void (__thiscall *v8)(int *, float *); // edx
  int v9; // eax
  void (__thiscall *v10)(int *, __m128 *); // edx
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  float v13; // xmm3_4
  __m128 v14; // xmm0
  bool v15; // zf
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  unsigned int i; // esi
  int v20; // edi
  int v21; // eax
  float v23; // [esp+14h] [ebp-7Ch]
  int v24; // [esp+14h] [ebp-7Ch]
  float v25; // [esp+18h] [ebp-78h]
  float v26; // [esp+1Ch] [ebp-74h]
  float v27; // [esp+20h] [ebp-70h]
  float v28; // [esp+24h] [ebp-6Ch]
  float v29; // [esp+28h] [ebp-68h]
  int v31; // [esp+30h] [ebp-60h]
  float v32; // [esp+34h] [ebp-5Ch]
  float v33; // [esp+38h] [ebp-58h]
  __m128 v34; // [esp+40h] [ebp-50h]
  float v35; // [esp+50h] [ebp-40h]
  __m128 v36; // [esp+60h] [ebp-30h] BYREF
  float v37[7]; // [esp+70h] [ebp-20h] BYREF

  if ( a2 )
  {
    if ( *(this + 0xA) )
    {
      v23 = flt_A56054; /*0x532f91*/
      v33 = cos(v23); /*0x532f9b*/
      v32 = sin(v23); /*0x532f9f*/
      v25 = 0.0; /*0x532fb0*/
      v35 = *(float *)&dword_A46C30; /*0x532fc3*/
      v4 = 0; /*0x532fc8*/
      v4.m128_f32[0] = kHeadBodyNormalMatchRadius; /*0x532fcb*/
      v5 = 0; /*0x532fcf*/
      v34 = v4; /*0x532fd1*/
      v24 = 2; /*0x532fd6*/
      do /*0x533119*/
      {
        v6 = hkFactor; /*0x532fe0*/
        v31 = 2; /*0x532fe6*/
        v26 = flt_A37448; /*0x532ff4*/
        while ( 1 ) /*0x533011*/
        {
          v7 = *(int **)(*((_DWORD *)this + 3) + 4 * v5); /*0x533011*/
          v27 = *a3 + v26; /*0x533029*/
          v8 = *(void (__thiscall **)(int *, float *))(*v7 + 0x94); /*0x53302f*/
          v29 = a3[2]; /*0x533041*/
          v28 = a3[1] + v25; /*0x53304a*/
          ++v5; /*0x533054*/
          v37[0] = v27 * v6; /*0x533059*/
          v37[1] = v28 * v6; /*0x533063*/
          v37[2] = v6 * v29; /*0x53306b*/
          v8(v7, v37); /*0x53306f*/
          v9 = *v7; /*0x53307a*/
          v36.m128_f32[0] = v32; /*0x53307c*/
          v10 = *(void (__thiscall **)(int *, __m128 *))(v9 + 0x98); /*0x533082*/
          v36.m128_f32[1] = 0.0; /*0x533088*/
          v36.m128_f32[2] = 0.0; /*0x533090*/
          v36.m128_f32[3] = v33; /*0x53309b*/
          v11 = _mm_mul_ps(v36, v36); /*0x5330a7*/
          v12 = _mm_add_ps(_mm_shuffle_ps(v11, v11, 0x4E), v11); /*0x5330b1*/
          v11.m128_f32[0] = _mm_shuffle_ps(v12, v12, 0xB1).m128_f32[0] + v12.m128_f32[0]; /*0x5330bb*/
          v12.m128_f32[0] = 1.0 / fsqrt(v11.m128_f32[0]); /*0x5330c1*/
          v13 = v35 - (float)((float)(v11.m128_f32[0] * v12.m128_f32[0]) * v12.m128_f32[0]); /*0x5330cd*/
          v14 = v34; /*0x5330d1*/
          v14.m128_f32[0] = (float)(v34.m128_f32[0] * v12.m128_f32[0]) * v13; /*0x5330da*/
          v36 = _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v36); /*0x5330e8*/
          v10(v7, &v36); /*0x5330ed*/
          v15 = v31-- == 1; /*0x5330f3*/
          v26 = v26 + dbl_A30F70; /*0x533102*/
          if ( v15 ) /*0x533106*/
            break; /*0x533106*/
          v6 = hkFactor; /*0x533002*/
        }
        v15 = v24-- == 1; /*0x53310c*/
        v25 = dbl_A30F70 + v25; /*0x533115*/
      }
      while ( !v15 ); /*0x533119*/
      if ( !*(this + 0xA)
        || (v16 = **((_DWORD **)this + 3)) == 0
        || ((v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x58))(v16)) == 0
          ? (v18 = 0)
          : (v18 = *(_DWORD *)(v17 + 0x2B0)),
            !v18) )
      {
        for ( i = 0; i < (unsigned __int16)*(this + 0xA); ++i ) /*0x53314e*/
        {
          v20 = *(_DWORD *)(*((_DWORD *)this + 3) + 4 * i); /*0x533157*/
          if ( v20 ) /*0x53315c*/
            (*(void (__thiscall **)(int, int *))(*(_DWORD *)v20 + 0x5C))(v20, a2); /*0x53316a*/
          v21 = sub_8AEB80(0xDCu, 0x96u, 0x28u, 0xFFu); /*0x53317d*/
          sub_88BB60(a2, v20, v21); /*0x53318b*/
        }
      }
    }
  }
  return 0; /*0x53319b*/
}
