int __thiscall sub_8C2820(_DWORD *this, _WORD *a2, int a3)
{
  _WORD *v4; // ecx
  _OWORD *v5; // esi
  _WORD *v6; // eax
  __m128 v7; // xmm0
  float v9; // [esp+10h] [ebp-14h]

  v4 = a2; /*0x8c2851*/
  v5 = (_OWORD *)*(this + 1); /*0x8c2856*/
  if ( !a2 ) /*0x8c2859*/
  {
    v6 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x60, 0x29); /*0x8c286a*/
    v6[2] = 0x60; /*0x8c286c*/
    v4 = sub_9138D0(v6); /*0x8c288d*/
  }
  *((_OWORD *)v4 + 1) = v5[1]; /*0x8c2893*/
  *((_OWORD *)v4 + 2) = v5[2]; /*0x8c289b*/
  *((_OWORD *)v4 + 3) = v5[3]; /*0x8c28a3*/
  *((_OWORD *)v4 + 4) = v5[4]; /*0x8c28ab*/
  *((_OWORD *)v4 + 5) = v5[5]; /*0x8c28b3*/
  v9 = *(float *)(a3 + 0x10); /*0x8c28ba*/
  if ( 1.0 != v9 ) /*0x8c28c9*/
  {
    v7 = 0; /*0x8c28d5*/
    v7.m128_f32[0] = v9; /*0x8c28d8*/
    *((__m128 *)v4 + 1) = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *((__m128 *)v4 + 1)); /*0x8c28e6*/
    *((__m128 *)v4 + 4) = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *((__m128 *)v4 + 4)); /*0x8c28f8*/
  }
  return sub_8A07B0(this, (int)v4, a3); /*0x8c2905*/
}
