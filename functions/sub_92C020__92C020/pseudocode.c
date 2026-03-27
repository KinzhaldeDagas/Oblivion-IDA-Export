_DWORD *__cdecl sub_92C020(__m128 *a1, _DWORD *a2, const void **a3, const void **a4)
{
  int v4; // ecx
  __int32 v5; // ebx
  _DWORD *result; // eax
  __m128 *v7; // eax
  const void *v8; // ecx
  int v9; // eax
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

  v4 = 0;
  if ( (int)a3[1] <= 0 )
    goto LABEL_10;
  v5 = a1->m128_i32[0];
  result = *a3;
  while ( *result != v5 || result[1] != a1->m128_i32[1] )
  {
    v5 = a1->m128_i32[0];
    if ( result[1] == a1->m128_i32[0] && *result == a1->m128_i32[1] )
      break;
    ++v4;
    result += 8;
    if ( v4 >= (int)a3[1] )
      goto LABEL_10;
  }
  if ( v4 == 0xFFFFFFFF )
  {
LABEL_10:
    if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) )
      sub_8A6EE0(a3, 0x20);
    v7 = (__m128 *)((char *)*a3 + 0x20 * (_DWORD)a3[1]);
    a3[1] = (char *)a3[1] + 1;
    v7->m128_u64[0] = a1->m128_u64[0];
    v7->m128_i32[2] = a1->m128_i32[2];
    v7[1] = a1[1];
    v15 = 0;
    v16 = 0x8000000000000000uLL;
    if ( *sub_92BAE0(&v12, a1 + 1, a2, a1->m128_u64[0], (__m128 *)a1->m128_i32[2], (const void **)&v15) )
    {
      v8 = a4[1];
      v9 = (unsigned int)a4[2] & 0x3FFFFFFF;
      v14 = v15;
      if ( v8 == (const void *)v9 )
        sub_8A6EE0(a4, 0x10);
      v10 = (char *)*a4 + 0x10 * (_DWORD)a4[1];
      a4[1] = (char *)a4[1] + 1;
      *v10 = *v14;
      v14 = 0;
      if ( (int)v16 > 0 )
      {
        v13 = 0;
        do
        {
          v17.m128_i32[0] = *(_DWORD *)&v15[v13 + 0x10];
          v17.m128_i32[1] = *(_DWORD *)&v15[v13 + 0x18];
          v17.m128_i32[2] = (__int32)&v15[v13];
          sub_92B580(a2, *(_DWORD *)&v15[v13 + 0x10], *(_DWORD *)&v15[v13 + 0x18], *(_DWORD *)&v15[v13 + 0x14], &v18);
          sub_92C020(&v17, a2, a3, a4);
          v19.m128_u64[0] = *(_QWORD *)&v15[v13 + 0x14];
          v19.m128_i32[2] = (__int32)&v15[v13];
          sub_92B580(a2, *(_DWORD *)&v15[v13 + 0x14], *(_DWORD *)&v15[v13 + 0x18], *(_DWORD *)&v15[v13 + 0x10], &v20);
          sub_92C020(&v19, a2, a3, a4);
          v11 = (int)v14 + 1 < (int)v16;
          v14 = (_OWORD *)((char *)v14 + 1);
          v13 += 0x20;
        }
        while ( v11 );
      }
    }
    result = (_DWORD *)HIDWORD(v16);
    if ( v16 >= 0 )
      return (_DWORD *)sub_8A75D0(
                         *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
                         v15,
                         0x20 * HIDWORD(v16),
                         0x14);
  }
  return result;
}
