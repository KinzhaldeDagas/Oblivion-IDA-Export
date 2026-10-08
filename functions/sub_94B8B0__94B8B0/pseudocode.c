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

  v2 = sub_916BC0(a1); /*0x94b8c5*/
  v12 = 0; /*0x94b8c9*/
  v13 = 0; /*0x94b8cd*/
  v14 = 0x80000000; /*0x94b8d8*/
  sub_917200((int *)a1, (int)&v12); /*0x94b8e0*/
  v10 = -1000.0; /*0x94b8ee*/
  if ( v13 > 0 ) /*0x94b8f6*/
  {
    v3 = v12; /*0x94b8f8*/
    v11 = v13; /*0x94b8fc*/
    do /*0x94b963*/
    {
      if ( *((int *)v2 + 1) > 0 ) /*0x94b902*/
      {
        v4 = *(__m128 **)v2; /*0x94b907*/
        v5 = *((_DWORD *)v2 + 1); /*0x94b909*/
        do /*0x94b955*/
        {
          v6 = _mm_mul_ps(*v3, *v4); /*0x94b916*/
          v7 = (float)(_mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0] /*0x94b93b*/
                     + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]))
             + v4->m128_f32[3];
          if ( v7 > v10 ) /*0x94b947*/
            v10 = v7; /*0x94b949*/
          ++v4; /*0x94b951*/
          --v5; /*0x94b954*/
        }
        while ( v5 ); /*0x94b955*/
      }
      ++v3; /*0x94b95b*/
      --v11; /*0x94b95f*/
    }
    while ( v11 ); /*0x94b963*/
  }
  if ( v14 >= 0 ) /*0x94b96b*/
  {
    v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x94b97d*/
    if ( !v8 ) /*0x94b985*/
      v8 = unk_BA7D9C; /*0x94b987*/
    sub_8A75D0(v8, v12, 0x10 * v14, 0x14); /*0x94b99d*/
  }
  return v10; /*0x94b9a6*/
}
