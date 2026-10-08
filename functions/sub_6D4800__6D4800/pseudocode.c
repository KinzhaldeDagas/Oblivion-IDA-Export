NiUVData *sub_6D4800()
{
  NiUVData *v0; // eax

  v0 = (NiUVData *)FormHeapAlloc(0x4Cu); /*0x6d4823*/
  if ( v0 ) /*0x6d4839*/
    return NiUVData::NiUVData(v0); /*0x6d483d*/
  else
    return 0; /*0x6d4852*/
}
