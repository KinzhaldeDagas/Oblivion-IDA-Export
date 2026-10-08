unsigned int *sub_8BCF80()
{
  bhkExtraData *v0; // eax
  unsigned int *v1; // esi

  v0 = (bhkExtraData *)FormHeapAlloc(0x24u); /*0x8bcfa4*/
  if ( v0 ) /*0x8bcfba*/
    v1 = (unsigned int *)bhkExtraData::bhkExtraData(v0); /*0x8bcfc3*/
  else
    v1 = 0; /*0x8bcfc7*/
  sub_721440(v1, 0); /*0x8bcfd5*/
  return v1; /*0x8bcfdc*/
}
