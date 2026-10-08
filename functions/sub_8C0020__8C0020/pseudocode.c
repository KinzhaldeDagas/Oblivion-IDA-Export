int __thiscall sub_8C0020(_DWORD *this, _WORD *a2, int a3)
{
  _WORD *v4; // ecx
  int v5; // esi
  _WORD *v6; // eax
  __m128 v7; // xmm0
  float v9; // [esp+10h] [ebp-14h]

  v4 = a2; /*0x8c0051*/
  v5 = *(this + 1); /*0x8c0056*/
  if ( !a2 ) /*0x8c0059*/
  {
    v6 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xA0, 0x29); /*0x8c006d*/
    v6[2] = 0xA0; /*0x8c006f*/
    v4 = sub_9107C0(v6); /*0x8c0090*/
  }
  *((_OWORD *)v4 + 1) = *(_OWORD *)(v5 + 0x10); /*0x8c0096*/
  *((_OWORD *)v4 + 2) = *(_OWORD *)(v5 + 0x20); /*0x8c009e*/
  *((_OWORD *)v4 + 3) = *(_OWORD *)(v5 + 0x30); /*0x8c00a6*/
  *((_OWORD *)v4 + 4) = *(_OWORD *)(v5 + 0x40); /*0x8c00ae*/
  *((_OWORD *)v4 + 5) = *(_OWORD *)(v5 + 0x50); /*0x8c00b6*/
  *((_OWORD *)v4 + 6) = *(_OWORD *)(v5 + 0x60); /*0x8c00be*/
  *((_OWORD *)v4 + 7) = *(_OWORD *)(v5 + 0x70); /*0x8c00c6*/
  *((_OWORD *)v4 + 8) = *(_OWORD *)(v5 + 0x80); /*0x8c00d1*/
  *((float *)v4 + 0x24) = *(float *)(v5 + 0x90); /*0x8c00de*/
  *((float *)v4 + 0x25) = *(float *)(v5 + 0x94); /*0x8c00ea*/
  *((float *)v4 + 0x26) = *(float *)(v5 + 0x98); /*0x8c00f6*/
  *((float *)v4 + 0x27) = *(float *)(v5 + 0x9C); /*0x8c0102*/
  v9 = *(float *)(a3 + 0x10); /*0x8c010b*/
  if ( 1.0 != v9 ) /*0x8c011a*/
  {
    v7 = 0; /*0x8c0126*/
    v7.m128_f32[0] = v9; /*0x8c0129*/
    *((__m128 *)v4 + 1) = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *((__m128 *)v4 + 1)); /*0x8c0137*/
    *((__m128 *)v4 + 3) = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *((__m128 *)v4 + 3)); /*0x8c0149*/
  }
  return sub_8A07B0(this, (int)v4, a3); /*0x8c0156*/
}
