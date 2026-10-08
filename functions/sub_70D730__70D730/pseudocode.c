NiCamera *sub_70D730()
{
  NiCamera *v0; // eax

  v0 = (NiCamera *)FormHeapAlloc(0x124u); /*0x70d756*/
  if ( v0 ) /*0x70d76c*/
    return sub_70D590(v0); /*0x70d770*/
  else
    return 0; /*0x70d785*/
}
