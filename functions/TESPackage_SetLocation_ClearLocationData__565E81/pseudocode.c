void __userpurge TESPackage_SetLocation_::ClearLocationData(int a1@<esi>, int a2)
{
  unsigned int v2; // edi

  v2 = *(_DWORD *)(a1 + 0x24); /*0x565e81*/
  if ( v2 ) /*0x565e86*/
  {
    TESPackage_LocationData_destr(*(_DWORD **)(a1 + 0x24)); /*0x565e8a*/
    FormHeapFree(v2); /*0x565e90*/
    TESPackage_SetLocation_::Done(a1, a2); /*0x565e96*/
  }
  else
  {
    TESPackage_SetLocation_::Done(a1, a2); /*0x565e86*/
  }
}
