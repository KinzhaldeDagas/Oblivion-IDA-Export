NiTimeController *sub_8AA920()
{
  NiTimeController *v0; // eax

  v0 = (NiTimeController *)FormHeapAlloc(0x64u); /*0x8aa943*/
  if ( v0 ) /*0x8aa959*/
    return sub_8AA810(v0); /*0x8aa95d*/
  else
    return 0; /*0x8aa972*/
}
