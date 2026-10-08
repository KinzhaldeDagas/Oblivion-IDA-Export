NiObject *sub_8C4840()
{
  NiObject *v0; // esi
  NiObject *result; // eax

  v0 = (NiObject *)FormHeapAlloc(0x20u); /*0x8c4869*/
  result = 0; /*0x8c4872*/
  if ( v0 ) /*0x8c487a*/
  {
    NiObject_constr(v0); /*0x8c487e*/
    v0->__vftable = (NiObjectVtbl *)&hkPackedNiTriStripsData::`vftable'; /*0x8c4883*/
    return v0; /*0x8c4889*/
  }
  return result; /*0x8c488b*/
}
