int __thiscall sub_8C8AA0(_DWORD *this, int a2, int a3)
{
  int (__thiscall *v4)(_DWORD *, char *); // edx
  _DWORD *v5; // ecx
  double v6; // st7
  int v7; // edx
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  int v10; // esi
  int v11; // edx
  int v12; // esi
  char v14; // [esp+17h] [ebp-9h] BYREF
  float v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  v4 = *(int (__thiscall **)(_DWORD *, char *))(*this + 0x74); /*0x8c8ab6*/
  v16 = a2; /*0x8c8ab9*/
  v5 = (_DWORD *)v4(this, &v14); /*0x8c8ac4*/
  if ( v5 ) /*0x8c8ac8*/
  {
    v15 = *(float *)(a3 + 0x10); /*0x8c8acd*/
    v6 = v15; /*0x8c8adb*/
    if ( v15 != 1.0 ) /*0x8c8ae0*/
    {
      v7 = v5[3]; /*0x8c8ae2*/
      if ( v7 ) /*0x8c8ae7*/
      {
        v8 = 0; /*0x8c8aef*/
        v8.m128_f32[0] = v15; /*0x8c8af4*/
        v9 = _mm_shuffle_ps(v8, v8, 0); /*0x8c8af8*/
        v10 = 0x10 * v7; /*0x8c8afc*/
        do /*0x8c8b16*/
        {
          v10 -= 0x10; /*0x8c8b02*/
          --v7; /*0x8c8b0b*/
          *(__m128 *)(v10 + v5[2]) = _mm_mul_ps(*(__m128 *)(v5[2] + v10), v9); /*0x8c8b13*/
        }
        while ( v7 ); /*0x8c8b16*/
      }
      v11 = v5[6]; /*0x8c8b18*/
      if ( v11 ) /*0x8c8b1d*/
      {
        v12 = 0x10 * v11; /*0x8c8b21*/
        do /*0x8c8b3b*/
        {
          v12 -= 0x10; /*0x8c8b27*/
          --v11; /*0x8c8b34*/
          *(float *)(v5[5] + v12 + 0xC) = *(float *)(v5[5] + v12 + 0xC) * v6; /*0x8c8b39*/
        }
        while ( v11 ); /*0x8c8b3b*/
      }
    }
  }
  return sub_8A2670(this, v16, (_DWORD **)a3); /*0x8c8b4c*/
}
