bhkRefObject *sub_8AF380()
{
  bhkRefObject *v0; // eax

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8af3a3*/
  if ( v0 ) /*0x8af3b9*/
    return sub_8AF2C0(v0); /*0x8af3bd*/
  else
    return 0; /*0x8af3d2*/
}
