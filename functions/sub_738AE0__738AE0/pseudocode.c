NiScreenGeometryData *sub_738AE0()
{
  NiScreenGeometryData *v0; // eax

  v0 = (NiScreenGeometryData *)FormHeapAlloc(0x70u); /*0x738b03*/
  if ( v0 ) /*0x738b19*/
    return NiScreenGeometryData::NiScreenGeometryData(v0); /*0x738b1d*/
  else
    return 0; /*0x738b32*/
}
