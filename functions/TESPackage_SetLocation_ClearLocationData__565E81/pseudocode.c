int __userpurge TESPackage_SetLocation_::ClearLocationData@<eax>(int a1@<esi>, int a2)
{
  unsigned int v2; // edi

  v2 = *(_DWORD *)(a1 + 0x24);
  if ( !v2 )
    return TESPackage_SetLocation_::Done(a2);
  TESPackage_LocationData_destr(*(_DWORD **)(a1 + 0x24));
  FormHeapFree(v2);
  return TESPackage_SetLocation_::Done(a2);
}
