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
      v23 = flt_A56054;
      v33 = cos(v23);
      v32 = sin(v23);
      v25 = 0.0;
      v35 = *(float *)&dword_A46C30;
      v4 = 0;
      v4.m128_f32[0] = flt_A3D65C;
      v5 = 0;
      v34 = v4;
      v24 = 2;
      do
      {
        v6 = hkFactor;
        v31 = 2;
        v26 = flt_A37448;
        while ( 1 )
        {
          v7 = *(int **)(*((_DWORD *)this + 3) + 4 * v5);
          v27 = *a3 + v26;
          v8 = *(void (__thiscall **)(int *, float *))(*v7 + 0x94);
          v29 = a3[2];
          v28 = a3[1] + v25;
          ++v5;
          v37[0] = v27 * v6;
          v37[1] = v28 * v6;
          v37[2] = v6 * v29;
          v8(v7, v37);
          v9 = *v7;
          v36.m128_f32[0] = v32;
          v10 = *(void (__thiscall **)(int *, __m128 *))(v9 + 0x98);
          v36.m128_f32[1] = 0.0;
          v36.m128_f32[2] = 0.0;
          v36.m128_f32[3] = v33;
          v11 = _mm_mul_ps(v36, v36);
          v12 = _mm_add_ps(_mm_shuffle_ps(v11, v11, 0x4E), v11);
          v11.m128_f32[0] = _mm_shuffle_ps(v12, v12, 0xB1).m128_f32[0] + v12.m128_f32[0];
          v12.m128_f32[0] = 1.0 / fsqrt(v11.m128_f32[0]);
          v13 = v35 - (float)((float)(v11.m128_f32[0] * v12.m128_f32[0]) * v12.m128_f32[0]);
          v14 = v34;
          v14.m128_f32[0] = (float)(v34.m128_f32[0] * v12.m128_f32[0]) * v13;
          v36 = _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v36);
          v10(v7, &v36);
          v15 = v31-- == 1;
          v26 = v26 + dbl_A30F70;
          if ( v15 )
            break;
          v6 = hkFactor;
        }
        v15 = v24-- == 1;
        v25 = dbl_A30F70 + v25;
      }
      while ( !v15 );
      if ( !*(this + 0xA)
        || (v16 = **((_DWORD **)this + 3)) == 0
        || ((v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x58))(v16)) == 0
          ? (v18 = 0)
          : (v18 = *(_DWORD *)(v17 + 0x2B0)),
            !v18) )
      {
        for ( i = 0; i < (unsigned __int16)*(this + 0xA); ++i )
        {
          v20 = *(_DWORD *)(*((_DWORD *)this + 3) + 4 * i);
          if ( v20 )
            (*(void (__thiscall **)(int, int *))(*(_DWORD *)v20 + 0x5C))(v20, a2);
          v21 = sub_8AEB80(0xDCu, 0x96u, 0x28u, 0xFFu);
          sub_88BB60(a2, v20, v21);
        }
      }
    }
  }
  return 0;
}
