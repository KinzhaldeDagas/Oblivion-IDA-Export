NiObjectNET *sub_73D670()
{
  NiObjectNET *v0; // eax
  NiObjectNET *v1; // esi

  v0 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x73d694*/
  v1 = v0; /*0x73d699*/
  if ( !v0 ) /*0x73d6ac*/
    return 0; /*0x73d6d4*/
  NiObjectNET::NiObjectNET(v0); /*0x73d6b0*/
  v1->vtbl = (NiObjectVtbl **)&NiSpecularProperty::`vftable'; /*0x73d6b5*/
  LOWORD(v1[1].vtbl) = 0; /*0x73d6bb*/
  return v1; /*0x73d6c3*/
}
