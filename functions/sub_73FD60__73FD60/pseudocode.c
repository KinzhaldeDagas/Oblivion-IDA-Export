NiObjectNET *sub_73FD60()
{
  NiObjectNET *v0; // esi
  NiObjectNET *result; // eax

  v0 = (NiObjectNET *)FormHeapAlloc(0x18u); /*0x73fd89*/
  result = 0; /*0x73fd92*/
  if ( v0 ) /*0x73fd9a*/
  {
    NiObjectNET::NiObjectNET(v0); /*0x73fd9e*/
    v0->vtbl = (NiObjectVtbl **)&NiRendererSpecificProperty::`vftable'; /*0x73fda3*/
    return v0; /*0x73fda9*/
  }
  return result; /*0x73fdab*/
}
