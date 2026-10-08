int __usercall ExFilterRethrow@<eax>(_DWORD **a1@<eax>)
{
  _DWORD *v1; // eax
  int v2; // ecx

  v1 = *a1; /*0x98b014*/
  if ( *v1 != 0xE06D7363 ) /*0x98b01c*/
    return 0; /*0x98b01c*/
  if ( v1[4] != 3 ) /*0x98b022*/
    return 0; /*0x98b022*/
  v2 = v1[5]; /*0x98b024*/
  if ( v2 != 0x19930520 && v2 != 0x19930521 && v2 != 0x19930522 ) /*0x98b03d*/
    return 0; /*0x98b03d*/
  if ( v1[7] ) /*0x98b03f*/
    return 0; /*0x98b056*/
  _getptd()[0x83] = 1; /*0x98b04d*/
  return 1; /*0x98b055*/
}
