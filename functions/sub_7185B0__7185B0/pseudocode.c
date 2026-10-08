NiObjectNET *sub_7185B0()
{
  NiObjectNET *v0; // eax
  NiObjectNET *v1; // esi

  v0 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x7185d4*/
  v1 = v0; /*0x7185d9*/
  if ( !v0 ) /*0x7185ec*/
    return 0; /*0x718618*/
  NiObjectNET::NiObjectNET(v0); /*0x7185f0*/
  v1->vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable'; /*0x7185f5*/
  LOWORD(v1[1].vtbl) = 0xEC; /*0x7185fb*/
  BYTE2(v1[1].vtbl) = 0; /*0x718601*/
  return v1; /*0x718607*/
}
