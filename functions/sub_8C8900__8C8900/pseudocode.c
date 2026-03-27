bhkRefObject *sub_8C8900()
{
  bhkRefObject *v0; // eax

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u);
  if ( v0 )
    return sub_8C8830(v0);
  else
    return 0;
}
