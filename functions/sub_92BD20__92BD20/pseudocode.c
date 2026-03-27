signed int __cdecl sub_92BD20(int *a1, __int32 *a2, __int32 *a3, __m128 *a4, __m128 *a5)
{
  _DWORD *v5; // esi
  int v6; // ecx
  int v7; // eax
  __int32 v8; // edx
  __int32 v9; // ecx
  __m128 v10; // xmm0
  int v11; // edi
  int v12; // eax
  int v13; // edi
  int v14; // esi
  __m128 v15; // xmm0
  __m128 v16; // xmm6
  __m128 v17; // xmm6
  unsigned __int64 v19; // [esp-10h] [ebp-160h]
  int v20; // [esp+10h] [ebp-140h]
  int v21; // [esp+14h] [ebp-13Ch]
  float v22; // [esp+18h] [ebp-138h]
  unsigned int v23; // [esp+1Ch] [ebp-134h]
  unsigned int v24; // [esp+20h] [ebp-130h]
  float v25; // [esp+24h] [ebp-12Ch]
  __m128 v26; // [esp+30h] [ebp-120h] BYREF
  _DWORD *v27; // [esp+40h] [ebp-110h] BYREF
  int v28; // [esp+44h] [ebp-10Ch]
  int v29; // [esp+48h] [ebp-108h]
  _BYTE v30[260]; // [esp+4Ch] [ebp-104h] BYREF

  v5 = v30;
  v6 = 0x80000020;
  v27 = v30;
  v28 = 0;
  v29 = 0x80000020;
  while ( 1 )
  {
    v23 = 0xFFFFFFFF;
    v24 = 0xFFFFFFFF;
    v7 = a1[1];
    v8 = 0;
    v25 = -3.4028235e38;
    if ( v7 <= 0 )
      break;
    v20 = 0;
    do
    {
      v9 = v8 + 1;
      if ( v8 + 1 >= v7 )
      {
        v11 = v28;
      }
      else
      {
        v21 = v20 + 0x10;
        do
        {
          v10 = _mm_mul_ps(*(__m128 *)(v20 + *a1), *(__m128 *)(v21 + *a1));
          v22 = _mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]);
          if ( v22 <= (double)v25 || v22 >= (double)flt_A37450 )
          {
            v11 = v28;
          }
          else
          {
            v11 = v28;
            v12 = 0;
            if ( v28 <= 0 )
              goto LABEL_15;
            while ( v5[2 * v12] != v8 || v5[2 * v12 + 1] != v9 )
            {
              if ( ++v12 >= v28 )
                goto LABEL_15;
            }
            if ( v12 == 0xFFFFFFFF )
            {
LABEL_15:
              v25 = v22;
              *a2 = v8;
              *a3 = v9;
              v23 = v8;
              v24 = v9;
            }
          }
          v21 += 0x10;
          ++v9;
        }
        while ( v9 < a1[1] );
        v9 = v8 + 1;
      }
      v20 += 0x10;
      v7 = a1[1];
      v8 = v9;
    }
    while ( v9 < v7 );
    if ( v23 == 0xFFFFFFFF )
    {
      v6 = v29;
      break;
    }
    if ( v11 == (v29 & 0x3FFFFFFF) )
    {
      sub_8A6EE0((const void **)&v27, 8);
      v11 = v28;
      v5 = v27;
    }
    v5[2 * v11] = v23;
    v27[2 * v28 + 1] = v24;
    v13 = *a2;
    v14 = *a1;
    ++v28;
    v15 = *(__m128 *)(0x10 * *a3 + v14);
    HIDWORD(v19) = *a3;
    LODWORD(v19) = v13;
    v16 = _mm_sub_ps(
            _mm_mul_ps(
              _mm_shuffle_ps(*(__m128 *)(0x10 * v13 + v14), *(__m128 *)(0x10 * v13 + v14), 0xC9),
              _mm_shuffle_ps(v15, v15, 0xD2)),
            _mm_mul_ps(
              _mm_shuffle_ps(*(__m128 *)(0x10 * v13 + v14), *(__m128 *)(0x10 * v13 + v14), 0xD2),
              _mm_shuffle_ps(v15, v15, 0xC9)));
    v26 = v16;
    if ( sub_92B900(&v26, a1, v19, a5, a4) == 1 )
    {
      if ( v29 >= 0 )
        sub_8A75D0(
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
          v27,
          8 * v29,
          0x14);
      return 1;
    }
    v17 = _mm_mul_ps(v16, _mm_sub_ps(*a5, *a4));
    if ( (float)(_mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0])) > (double)flt_A97BD8 )
    {
      if ( v29 >= 0 )
        sub_8A75D0(
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
          v27,
          8 * v29,
          0x14);
      return 0;
    }
    v6 = v29;
    v5 = v27;
  }
  if ( v6 >= 0 )
    sub_8A75D0(*(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C), v5, 8 * v6, 0x14);
  return 1;
}
