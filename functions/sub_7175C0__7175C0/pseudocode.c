NiAVObject *sub_7175C0()
{
  NiAVObject *v0; // esi
  NiAVObject *result; // eax

  v0 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x7175ec*/
  result = 0; /*0x7175f5*/
  if ( v0 ) /*0x7175fd*/
  {
    sub_7226C0(v0); /*0x717601*/
    v0->vtbl = (NiAVObjectVtbl *)&NiTriShape::`vftable'; /*0x717606*/
    return v0; /*0x71760c*/
  }
  return result; /*0x71760e*/
}
