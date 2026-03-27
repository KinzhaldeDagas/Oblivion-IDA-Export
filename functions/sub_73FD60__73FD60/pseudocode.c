NiObjectNET *sub_73FD60()
{
  NiObjectNET *v0; // esi
  NiObjectNET *result; // eax

  v0 = (NiObjectNET *)FormHeapAlloc(0x18u);
  result = 0;
  if ( v0 )
  {
    NiObjectNET::NiObjectNET(v0);
    v0->vtbl = (NiObjectVtbl **)&NiRendererSpecificProperty::`vftable';
    return v0;
  }
  return result;
}
