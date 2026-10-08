int __thiscall sub_926720(__m128 **this, __m128 *a2, int a3)
{
  __m128 *v4; // ecx
  __m128 *v5; // esi
  int v6; // eax
  __m128 v7; // xmm0
  float v9; // [esp+10h] [ebp-14h]

  v4 = a2; /*0x926751*/
  v5 = *(this + 1); /*0x926756*/
  if ( !a2 ) /*0x926759*/
  {
    v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xA0, 0x29); /*0x92676d*/
    *(_WORD *)(v6 + 4) = 0xA0; /*0x92676f*/
    v4 = (__m128 *)sub_9285E0((_DWORD *)v6); /*0x926790*/
  }
  v4[1].m128_f32[0] = v5[1].m128_f32[0]; /*0x926795*/
  v4[1].m128_i8[4] = v5[1].m128_i8[4]; /*0x92679b*/
  v4[2] = v5[2]; /*0x9267a2*/
  v4[3] = v5[3]; /*0x9267aa*/
  v4[4] = v5[4]; /*0x9267b2*/
  v4[5] = v5[5]; /*0x9267ba*/
  v4[6] = v5[6]; /*0x9267c2*/
  v4[7] = v5[7]; /*0x9267ca*/
  v4[8] = v5[8]; /*0x9267d5*/
  v4[9] = v5[9]; /*0x9267e3*/
  v9 = *(float *)(a3 + 0x10); /*0x9267ed*/
  if ( 1.0 != v9 ) /*0x9267fc*/
  {
    v7 = 0; /*0x926808*/
    v7.m128_f32[0] = v9; /*0x92680b*/
    v4[5] = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v4[5]); /*0x926819*/
    v4[9] = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v4[9]); /*0x92682e*/
  }
  return sub_8A07B0(this, (int)v4, a3); /*0x92683e*/
}
