// positive sp value has been detected, the output may be wrong!
int __userpurge def_731DBE@<eax>(int a1@<esi>, int a2)
{
  if ( *(_DWORD *)(a1 + 0x10) || *(_DWORD *)(a1 + 0x14) || *(_DWORD *)(a1 + 0x18) || *(_DWORD *)(a1 + 0x1C) ) /*0x731e0f*/
  {
    *(_BYTE *)(a1 + 8) = 1; /*0x731e24*/
    return 1; /*0x731e1f*/
  }
  else
  {
    *(_BYTE *)(a1 + 8) = 0; /*0x731e18*/
    return 0; /*0x731e15*/
  }
}
