int __cdecl sub_589B10(int a1, unsigned __int8 *a2)
{
  int result; // eax
  const unsigned __int8 *v3; // eax
  _DWORD *v4; // esi
  int v5; // eax

  if ( !a1 ) /*0x589b17*/
    return 0; /*0x589b19*/
  v3 = *(const unsigned __int8 **)(a1 + 8); /*0x589b1d*/
  if ( v3 && !_mbsicmp(v3, a2) ) /*0x589b2b*/
    return a1; /*0x589b38*/
  v4 = *(_DWORD **)(a1 + 0x34); /*0x589b3c*/
  if ( !v4 ) /*0x589b41*/
    return 0; /*0x589b5c*/
  while ( 1 ) /*0x589b46*/
  {
    v5 = v4[2]; /*0x589b46*/
    v4 = (_DWORD *)*v4; /*0x589b48*/
    result = sub_589B10(v5, a2); /*0x589b4c*/
    if ( result ) /*0x589b56*/
      break; /*0x589b56*/
    if ( !v4 ) /*0x589b5a*/
      return 0; /*0x589b5a*/
  }
  return result; /*0x589b1b*/
}
