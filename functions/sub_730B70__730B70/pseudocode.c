NiObject *sub_730B70()
{
  NiObject *v0; // esi
  NiObject *result; // eax

  v0 = (NiObject *)FormHeapAlloc(0xCu);
  result = 0;
  if ( v0 )
  {
    sub_721350(v0);
    v0->__vftable = (NiObjectVtbl *)&NiVertWeightsExtraData::`vftable';
    return v0;
  }
  return result;
}
