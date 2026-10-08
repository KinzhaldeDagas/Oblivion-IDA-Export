NiSequence *sub_6D84A0()
{
  NiSequence *v0; // eax

  v0 = (NiSequence *)FormHeapAlloc(0x34u); /*0x6d84c3*/
  if ( v0 ) /*0x6d84d9*/
    return NiSequence::NiSequence(v0, 0, 0xCu, 0xC); /*0x6d84e3*/
  else
    return 0; /*0x6d84f8*/
}
