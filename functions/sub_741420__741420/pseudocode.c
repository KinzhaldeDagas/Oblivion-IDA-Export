NiObjectNET *sub_741420()
{
  NiObjectNET *v0; // eax
  NiObjectNET *v1; // esi

  v0 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x741444*/
  v1 = v0; /*0x741449*/
  if ( !v0 ) /*0x74145c*/
    return 0; /*0x741484*/
  NiObjectNET::NiObjectNET(v0); /*0x741460*/
  v1->vtbl = (NiObjectVtbl **)&NiDitherProperty::`vftable'; /*0x741465*/
  LOWORD(v1[1].vtbl) = 0; /*0x74146b*/
  return v1; /*0x741473*/
}
