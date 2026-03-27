BSNodeReferences *sub_6FE0F0()
{
  BSNodeReferences *v0; // eax

  v0 = (BSNodeReferences *)FormHeapAlloc(0x18u);
  if ( v0 )
    return BSNodeReferences::BSNodeReferences(v0);
  else
    return 0;
}
