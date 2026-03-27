NiUVData *sub_6D4800()
{
  NiUVData *v0; // eax

  v0 = (NiUVData *)FormHeapAlloc(0x4Cu);
  if ( v0 )
    return NiUVData::NiUVData(v0);
  else
    return 0;
}
