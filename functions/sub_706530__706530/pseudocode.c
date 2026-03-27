NiObjectNET *sub_706530()
{
  int v0; // esi
  NiObjectNET *result; // eax

  v0 = FormHeapAlloc(0x1Cu);
  result = 0;
  if ( v0 )
  {
    NiObjectNET::NiObjectNET((NiObjectNET *)v0);
    *(_DWORD *)v0 = &NiVertexColorProperty::`vftable';
    *(_WORD *)(v0 + 0x18) = 8;
    return (NiObjectNET *)v0;
  }
  return result;
}
