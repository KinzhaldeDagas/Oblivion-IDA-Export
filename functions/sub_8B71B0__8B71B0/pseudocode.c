NiObject *sub_8B71B0()
{
  NiObject *v0; // esi
  NiObject *result; // eax

  v0 = (NiObject *)FormHeapAlloc(0x14u); /*0x8b71d9*/
  result = 0; /*0x8b71e2*/
  if ( v0 ) /*0x8b71ea*/
  {
    sub_897600(v0); /*0x8b71ee*/
    v0->__vftable = (NiObjectVtbl *)&bhkSPCollisionObject::`vftable'; /*0x8b71f3*/
    return v0; /*0x8b71f9*/
  }
  return result; /*0x8b71fb*/
}
