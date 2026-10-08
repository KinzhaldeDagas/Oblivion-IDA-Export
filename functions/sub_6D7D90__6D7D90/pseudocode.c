NiObjectNET *sub_6D7D90()
{
  NiObjectNET *v0; // esi
  NiObjectNET *result; // eax

  v0 = (NiObjectNET *)FormHeapAlloc(0x18u); /*0x6d7db9*/
  result = 0; /*0x6d7dc2*/
  if ( v0 ) /*0x6d7dca*/
  {
    NiObjectNET::NiObjectNET(v0); /*0x6d7dce*/
    v0->vtbl = (NiObjectVtbl **)&NiSequenceStreamHelper::`vftable'; /*0x6d7dd3*/
    return v0; /*0x6d7dd9*/
  }
  return result; /*0x6d7ddb*/
}
