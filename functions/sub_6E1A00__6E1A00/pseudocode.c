NiTimeController *sub_6E1A00()
{
  NiTimeController *v0; // eax

  v0 = (NiTimeController *)FormHeapAlloc(0x50u);
  if ( v0 )
    return sub_6E18D0(v0);
  else
    return 0;
}
