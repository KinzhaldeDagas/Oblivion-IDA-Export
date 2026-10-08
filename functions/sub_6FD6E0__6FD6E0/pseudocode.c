NiTimeController *sub_6FD6E0()
{
  NiTimeController *v0; // eax

  v0 = (NiTimeController *)FormHeapAlloc(0x54u); /*0x6fd703*/
  if ( v0 ) /*0x6fd719*/
    return sub_6FD530(v0); /*0x6fd71d*/
  else
    return 0; /*0x6fd732*/
}
