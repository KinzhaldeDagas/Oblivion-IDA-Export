NiObject *sub_73B520()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x54u); /*0x73b544*/
  v1 = v0; /*0x73b549*/
  if ( !v0 ) /*0x73b55c*/
    return 0; /*0x73b58a*/
  sub_719D20(v0); /*0x73b560*/
  v1->__vftable = (NiObjectVtbl *)&NiTriStripsDynamicData::`vftable'; /*0x73b565*/
  LOWORD(v1[0xA].__vftable) = 0; /*0x73b56b*/
  HIWORD(v1[0xA].__vftable) = 0; /*0x73b571*/
  return v1; /*0x73b579*/
}
