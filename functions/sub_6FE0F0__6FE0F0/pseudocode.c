BSNodeReferences *sub_6FE0F0()
{
  BSNodeReferences *v0; // eax

  v0 = (BSNodeReferences *)FormHeapAlloc(0x18u); /*0x6fe113*/
  if ( v0 ) /*0x6fe129*/
    return BSNodeReferences::BSNodeReferences(v0); /*0x6fe12d*/
  else
    return 0; /*0x6fe142*/
}
