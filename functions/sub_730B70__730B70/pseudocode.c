NiObject *sub_730B70()
{
  NiObject *v0; // esi
  NiObject *result; // eax

  v0 = (NiObject *)FormHeapAlloc(0xCu); /*0x730b99*/
  result = 0; /*0x730ba2*/
  if ( v0 ) /*0x730baa*/
  {
    sub_721350(v0); /*0x730bae*/
    v0->__vftable = (NiObjectVtbl *)&NiVertWeightsExtraData::`vftable'; /*0x730bb3*/
    return v0; /*0x730bb9*/
  }
  return result; /*0x730bbb*/
}
