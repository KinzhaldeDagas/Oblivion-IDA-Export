int __thiscall sub_8C2820(_DWORD *this, _WORD *a2, int a3)
{
  _WORD *v4; // ecx
  _OWORD *v5; // esi
  _WORD *v6; // eax
  __m128 v7; // xmm0
  float v9; // [esp+10h] [ebp-14h]

  v4 = a2;
  v5 = (_OWORD *)*(this + 1);
  if ( !a2 )
  {
    v6 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x60, 0x29);
    v6[2] = 0x60;
    v4 = sub_9138D0(v6);
  }
  *((_OWORD *)v4 + 1) = v5[1];
  *((_OWORD *)v4 + 2) = v5[2];
  *((_OWORD *)v4 + 3) = v5[3];
  *((_OWORD *)v4 + 4) = v5[4];
  *((_OWORD *)v4 + 5) = v5[5];
  v9 = *(float *)(a3 + 0x10);
  if ( 1.0 != v9 )
  {
    v7 = 0;
    v7.m128_f32[0] = v9;
    *((__m128 *)v4 + 1) = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *((__m128 *)v4 + 1));
    *((__m128 *)v4 + 4) = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *((__m128 *)v4 + 4));
  }
  return sub_8A07B0(this, (int)v4, a3);
}
