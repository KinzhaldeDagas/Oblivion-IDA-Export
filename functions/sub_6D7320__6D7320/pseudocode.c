NiTimeController *sub_6D7320()
{
  NiTimeController *v0; // eax

  v0 = (NiTimeController *)FormHeapAlloc(0x58u);
  if ( v0 )
    return sub_6D7120(v0, 0, 0, 0);
  else
    return 0;
}
