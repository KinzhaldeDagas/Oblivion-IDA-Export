NiObjectNET *sub_73DB40()
{
  int v0; // esi
  NiObjectNET *result; // eax

  v0 = FormHeapAlloc(0x1Cu);
  result = 0;
  if ( v0 )
  {
    NiObjectNET::NiObjectNET((NiObjectNET *)v0);
    *(_DWORD *)v0 = &NiShadeProperty::`vftable';
    *(_WORD *)(v0 + 0x18) = 1;
    return (NiObjectNET *)v0;
  }
  return result;
}
