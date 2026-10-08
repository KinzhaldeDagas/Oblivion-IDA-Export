int __thiscall sub_8B7650(_DWORD *this, int a2, int a3)
{
  int (__thiscall *v4)(_DWORD *, char *); // edx
  int v5; // esi
  int v6; // ecx
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  int v9; // edx
  char v11; // [esp+17h] [ebp-9h] BYREF
  float v12; // [esp+18h] [ebp-8h]
  int v13; // [esp+1Ch] [ebp-4h]

  v4 = *(int (__thiscall **)(_DWORD *, char *))(*this + 0x74); /*0x8b7666*/
  v13 = a2; /*0x8b7669*/
  v5 = v4(this, &v11); /*0x8b7674*/
  if ( v5 ) /*0x8b7678*/
  {
    v12 = *(float *)(a3 + 0x10); /*0x8b767d*/
    if ( 1.0 != v12 ) /*0x8b768c*/
    {
      v6 = *(_DWORD *)(v5 + 8); /*0x8b768e*/
      if ( v6 ) /*0x8b7693*/
      {
        v7 = 0; /*0x8b769b*/
        v7.m128_f32[0] = v12; /*0x8b76a0*/
        v8 = _mm_shuffle_ps(v7, v7, 0); /*0x8b76a4*/
        v9 = 0x10 * v6; /*0x8b76a8*/
        do /*0x8b76c7*/
        {
          v9 -= 0x10; /*0x8b76b3*/
          --v6; /*0x8b76bc*/
          *(__m128 *)(v9 + *(_DWORD *)(v5 + 4)) = _mm_mul_ps(*(__m128 *)(*(_DWORD *)(v5 + 4) + v9), v8); /*0x8b76c4*/
        }
        while ( v6 ); /*0x8b76c7*/
      }
    }
  }
  return sub_8A2670(this, v13, (_DWORD **)a3); /*0x8b76d6*/
}
