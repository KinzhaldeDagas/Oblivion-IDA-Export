int __thiscall sub_929A30(_DWORD *this, __m128 *a2, int a3, __m128 *a4)
{
  int v5; // edi
  int v6; // eax
  int v7; // eax
  __m128 *v8; // edx
  __m128 *v9; // esi
  __m128 v10; // xmm1
  __m128 v11; // xmm2
  __m128 v12; // xmm3
  __m128 v13; // xmm4
  int v14; // eax
  int v15; // ecx
  __int32 *v16; // edx
  __m128 v17; // xmm2
  __m128 v18; // xmm3
  __m128 *v19; // eax
  __m128 v20; // xmm0
  __m128 v21; // xmm1
  int result; // eax
  int v23; // ecx
  __m128 *v24; // [esp+10h] [ebp-210h] BYREF
  int v25; // [esp+14h] [ebp-20Ch]
  int v26; // [esp+18h] [ebp-208h]
  char v27; // [esp+20h] [ebp-200h] BYREF

  v5 = *(this + 4);
  v24 = (__m128 *)&v27;
  v25 = 0;
  v26 = 0x80000010;
  if ( v5 > 0x10 )
  {
    v6 = 0x20;
    if ( v5 >= 0x20 )
      v6 = v5;
    sub_8A6E40((const void **)&v24, v6, 0x20);
  }
  v7 = *(this + 4);
  v8 = v24;
  v9 = (__m128 *)*(this + 3);
  v10 = *a2;
  v11 = a2[1];
  v12 = a2[2];
  v13 = a2[3];
  v25 = v5;
  v14 = 2 * v7;
  do
  {
    *v8++ = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(v10, _mm_shuffle_ps(*v9, *v9, 0)), _mm_mul_ps(v11, _mm_shuffle_ps(*v9, *v9, 0x55))),
              _mm_add_ps(_mm_mul_ps(v12, _mm_shuffle_ps(*v9, *v9, 0xAA)), v13));
    ++v9;
    --v14;
  }
  while ( v14 > 0 );
  v15 = v25;
  v16 = (__int32 *)v24;
  v17 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0);
  v18 = _mm_shuffle_ps((__m128)0xFF7FFFFF, (__m128)0xFF7FFFFF, 0);
  v19 = v24;
  if ( v25 > 0 )
  {
    do
    {
      v20 = *v19;
      v21 = v19[1];
      v19 += 2;
      --v15;
      v17 = _mm_min_ps(_mm_min_ps(v17, v21), v20);
      v18 = _mm_max_ps(_mm_max_ps(v18, v21), v20);
    }
    while ( v15 );
  }
  *a4 = v17;
  a4[1] = v18;
  result = v26;
  if ( v26 >= 0 )
  {
    v23 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v23 )
      v23 = dword_BA7D9C;
    return sub_8A75D0(v23, v16, 0x20 * v26, 0x14);
  }
  return result;
}
