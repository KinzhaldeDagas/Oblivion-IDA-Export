NiObjectNET *sub_73DB40()
{
  int v0; // esi
  NiObjectNET *result; // eax

  v0 = FormHeapAlloc(0x1Cu); /*0x73db69*/
  result = 0; /*0x73db72*/
  if ( v0 ) /*0x73db7a*/
  {
    NiObjectNET::NiObjectNET((NiObjectNET *)v0); /*0x73db7e*/
    *(_DWORD *)v0 = &NiShadeProperty::`vftable'; /*0x73db83*/
    *(_WORD *)(v0 + 0x18) = 1; /*0x73db89*/
    return (NiObjectNET *)v0; /*0x73db8f*/
  }
  return result; /*0x73db91*/
}
