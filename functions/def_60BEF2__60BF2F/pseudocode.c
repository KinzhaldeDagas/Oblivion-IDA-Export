// positive sp value has been detected, the output may be wrong!
char __usercall def_60BEF2@<al>(char a1@<bl>, int a2@<esi>)
{
  if ( *(_DWORD *)(a2 + 0x5C) )
  {
    FormHeapFree(*(_DWORD *)(a2 + 0x5C));
    *(_DWORD *)(a2 + 0x5C) = 0;
  }
  *(_DWORD *)(a2 + 0x60) = 0;
  return a1;
}
