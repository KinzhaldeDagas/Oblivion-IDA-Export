bhkRefObject *sub_8B6780()
{
  bhkRefObject *v0; // eax

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u);
  if ( v0 )
    return sub_8B6650(v0);
  else
    return 0;
}
