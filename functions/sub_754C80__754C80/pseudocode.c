char *sub_754C80()
{
  char *v0; // eax

  v0 = (char *)FormHeapAlloc(0xB0u);
  if ( v0 )
    return sub_754B20(v0, 1.0, 0, 0, 0, 0, 1.0);
  else
    return 0;
}
