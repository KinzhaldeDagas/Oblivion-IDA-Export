int __thiscall sub_8C2D80(__m128 **this, __m128 *a2, int a3)
{
  __m128 *v4; // ecx
  __m128 *v5; // edi
  _WORD *v6; // eax
  __m128 v7; // xmm0
  float v9; // [esp+10h] [ebp-14h]

  v4 = a2;
  v5 = *(this + 1);
  if ( !a2 )
  {
    v6 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x30, 0x29);
    v6[2] = 0x30;
    v4 = (__m128 *)sub_913C30(v6);
  }
  v4[1] = v5[1];
  v4[2] = v5[2];
  v9 = *(float *)(a3 + 0x10);
  if ( 1.0 != v9 )
  {
    v7 = 0;
    v7.m128_f32[0] = v9;
    v4[1] = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v4[1]);
    v4[2] = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v4[2]);
  }
  return sub_8A07B0(this, (int)v4, a3);
}
