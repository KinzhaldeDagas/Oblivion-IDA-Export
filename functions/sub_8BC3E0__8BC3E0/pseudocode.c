__m128 *__userpurge sub_8BC3E0@<eax>(int a1@<ecx>, double a2@<st0>, __m128 **a3, _DWORD **a4)
{
  _DWORD **v4; // ebx
  __m128 *v6; // edi
  __m128 *v7; // eax
  __m128 *v8; // eax
  __m128 *v9; // ecx
  int v10; // esi
  __m128 *v11; // edi
  __m128 *result; // eax
  __m128 *v13; // edi
  int v14; // eax
  int v15; // eax
  __m128 *v16; // ecx
  int v17; // esi
  __m128 *v18; // edi
  __int32 v19; // ecx

  v4 = a4;
  if ( !*sub_90D210(dword_BA82B4, &a4, *a4) || *v4 == (_DWORD *)&unk_BA826C )
  {
    if ( !*sub_90D210(dword_BA8218, &a4, *v4) || *v4 == (_DWORD *)&unk_BA81F4 )
    {
      result = (__m128 *)sub_90D210(dword_BA81D0, &a4, *v4);
      if ( result->m128_i8[0] )
      {
        result = *a3;
        v19 = (*a3)->m128_i32[2];
        if ( v19 )
        {
          if ( *(__m128 **)(v19 + 0x34) == result )
          {
            *a3 = 0;
            *v4 = 0;
          }
        }
      }
    }
    else
    {
      v13 = *a3;
      v14 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x70, 0x24);
      *(_WORD *)(v14 + 4) = 0x70;
      v15 = sub_90C460(v14, a2, v13->m128_f32);
      v16 = *(__m128 **)(a1 + 8);
      v17 = a1 + 4;
      v18 = (__m128 *)v15;
      result = (__m128 *)(*(_DWORD *)(v17 + 8) & 0x3FFFFFFF);
      if ( v16 == result )
        result = (__m128 *)sub_8A6EE0((const void **)v17, 4);
      *(_DWORD *)(*(_DWORD *)v17 + 4 * (*(_DWORD *)(v17 + 4))++) = v18;
      *a3 = v18;
      *v4 = &unk_BA81F4;
    }
  }
  else
  {
    v6 = *a3;
    v7 = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x50, 0x24);
    v7->m128_i16[2] = 0x50;
    v8 = sub_90D0E0(v7, v6);
    v9 = *(__m128 **)(a1 + 8);
    v10 = a1 + 4;
    v11 = v8;
    result = (__m128 *)(*(_DWORD *)(v10 + 8) & 0x3FFFFFFF);
    if ( v9 == result )
      result = (__m128 *)sub_8A6EE0((const void **)v10, 4);
    *(_DWORD *)(*(_DWORD *)v10 + 4 * (*(_DWORD *)(v10 + 4))++) = v11;
    *a3 = v11;
    *v4 = &unk_BA826C;
  }
  return result;
}
