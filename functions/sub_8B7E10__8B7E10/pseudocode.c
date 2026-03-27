bhkRefObject *sub_8B7E10()
{
  bhkRefObject *v0; // eax

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u);
  if ( v0 )
    return sub_8B7D50(v0);
  else
    return 0;
}
