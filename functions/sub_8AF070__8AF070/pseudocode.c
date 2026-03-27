bhkRefObject *sub_8AF070()
{
  bhkRefObject *v0; // eax

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u);
  if ( v0 )
    return sub_8AF020(v0);
  else
    return 0;
}
