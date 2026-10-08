int __thiscall sub_8BC0A0(_DWORD *this)
{
  int v2; // edx
  int result; // eax
  int v4; // ecx
  int v5; // ecx

  *(_DWORD *)(*(this + 2) + 4) = 0; /*0x8bc0a6*/
  v2 = *(this + 2); /*0x8bc0ad*/
  *(this + 3) = 0; /*0x8bc0b0*/
  result = *(_DWORD *)(v2 + 4) + 1; /*0x8bc0bd*/
  v4 = *(_DWORD *)(v2 + 8) & 0x3FFFFFFF; /*0x8bc0be*/
  if ( v4 < result ) /*0x8bc0c6*/
  {
    v5 = 2 * v4; /*0x8bc0c8*/
    if ( result < v5 ) /*0x8bc0cc*/
      result = v5; /*0x8bc0ce*/
    result = sub_8A6E40((const void **)v2, result, 1); /*0x8bc0d4*/
  }
  *(_BYTE *)(*(_DWORD *)(*(this + 2) + 4) + *(_DWORD *)*(this + 2)) = 0; /*0x8bc0e4*/
  return result; /*0x8bc0e8*/
}
