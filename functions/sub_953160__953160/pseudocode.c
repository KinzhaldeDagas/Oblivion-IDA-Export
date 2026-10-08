signed int __thiscall sub_953160(int *this, int a2, _DWORD *a3)
{
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // esi
  _DWORD *i; // ecx

  v3 = *(this + 2); /*0x953160*/
  v4 = 0; /*0x953164*/
  if ( v3 <= 0 ) /*0x953169*/
    return 1; /*0x953180*/
  v5 = (_DWORD *)*(this + 1); /*0x95316b*/
  for ( i = v5; *i != a2; i += 2 ) /*0x953172*/
  {
    if ( ++v4 >= v3 ) /*0x95317e*/
      return 1; /*0x95317e*/
  }
  *a3 = v5[2 * v4 + 1]; /*0x953194*/
  return 0; /*0x953180*/
}
