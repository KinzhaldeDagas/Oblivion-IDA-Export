int __thiscall sub_8C0B70(_DWORD *this, _WORD *a2, int a3)
{
  _WORD *v4; // ecx
  int v5; // esi
  _WORD *v6; // eax
  __m128 v7; // xmm0
  float v9; // [esp+10h] [ebp-14h]

  v4 = a2; /*0x8c0ba1*/
  v5 = *(this + 1); /*0x8c0ba6*/
  if ( !a2 ) /*0x8c0ba9*/
  {
    v6 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x90, 0x29); /*0x8c0bbd*/
    v6[2] = 0x90; /*0x8c0bbf*/
    v4 = sub_911000(v6); /*0x8c0be0*/
  }
  *((_OWORD *)v4 + 1) = *(_OWORD *)(v5 + 0x10); /*0x8c0be6*/
  *((_OWORD *)v4 + 2) = *(_OWORD *)(v5 + 0x20); /*0x8c0bee*/
  *((_OWORD *)v4 + 3) = *(_OWORD *)(v5 + 0x30); /*0x8c0bf6*/
  *((_OWORD *)v4 + 4) = *(_OWORD *)(v5 + 0x40); /*0x8c0bfe*/
  *((_OWORD *)v4 + 5) = *(_OWORD *)(v5 + 0x50); /*0x8c0c06*/
  *((_OWORD *)v4 + 6) = *(_OWORD *)(v5 + 0x60); /*0x8c0c0e*/
  *((float *)v4 + 0x1C) = *(float *)(v5 + 0x70); /*0x8c0c15*/
  *((float *)v4 + 0x1D) = *(float *)(v5 + 0x74); /*0x8c0c1b*/
  *((float *)v4 + 0x1E) = *(float *)(v5 + 0x78); /*0x8c0c21*/
  *((float *)v4 + 0x1F) = *(float *)(v5 + 0x7C); /*0x8c0c27*/
  *((float *)v4 + 0x20) = *(float *)(v5 + 0x80); /*0x8c0c30*/
  *((float *)v4 + 0x21) = *(float *)(v5 + 0x84); /*0x8c0c3c*/
  v9 = *(float *)(a3 + 0x10); /*0x8c0c45*/
  if ( 1.0 != v9 ) /*0x8c0c54*/
  {
    v7 = 0; /*0x8c0c60*/
    v7.m128_f32[0] = v9; /*0x8c0c63*/
    *((__m128 *)v4 + 1) = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *((__m128 *)v4 + 1)); /*0x8c0c71*/
    *((__m128 *)v4 + 4) = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *((__m128 *)v4 + 4)); /*0x8c0c83*/
  }
  return sub_8A07B0(this, (int)v4, a3); /*0x8c0c90*/
}
