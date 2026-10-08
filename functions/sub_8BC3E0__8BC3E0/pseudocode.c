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

  v4 = a4; /*0x8bc3e1*/
  if ( !*sub_90D210(unk_BA82B4, &a4, *a4) || *v4 == unk_BA826C ) /*0x8bc407*/
  {
    if ( !*sub_90D210(unk_BA8218, &a4, *v4) || *v4 == unk_BA81F4 ) /*0x8bc484*/
    {
      result = (__m128 *)sub_90D210(unk_BA81D0, &a4, *v4); /*0x8bc4f1*/
      if ( result->m128_i8[0] ) /*0x8bc4f6*/
      {
        result = *a3; /*0x8bc4ff*/
        v19 = (*a3)->m128_i32[2]; /*0x8bc501*/
        if ( v19 ) /*0x8bc506*/
        {
          if ( *(__m128 **)(v19 + 0x34) == result ) /*0x8bc50b*/
          {
            *a3 = 0; /*0x8bc50d*/
            *v4 = 0; /*0x8bc513*/
          }
        }
      }
    }
    else
    {
      v13 = *a3; /*0x8bc492*/
      v14 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x70, 0x24); /*0x8bc499*/
      *(_WORD *)(v14 + 4) = 0x70; /*0x8bc49f*/
      v15 = sub_90C460(v14, a2, v13->m128_f32); /*0x8bc4a5*/
      v16 = *(__m128 **)(a1 + 8); /*0x8bc4aa*/
      v17 = a1 + 4; /*0x8bc4ad*/
      v18 = (__m128 *)v15; /*0x8bc4b0*/
      result = (__m128 *)(*(_DWORD *)(v17 + 8) & 0x3FFFFFFF); /*0x8bc4b5*/
      if ( v16 == result ) /*0x8bc4bc*/
        result = (__m128 *)sub_8A6EE0((const void **)v17, 4); /*0x8bc4c1*/
      *(_DWORD *)(*(_DWORD *)v17 + 4 * (*(_DWORD *)(v17 + 4))++) = v18; /*0x8bc4ce*/
      *a3 = v18; /*0x8bc4d4*/
      *v4 = unk_BA81F4; /*0x8bc4da*/
    }
  }
  else
  {
    v6 = *a3; /*0x8bc415*/
    v7 = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x50, 0x24); /*0x8bc41c*/
    v7->m128_i16[2] = 0x50; /*0x8bc422*/
    v8 = sub_90D0E0(v7, v6); /*0x8bc428*/
    v9 = *(__m128 **)(a1 + 8); /*0x8bc42d*/
    v10 = a1 + 4; /*0x8bc430*/
    v11 = v8; /*0x8bc433*/
    result = (__m128 *)(*(_DWORD *)(v10 + 8) & 0x3FFFFFFF); /*0x8bc438*/
    if ( v9 == result ) /*0x8bc43f*/
      result = (__m128 *)sub_8A6EE0((const void **)v10, 4); /*0x8bc444*/
    *(_DWORD *)(*(_DWORD *)v10 + 4 * (*(_DWORD *)(v10 + 4))++) = v11; /*0x8bc451*/
    *a3 = v11; /*0x8bc457*/
    *v4 = unk_BA826C; /*0x8bc45d*/
  }
  return result; /*0x8bc45a*/
}
