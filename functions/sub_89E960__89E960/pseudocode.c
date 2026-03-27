NiObject *sub_89E960()
{
  NiObject *v0; // esi
  NiObject *result; // eax

  v0 = (NiObject *)FormHeapAlloc(0x14u);
  result = 0;
  if ( v0 )
  {
    sub_897600(v0);
    v0->__vftable = (NiObjectVtbl *)&bhkCollisionObject::`vftable';
    return v0;
  }
  return result;
}
