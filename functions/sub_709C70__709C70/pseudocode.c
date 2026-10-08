NiAVObject *sub_709C70()
{
  NiAVObject *v0; // esi
  NiAVObject *result; // eax

  v0 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x709c9c*/
  result = 0; /*0x709ca5*/
  if ( v0 ) /*0x709cad*/
  {
    sub_717590(v0); /*0x709cb1*/
    v0->vtbl = (NiAVObjectVtbl *)&NiScreenElements::`vftable'; /*0x709cb6*/
    return v0; /*0x709cbc*/
  }
  return result; /*0x709cbe*/
}
