int __thiscall sub_8B2DD0(_DWORD *this, _WORD *a2, int a3)
{
  _WORD *v4; // ecx
  int v5; // esi
  _WORD *v6; // eax
  __m128 v7; // xmm0
  float v9; // [esp+10h] [ebp-14h]

  v4 = a2; /*0x8b2e01*/
  v5 = *(this + 1); /*0x8b2e06*/
  if ( !a2 ) /*0x8b2e09*/
  {
    v6 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x90, 0x29); /*0x8b2e1d*/
    v6[2] = 0x90; /*0x8b2e1f*/
    v4 = sub_8B2390(v6); /*0x8b2e40*/
  }
  *((_OWORD *)v4 + 2) = *(_OWORD *)(v5 + 0x20); /*0x8b2e46*/
  *((_OWORD *)v4 + 3) = *(_OWORD *)(v5 + 0x30); /*0x8b2e4e*/
  *((_OWORD *)v4 + 4) = *(_OWORD *)(v5 + 0x40); /*0x8b2e56*/
  *((_OWORD *)v4 + 5) = *(_OWORD *)(v5 + 0x50); /*0x8b2e5e*/
  *((_OWORD *)v4 + 6) = *(_OWORD *)(v5 + 0x60); /*0x8b2e66*/
  *((_OWORD *)v4 + 7) = *(_OWORD *)(v5 + 0x70); /*0x8b2e6e*/
  *((_OWORD *)v4 + 8) = *(_OWORD *)(v5 + 0x80); /*0x8b2e79*/
  *((float *)v4 + 5) = *(float *)(v5 + 0x14); /*0x8b2e83*/
  *((float *)v4 + 3) = *(float *)(v5 + 0xC); /*0x8b2e89*/
  *((float *)v4 + 4) = *(float *)(v5 + 0x10); /*0x8b2e8f*/
  v9 = *(float *)(a3 + 0x10); /*0x8b2e95*/
  if ( 1.0 != v9 ) /*0x8b2ea4*/
  {
    v7 = 0; /*0x8b2eb0*/
    v7.m128_f32[0] = v9; /*0x8b2eb3*/
    *((__m128 *)v4 + 2) = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *((__m128 *)v4 + 2)); /*0x8b2ec1*/
    *((__m128 *)v4 + 6) = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *((__m128 *)v4 + 6)); /*0x8b2ed3*/
  }
  return sub_8A07B0(this, (int)v4, a3); /*0x8b2ee0*/
}
