NiObject *sub_89EFC0()
{
  NiObject *v0; // esi
  NiObject *result; // eax

  v0 = (NiObject *)FormHeapAlloc(0x14u); /*0x89efe9*/
  result = 0; /*0x89eff2*/
  if ( v0 ) /*0x89effa*/
  {
    sub_897600(v0); /*0x89effe*/
    v0->__vftable = (NiObjectVtbl *)&bhkPCollisionObject::`vftable'; /*0x89f003*/
    return v0; /*0x89f009*/
  }
  return result; /*0x89f00b*/
}
