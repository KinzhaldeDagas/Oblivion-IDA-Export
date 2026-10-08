void __thiscall sub_8B8E70(int *this, int *a2, int a3)
{
  int v4; // eax
  __m128 v5; // xmm0
  char v6; // [esp+1Bh] [ebp-5h] BYREF
  float v7; // [esp+1Ch] [ebp-4h]

  v4 = (*(int (__thiscall **)(int *, char *))(*this + 0x74))(this, &v6); /*0x8b8e90*/
  if ( v4 ) /*0x8b8e96*/
  {
    *(_OWORD *)(v4 + 0x40) = *((_OWORD *)this + 2); /*0x8b8e9c*/
    *(_OWORD *)(v4 + 0x30) = *((_OWORD *)this + 3); /*0x8b8ea4*/
    v7 = *(float *)(a3 + 0x10); /*0x8b8eab*/
    if ( 1.0 != v7 ) /*0x8b8eba*/
    {
      v5 = 0; /*0x8b8ec2*/
      v5.m128_f32[0] = v7; /*0x8b8ec5*/
      *(__m128 *)(v4 + 0x30) = _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), *(__m128 *)(v4 + 0x30)); /*0x8b8ed7*/
    }
  }
  sub_8A4E30((NodeVoid *)this, a2, a3); /*0x8b8edf*/
}
