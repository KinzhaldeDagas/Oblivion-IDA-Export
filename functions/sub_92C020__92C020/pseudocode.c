_DWORD *__cdecl sub_92C020(__m128 *a1, _DWORD *a2, const void **a3, const void **a4)
{
  int v4; // ecx
  __int32 v5; // ebx
  _DWORD *result; // eax
  __m128 *v7; // eax
  const void *v8; // ecx
  unsigned int v9; // eax
  _OWORD *v10; // eax
  bool v11; // cc
  char v12; // [esp+1Bh] [ebp-55h] BYREF
  int v13; // [esp+1Ch] [ebp-54h]
  _OWORD *v14; // [esp+20h] [ebp-50h]
  char *v15; // [esp+24h] [ebp-4Ch] BYREF
  signed __int64 v16; // [esp+28h] [ebp-48h]
  __m128 v17; // [esp+30h] [ebp-40h] BYREF
  __m128 v18; // [esp+40h] [ebp-30h] BYREF
  __m128 v19; // [esp+50h] [ebp-20h] BYREF
  __m128 v20; // [esp+60h] [ebp-10h] BYREF

  v4 = 0; /*0x92c035*/
  if ( (int)a3[1] <= 0 ) /*0x92c039*/
    goto LABEL_10; /*0x92c039*/
  v5 = a1->m128_i32[0]; /*0x92c03b*/
  result = *a3; /*0x92c03d*/
  while ( *result != v5 || result[1] != a1->m128_i32[1] ) /*0x92c040*/
  {
    v5 = a1->m128_i32[0]; /*0x92c04e*/
    if ( result[1] == a1->m128_i32[0] && *result == a1->m128_i32[1] ) /*0x92c058*/
      break; /*0x92c058*/
    ++v4; /*0x92c05d*/
    result += 8; /*0x92c05e*/
    if ( v4 >= (int)a3[1] ) /*0x92c063*/
      goto LABEL_10; /*0x92c063*/
  }
  if ( v4 == 0xFFFFFFFF ) /*0x92c06a*/
  {
LABEL_10:
    if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) ) /*0x92c07d*/
      sub_8A6EE0(a3, 0x20); /*0x92c082*/
    v7 = (__m128 *)((char *)*a3 + 0x20 * (_DWORD)a3[1]); /*0x92c094*/
    a3[1] = (char *)a3[1] + 1; /*0x92c097*/
    v7->m128_u64[0] = a1->m128_u64[0]; /*0x92c09c*/
    v7->m128_i32[2] = a1->m128_i32[2]; /*0x92c0a7*/
    v7[1] = a1[1]; /*0x92c0ae*/
    v15 = 0; /*0x92c0b7*/
    v16 = 0x8000000000000000uLL; /*0x92c0bb*/
    if ( *sub_92BAE0(&v12, a1 + 1, a2, a1->m128_u64[0], (__m128 *)a1->m128_i32[2], (const void **)&v15) ) /*0x92c0e6*/
    {
      v8 = a4[1]; /*0x92c0f9*/
      v9 = (unsigned int)a4[2] & 0x3FFFFFFF; /*0x92c100*/
      v14 = v15; /*0x92c107*/
      if ( v8 == (const void *)v9 ) /*0x92c10b*/
        sub_8A6EE0(a4, 0x10); /*0x92c110*/
      v10 = (char *)*a4 + 0x10 * (_DWORD)a4[1]; /*0x92c122*/
      a4[1] = (char *)a4[1] + 1; /*0x92c125*/
      *v10 = *v14; /*0x92c12f*/
      v14 = 0; /*0x92c13a*/
      if ( (int)v16 > 0 ) /*0x92c13e*/
      {
        v13 = 0; /*0x92c144*/
        do /*0x92c1f5*/
        {
          v17.m128_i32[0] = *(_DWORD *)&v15[v13 + 0x10]; /*0x92c15e*/
          v17.m128_i32[1] = *(_DWORD *)&v15[v13 + 0x18]; /*0x92c165*/
          v17.m128_i32[2] = (__int32)&v15[v13]; /*0x92c169*/
          sub_92B580(a2, *(_DWORD *)&v15[v13 + 0x10], *(_DWORD *)&v15[v13 + 0x18], *(_DWORD *)&v15[v13 + 0x14], &v18); /*0x92c17f*/
          sub_92C020(&v17, a2, a3, a4); /*0x92c18c*/
          v19.m128_u64[0] = *(_QWORD *)&v15[v13 + 0x14]; /*0x92c19f*/
          v19.m128_i32[2] = (__int32)&v15[v13]; /*0x92c1aa*/
          sub_92B580(a2, *(_DWORD *)&v15[v13 + 0x14], *(_DWORD *)&v15[v13 + 0x18], *(_DWORD *)&v15[v13 + 0x10], &v20); /*0x92c1c3*/
          sub_92C020(&v19, a2, a3, a4); /*0x92c1d3*/
          v11 = (int)v14 + 1 < (int)v16; /*0x92c1eb*/
          v14 = (_OWORD *)((char *)v14 + 1); /*0x92c1ed*/
          v13 += 0x20; /*0x92c1f1*/
        }
        while ( v11 ); /*0x92c1f5*/
      }
    }
    result = (_DWORD *)HIDWORD(v16); /*0x92c1fb*/
    if ( v16 >= 0 ) /*0x92c201*/
      return (_DWORD *)sub_8A75D0( /*0x92c228*/
                         *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
                         v15,
                         0x20 * HIDWORD(v16),
                         0x14);
  }
  return result; /*0x92c22d*/
}
