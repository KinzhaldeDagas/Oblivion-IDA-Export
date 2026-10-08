NiAVObject *sub_719A40()
{
  NiAVObject *v0; // esi
  NiAVObject *result; // eax

  v0 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x719a6c*/
  result = 0; /*0x719a75*/
  if ( v0 ) /*0x719a7d*/
  {
    sub_7226C0(v0); /*0x719a81*/
    v0->vtbl = (NiAVObjectVtbl *)&NiTriStrips::`vftable'; /*0x719a86*/
    return v0; /*0x719a8c*/
  }
  return result; /*0x719a8e*/
}
