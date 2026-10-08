NiObject *sub_89E960()
{
  NiObject *v0; // esi
  NiObject *result; // eax

  v0 = (NiObject *)FormHeapAlloc(0x14u); /*0x89e989*/
  result = 0; /*0x89e992*/
  if ( v0 ) /*0x89e99a*/
  {
    sub_897600(v0); /*0x89e99e*/
    v0->__vftable = (NiObjectVtbl *)&bhkCollisionObject::`vftable'; /*0x89e9a3*/
    return v0; /*0x89e9a9*/
  }
  return result; /*0x89e9ab*/
}
