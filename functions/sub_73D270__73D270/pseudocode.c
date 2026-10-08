NiLight *sub_73D270()
{
  NiLight *v0; // eax

  v0 = (NiLight *)FormHeapAlloc(0x128u); /*0x73d296*/
  if ( v0 ) /*0x73d2ac*/
    return sub_73D160(v0); /*0x73d2b0*/
  else
    return 0; /*0x73d2c5*/
}
