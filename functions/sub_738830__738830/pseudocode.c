NiAVObject *sub_738830()
{
  NiAVObject *v0; // esi
  NiAVObject *result; // eax

  v0 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x73885c*/
  result = 0; /*0x738865*/
  if ( v0 ) /*0x73886d*/
  {
    sub_717590(v0); /*0x738871*/
    v0->vtbl = (NiAVObjectVtbl *)&NiScreenGeometry::`vftable'; /*0x738876*/
    return v0; /*0x73887c*/
  }
  return result; /*0x73887e*/
}
