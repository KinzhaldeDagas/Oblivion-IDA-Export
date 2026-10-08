NiObjectNET *sub_7069C0()
{
  NiObjectNET *v0; // eax
  NiObjectNET *v1; // esi

  v0 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x7069e4*/
  v1 = v0; /*0x7069e9*/
  if ( !v0 ) /*0x7069fc*/
    return 0; /*0x706a24*/
  NiObjectNET::NiObjectNET(v0); /*0x706a00*/
  v1->vtbl = (NiObjectVtbl **)&NiWireframeProperty::`vftable'; /*0x706a05*/
  LOWORD(v1[1].vtbl) = 0; /*0x706a0b*/
  return v1; /*0x706a13*/
}
