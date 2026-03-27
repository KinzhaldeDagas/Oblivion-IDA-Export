int __thiscall sub_926720(__m128 **this, __m128 *a2, int a3)
{
  __m128 *v4; // ecx
  __m128 *v5; // esi
  int v6; // eax
  __m128 v7; // xmm0
  float v9; // [esp+10h] [ebp-14h]

  v4 = a2;
  v5 = *(this + 1);
  if ( !a2 )
  {
    v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xA0, 0x29);
    *(_WORD *)(v6 + 4) = 0xA0;
    v4 = (__m128 *)sub_9285E0((_DWORD *)v6);
  }
  v4[1].m128_f32[0] = v5[1].m128_f32[0];
  v4[1].m128_i8[4] = v5[1].m128_i8[4];
  v4[2] = v5[2];
  v4[3] = v5[3];
  v4[4] = v5[4];
  v4[5] = v5[5];
  v4[6] = v5[6];
  v4[7] = v5[7];
  v4[8] = v5[8];
  v4[9] = v5[9];
  v9 = *(float *)(a3 + 0x10);
  if ( 1.0 != v9 )
  {
    v7 = 0;
    v7.m128_f32[0] = v9;
    v4[5] = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v4[5]);
    v4[9] = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v4[9]);
  }
  return sub_8A07B0(this, (int)v4, a3);
}
