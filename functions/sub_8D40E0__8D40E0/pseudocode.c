_DWORD *__cdecl sub_8D40E0(float a1, _DWORD *a2, _DWORD *a3, int a4)
{
  _DWORD *result; // eax
  int i; // edi
  int v6; // ebp
  int v7; // esi

  result = a2; /*0x8d40e0*/
  for ( i = 0; i < a2[0xE]; *(float *)(v7 + 0x5C) = fConstant_1 / (*(float *)(a2[7] + 0x18) - a1) ) /*0x8d40ec*/
  {
    v6 = *(_DWORD *)(a2[0xD] + 4 * i); /*0x8d4107*/
    v7 = *(_DWORD *)(v6 + 0x50) + 0x10; /*0x8d4111*/
    sub_8DD530(a1, (__m128 *)v7); /*0x8d4116*/
    if ( *(_BYTE *)(i + *a3) != 8 ) /*0x8d4129*/
    {
      if ( *(_DWORD *)(a4 + 4) == (*(_DWORD *)(a4 + 8) & 0x3FFFFFFF) ) /*0x8d4138*/
        sub_8A6EE0((const void **)a4, 4); /*0x8d413d*/
      *(_DWORD *)(*(_DWORD *)a4 + 4 * (*(_DWORD *)(a4 + 4))++) = v6; /*0x8d414a*/
      *(_BYTE *)(i + *a3) = 8; /*0x8d4156*/
    }
    result = a2; /*0x8d4162*/
    *(_OWORD *)(v7 + 0x40) = *(_OWORD *)(v7 + 0x50); /*0x8d4166*/
    *(_OWORD *)(v7 + 0x60) = *(_OWORD *)(v7 + 0x70); /*0x8d416e*/
    *(float *)(v7 + 0x4C) = a1; /*0x8d4172*/
    ++i; /*0x8d417b*/
  }
  return result; /*0x8d4195*/
}
