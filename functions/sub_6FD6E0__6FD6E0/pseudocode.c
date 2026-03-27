NiTimeController *sub_6FD6E0()
{
  NiTimeController *v0; // eax

  v0 = (NiTimeController *)FormHeapAlloc(0x54u);
  if ( v0 )
    return sub_6FD530(v0);
  else
    return 0;
}
