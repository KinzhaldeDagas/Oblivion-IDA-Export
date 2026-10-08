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

  v5 = v30; /*0x92bd31*/
  v6 = 0x80000020; /*0x92bd35*/
  v27 = v30; /*0x92bd3b*/
  v28 = 0; /*0x92bd3f*/
  v29 = 0x80000020; /*0x92bd47*/
  while ( 1 ) /*0x92bd58*/
  {
    v23 = 0xFFFFFFFF; /*0x92bd58*/
    v24 = 0xFFFFFFFF; /*0x92bd5c*/
    v7 = a1[1]; /*0x92bd60*/
    v8 = 0; /*0x92bd63*/
    v25 = -3.4028235e38; /*0x92bd67*/
    if ( v7 <= 0 ) /*0x92bd6f*/
      break; /*0x92bd6f*/
    v20 = 0; /*0x92bd75*/
    do /*0x92be5e*/
    {
      v9 = v8 + 1; /*0x92bd80*/
      if ( v8 + 1 >= v7 ) /*0x92bd89*/
      {
        v11 = v28; /*0x92be4e*/
      }
      else
      {
        v21 = v20 + 0x10; /*0x92bd96*/
        do /*0x92be42*/
        {
          v10 = _mm_mul_ps(*(__m128 *)(v20 + *a1), *(__m128 *)(v21 + *a1)); /*0x92bdb2*/
          v22 = _mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0] /*0x92bdcf*/
              + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]);
          if ( v22 <= (double)v25 || v22 >= (double)flt_A37450 ) /*0x92bdf1*/
          {
            v11 = v28; /*0x92be33*/
          }
          else
          {
            v11 = v28; /*0x92bdf3*/
            v12 = 0; /*0x92bdf7*/
            if ( v28 <= 0 ) /*0x92bdfb*/
              goto LABEL_15; /*0x92bdfb*/
            while ( v5[2 * v12] != v8 || v5[2 * v12 + 1] != v9 ) /*0x92be09*/
            {
              if ( ++v12 >= v28 ) /*0x92be0e*/
                goto LABEL_15; /*0x92be0e*/
            }
            if ( v12 == 0xFFFFFFFF ) /*0x92be15*/
            {
LABEL_15:
              v25 = v22; /*0x92be17*/
              *a2 = v8; /*0x92be22*/
              *a3 = v9; /*0x92be27*/
              v23 = v8; /*0x92be29*/
              v24 = v9; /*0x92be2d*/
            }
          }
          v21 += 0x10; /*0x92be37*/
          ++v9; /*0x92be3f*/
        }
        while ( v9 < a1[1] ); /*0x92be42*/
        v9 = v8 + 1; /*0x92be48*/
      }
      v20 += 0x10; /*0x92be52*/
      v7 = a1[1]; /*0x92be57*/
      v8 = v9; /*0x92be5a*/
    }
    while ( v9 < v7 ); /*0x92be5e*/
    if ( v23 == 0xFFFFFFFF ) /*0x92be69*/
    {
      v6 = v29; /*0x92bfa0*/
      break; /*0x92bfa0*/
    }
    if ( v11 == (v29 & 0x3FFFFFFF) ) /*0x92be7a*/
    {
      sub_8A6EE0((const void **)&v27, 8); /*0x92be83*/
      v11 = v28; /*0x92be88*/
      v5 = v27; /*0x92be8c*/
    }
    v5[2 * v11] = v23; /*0x92be97*/
    v27[2 * v28 + 1] = v24; /*0x92bea6*/
    v13 = *a2; /*0x92beb4*/
    v14 = *a1; /*0x92beb6*/
    ++v28; /*0x92beb9*/
    v15 = *(__m128 *)(0x10 * *a3 + v14); /*0x92bec4*/
    HIDWORD(v19) = *a3; /*0x92bef1*/
    LODWORD(v19) = v13; /*0x92bef9*/
    v16 = _mm_sub_ps( /*0x92bf09*/
            _mm_mul_ps(
              _mm_shuffle_ps(*(__m128 *)(0x10 * v13 + v14), *(__m128 *)(0x10 * v13 + v14), 0xC9),
              _mm_shuffle_ps(v15, v15, 0xD2)),
            _mm_mul_ps(
              _mm_shuffle_ps(*(__m128 *)(0x10 * v13 + v14), *(__m128 *)(0x10 * v13 + v14), 0xD2),
              _mm_shuffle_ps(v15, v15, 0xC9)));
    v26 = v16; /*0x92bf0d*/
    if ( sub_92B900(&v26, a1, v19, a5, a4) == 1 ) /*0x92bf1d*/
    {
      if ( v29 >= 0 ) /*0x92bfe2*/
        sub_8A75D0( /*0x92c009*/
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
          v27,
          8 * v29,
          0x14);
      return 1; /*0x92c010*/
    }
    v17 = _mm_mul_ps(v16, _mm_sub_ps(*a5, *a4)); /*0x92bf2f*/
    if ( (float)(_mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] /*0x92bf5f*/
               + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0])) > (double)flt_A97BD8 )
    {
      if ( v29 >= 0 ) /*0x92bf6b*/
        sub_8A75D0( /*0x92bf92*/
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
          v27,
          8 * v29,
          0x14);
      return 0; /*0x92bf9f*/
    }
    v6 = v29; /*0x92bd4d*/
    v5 = v27; /*0x92bd51*/
  }
  if ( v6 >= 0 ) /*0x92bfa6*/
    sub_8A75D0( /*0x92bfcb*/
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
      v5,
      8 * v6,
      0x14);
  return 1; /*0x92bf99*/
}
