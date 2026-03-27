double __usercall sub_94B8B0@<st0>(char *a1@<eax>)
{
  char *v2; // edi
  __m128 *v3; // esi
  __m128 *v4; // ecx
  int v5; // edx
  __m128 v6; // xmm0
  double v7; // st7
  int v8; // ecx
  float v10; // [esp+18h] [ebp-18h]
  int v11; // [esp+1Ch] [ebp-14h]
  __m128 *v12; // [esp+24h] [ebp-Ch] BYREF
  int v13; // [esp+28h] [ebp-8h]
  int v14; // [esp+2Ch] [ebp-4h]

  v2 = sub_916BC0(a1);
  v12 = 0;
  v13 = 0;
  v14 = 0x80000000;
  sub_917200((int *)a1, (int)&v12);
  v10 = -1000.0;
  if ( v13 > 0 )
  {
    v3 = v12;
    v11 = v13;
    do
    {
      if ( *((int *)v2 + 1) > 0 )
      {
        v4 = *(__m128 **)v2;
        v5 = *((_DWORD *)v2 + 1);
        do
        {
          v6 = _mm_mul_ps(*v3, *v4);
          v7 = (float)(_mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0]
                     + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]))
             + v4->m128_f32[3];
          if ( v7 > v10 )
            v10 = v7;
          ++v4;
          --v5;
        }
        while ( v5 );
      }
      ++v3;
      --v11;
    }
    while ( v11 );
  }
  if ( v14 >= 0 )
  {
    v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v8 )
      v8 = dword_BA7D9C;
    sub_8A75D0(v8, v12, 0x10 * v14, 0x14);
  }
  return v10;
}
