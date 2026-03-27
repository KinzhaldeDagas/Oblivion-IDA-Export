int __thiscall sub_8C0020(_DWORD *this, _WORD *a2, int a3)
{
  _WORD *v4; // ecx
  int v5; // esi
  _WORD *v6; // eax
  __m128 v7; // xmm0
  float v9; // [esp+10h] [ebp-14h]

  v4 = a2;
  v5 = *(this + 1);
  if ( !a2 )
  {
    v6 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xA0, 0x29);
    v6[2] = 0xA0;
    v4 = sub_9107C0(v6);
  }
  *((_OWORD *)v4 + 1) = *(_OWORD *)(v5 + 0x10);
  *((_OWORD *)v4 + 2) = *(_OWORD *)(v5 + 0x20);
  *((_OWORD *)v4 + 3) = *(_OWORD *)(v5 + 0x30);
  *((_OWORD *)v4 + 4) = *(_OWORD *)(v5 + 0x40);
  *((_OWORD *)v4 + 5) = *(_OWORD *)(v5 + 0x50);
  *((_OWORD *)v4 + 6) = *(_OWORD *)(v5 + 0x60);
  *((_OWORD *)v4 + 7) = *(_OWORD *)(v5 + 0x70);
  *((_OWORD *)v4 + 8) = *(_OWORD *)(v5 + 0x80);
  *((float *)v4 + 0x24) = *(float *)(v5 + 0x90);
  *((float *)v4 + 0x25) = *(float *)(v5 + 0x94);
  *((float *)v4 + 0x26) = *(float *)(v5 + 0x98);
  *((float *)v4 + 0x27) = *(float *)(v5 + 0x9C);
  v9 = *(float *)(a3 + 0x10);
  if ( 1.0 != v9 )
  {
    v7 = 0;
    v7.m128_f32[0] = v9;
    *((__m128 *)v4 + 1) = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *((__m128 *)v4 + 1));
    *((__m128 *)v4 + 3) = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *((__m128 *)v4 + 3));
  }
  return sub_8A07B0(this, (int)v4, a3);
}
