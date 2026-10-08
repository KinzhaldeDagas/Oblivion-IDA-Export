NiTimeController *sub_6E1A00()
{
  NiTimeController *v0; // eax

  v0 = (NiTimeController *)FormHeapAlloc(0x50u); /*0x6e1a23*/
  if ( v0 ) /*0x6e1a39*/
    return sub_6E18D0(v0); /*0x6e1a3d*/
  else
    return 0; /*0x6e1a52*/
}
