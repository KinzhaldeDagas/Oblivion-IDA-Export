// positive sp value has been detected, the output may be wrong!
char __usercall def_60BEF2@<al>(char a1@<bl>, int a2@<esi>)
{
  if ( *(_DWORD *)(a2 + 0x5C) ) /*0x60bf2f*/
  {
    FormHeapFree(*(_DWORD *)(a2 + 0x5C)); /*0x60bf37*/
    *(_DWORD *)(a2 + 0x5C) = 0; /*0x60bf3f*/
  }
  *(_DWORD *)(a2 + 0x60) = 0; /*0x60bf46*/
  return a1; /*0x60bf51*/
}
