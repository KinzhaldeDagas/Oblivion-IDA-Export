NiTimeController *sub_6C5BB0()
{
  NiTimeController *v0; // eax

  v0 = (NiTimeController *)FormHeapAlloc(0x80u);
  if ( v0 )
    return sub_6C5520(v0);
  else
    return 0;
}
