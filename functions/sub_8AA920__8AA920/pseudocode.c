NiTimeController *sub_8AA920()
{
  NiTimeController *v0; // eax

  v0 = (NiTimeController *)FormHeapAlloc(0x64u);
  if ( v0 )
    return sub_8AA810(v0);
  else
    return 0;
}
