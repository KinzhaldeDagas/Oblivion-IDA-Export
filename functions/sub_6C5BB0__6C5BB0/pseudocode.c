NiTimeController *sub_6C5BB0()
{
  NiTimeController *v0; // eax

  v0 = (NiTimeController *)FormHeapAlloc(0x80u); /*0x6c5bd6*/
  if ( v0 ) /*0x6c5bec*/
    return sub_6C5520(v0); /*0x6c5bf0*/
  else
    return 0; /*0x6c5c05*/
}
