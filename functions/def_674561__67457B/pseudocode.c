// positive sp value has been detected, the output may be wrong!
_DWORD *__userpurge def_674561@<eax>(int a1@<esi>, int a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *result; // eax

  v3 = *(_DWORD **)(a1 + 0x74); /*0x67457d*/
  if ( v3 ) /*0x674586*/
  {
    if ( a2 == *v3 ) /*0x67458a*/
      *(_DWORD *)(a1 + 0x74) = 0; /*0x67458c*/
  }
  result = *(_DWORD **)(a1 + 0x78); /*0x674593*/
  if ( result ) /*0x674598*/
  {
    if ( a2 == *result ) /*0x67459c*/
      *(_DWORD *)(a1 + 0x78) = 0; /*0x67459e*/
  }
  return result; /*0x6745bb*/
}
