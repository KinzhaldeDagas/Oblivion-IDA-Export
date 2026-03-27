NiScreenGeometryData *sub_738AE0()
{
  NiScreenGeometryData *v0; // eax

  v0 = (NiScreenGeometryData *)FormHeapAlloc(0x70u);
  if ( v0 )
    return NiScreenGeometryData::NiScreenGeometryData(v0);
  else
    return 0;
}
