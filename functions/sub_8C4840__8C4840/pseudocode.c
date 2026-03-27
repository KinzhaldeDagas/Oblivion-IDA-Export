NiObject *sub_8C4840()
{
  NiObject *v0; // esi
  NiObject *result; // eax

  v0 = (NiObject *)FormHeapAlloc(0x20u);
  result = 0;
  if ( v0 )
  {
    NiObject_constr(v0);
    v0->__vftable = (NiObjectVtbl *)&hkPackedNiTriStripsData::`vftable';
    return v0;
  }
  return result;
}
