NiObject *sub_732B00()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x44u); /*0x732b24*/
  v1 = v0; /*0x732b29*/
  if ( !v0 ) /*0x732b3c*/
    return 0; /*0x732b65*/
  sub_728770(v0); /*0x732b40*/
  v1->__vftable = (NiObjectVtbl *)&NiLinesData::`vftable'; /*0x732b45*/
  v1[8].__vftable = 0; /*0x732b4b*/
  return v1; /*0x732b54*/
}
