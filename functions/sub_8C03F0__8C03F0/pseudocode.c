int __thiscall sub_8C03F0(__m128 **this, __m128 *a2, int a3)
{
  __m128 *v4; // ecx
  __m128 *v5; // esi
  _WORD *v6; // eax
  __m128 v7; // xmm0
  float v9; // [esp+10h] [ebp-14h]

  v4 = a2; /*0x8c0421*/
  v5 = *(this + 1); /*0x8c0426*/
  if ( !a2 ) /*0x8c0429*/
  {
    v6 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x30, 0x29); /*0x8c043a*/
    v6[2] = 0x30; /*0x8c043c*/
    v4 = (__m128 *)sub_910E00(v6); /*0x8c045d*/
  }
  v4[1] = v5[1]; /*0x8c0463*/
  v4[2] = v5[2]; /*0x8c046b*/
  v4->m128_f32[3] = v5->m128_f32[3]; /*0x8c0472*/
  v9 = *(float *)(a3 + 0x10); /*0x8c0478*/
  if ( 1.0 != v9 ) /*0x8c0487*/
  {
    v7 = 0; /*0x8c0493*/
    v7.m128_f32[0] = v9; /*0x8c0496*/
    v4[1] = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v4[1]); /*0x8c04a4*/
    v4[2] = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v4[2]); /*0x8c04b6*/
  }
  return sub_8A07B0(this, (int)v4, a3); /*0x8c04c3*/
}
