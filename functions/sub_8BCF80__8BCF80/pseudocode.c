unsigned int *sub_8BCF80()
{
  bhkExtraData *v0; // eax
  unsigned int *v1; // esi

  v0 = (bhkExtraData *)FormHeapAlloc(0x24u);
  if ( v0 )
    v1 = (unsigned int *)bhkExtraData::bhkExtraData(v0);
  else
    v1 = 0;
  sub_721440(v1, 0);
  return v1;
}
