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

  v4 = *(int (__thiscall **)(_DWORD *, char *))(*this + 0x74);
  v13 = a2;
  v5 = v4(this, &v11);
  if ( v5 )
  {
    v12 = *(float *)(a3 + 0x10);
    if ( 1.0 != v12 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      if ( v6 )
      {
        v7 = 0;
        v7.m128_f32[0] = v12;
        v8 = _mm_shuffle_ps(v7, v7, 0);
        v9 = 0x10 * v6;
        do
        {
          v9 -= 0x10;
          --v6;
          *(__m128 *)(v9 + *(_DWORD *)(v5 + 4)) = _mm_mul_ps(*(__m128 *)(*(_DWORD *)(v5 + 4) + v9), v8);
        }
        while ( v6 );
      }
    }
  }
  return sub_8A2670(this, v13, (_DWORD **)a3);
}
