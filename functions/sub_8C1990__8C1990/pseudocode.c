int __thiscall sub_8C1990(_DWORD *this, _WORD *a2, int a3)
{
  _WORD *v4; // ecx
  int v5; // esi
  _WORD *v6; // eax
  __m128 v7; // xmm0
  float v9; // [esp+10h] [ebp-14h]

  v4 = a2; /*0x8c19c1*/
  v5 = *(this + 1); /*0x8c19c6*/
  if ( !a2 ) /*0x8c19c9*/
  {
    v6 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xA0, 0x29); /*0x8c19dd*/
    v6[2] = 0xA0; /*0x8c19df*/
    v4 = sub_9117E0(v6); /*0x8c1a00*/
  }
  *((_OWORD *)v4 + 1) = *(_OWORD *)(v5 + 0x10); /*0x8c1a06*/
  *((_OWORD *)v4 + 2) = *(_OWORD *)(v5 + 0x20); /*0x8c1a0e*/
  *((_OWORD *)v4 + 3) = *(_OWORD *)(v5 + 0x30); /*0x8c1a16*/
  *((_OWORD *)v4 + 4) = *(_OWORD *)(v5 + 0x40); /*0x8c1a1e*/
  *((_OWORD *)v4 + 5) = *(_OWORD *)(v5 + 0x50); /*0x8c1a26*/
  *((_OWORD *)v4 + 6) = *(_OWORD *)(v5 + 0x60); /*0x8c1a2e*/
  *((_OWORD *)v4 + 7) = *(_OWORD *)(v5 + 0x70); /*0x8c1a36*/
  *((_OWORD *)v4 + 8) = *(_OWORD *)(v5 + 0x80); /*0x8c1a41*/
  *((float *)v4 + 0x25) = *(float *)(v5 + 0x94); /*0x8c1a4e*/
  *((float *)v4 + 0x24) = *(float *)(v5 + 0x90); /*0x8c1a5a*/
  *((float *)v4 + 0x26) = *(float *)(v5 + 0x98); /*0x8c1a66*/
  v9 = *(float *)(a3 + 0x10); /*0x8c1a6f*/
  if ( 1.0 != v9 ) /*0x8c1a7e*/
  {
    v7 = 0; /*0x8c1a8a*/
    v7.m128_f32[0] = v9; /*0x8c1a8d*/
    *((__m128 *)v4 + 1) = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *((__m128 *)v4 + 1)); /*0x8c1a9b*/
    *((__m128 *)v4 + 2) = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *((__m128 *)v4 + 2)); /*0x8c1aad*/
    *((__m128 *)v4 + 6) = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *((__m128 *)v4 + 6)); /*0x8c1abf*/
    *((__m128 *)v4 + 7) = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *((__m128 *)v4 + 7)); /*0x8c1ad1*/
  }
  return sub_8A07B0(this, (int)v4, a3); /*0x8c1ade*/
}
