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

  v4 = *(int (__thiscall **)(_DWORD *, char *))(*this + 0x74);
  v16 = a2;
  v5 = (_DWORD *)v4(this, &v14);
  if ( v5 )
  {
    v15 = *(float *)(a3 + 0x10);
    v6 = v15;
    if ( v15 != 1.0 )
    {
      v7 = v5[3];
      if ( v7 )
      {
        v8 = 0;
        v8.m128_f32[0] = v15;
        v9 = _mm_shuffle_ps(v8, v8, 0);
        v10 = 0x10 * v7;
        do
        {
          v10 -= 0x10;
          --v7;
          *(__m128 *)(v10 + v5[2]) = _mm_mul_ps(*(__m128 *)(v5[2] + v10), v9);
        }
        while ( v7 );
      }
      v11 = v5[6];
      if ( v11 )
      {
        v12 = 0x10 * v11;
        do
        {
          v12 -= 0x10;
          --v11;
          *(float *)(v5[5] + v12 + 0xC) = *(float *)(v5[5] + v12 + 0xC) * v6;
        }
        while ( v11 );
      }
    }
  }
  return sub_8A2670(this, v16, (_DWORD **)a3);
}
