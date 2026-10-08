NiTimeController *sub_6D7320()
{
  NiTimeController *v0; // eax

  v0 = (NiTimeController *)FormHeapAlloc(0x58u); /*0x6d7343*/
  if ( v0 ) /*0x6d7359*/
    return sub_6D7120(v0, 0, 0, 0); /*0x6d7363*/
  else
    return 0; /*0x6d7378*/
}
