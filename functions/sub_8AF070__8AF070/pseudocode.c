bhkRefObject *sub_8AF070()
{
  bhkRefObject *v0; // eax

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8af093*/
  if ( v0 ) /*0x8af0a9*/
    return sub_8AF020(v0); /*0x8af0ad*/
  else
    return 0; /*0x8af0c2*/
}
