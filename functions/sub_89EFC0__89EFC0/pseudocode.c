NiObject *sub_89EFC0()
{
  NiObject *v0; // esi
  NiObject *result; // eax

  v0 = (NiObject *)FormHeapAlloc(0x14u);
  result = 0;
  if ( v0 )
  {
    sub_897600(v0);
    v0->__vftable = (NiObjectVtbl *)&bhkPCollisionObject::`vftable';
    return v0;
  }
  return result;
}
