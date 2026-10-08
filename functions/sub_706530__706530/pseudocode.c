NiObjectNET *sub_706530()
{
  int v0; // esi
  NiObjectNET *result; // eax

  v0 = FormHeapAlloc(0x1Cu); /*0x706559*/
  result = 0; /*0x706562*/
  if ( v0 ) /*0x70656a*/
  {
    NiObjectNET::NiObjectNET((NiObjectNET *)v0); /*0x70656e*/
    *(_DWORD *)v0 = &NiVertexColorProperty::`vftable'; /*0x706573*/
    *(_WORD *)(v0 + 0x18) = 8; /*0x706579*/
    return (NiObjectNET *)v0; /*0x70657f*/
  }
  return result; /*0x706581*/
}
