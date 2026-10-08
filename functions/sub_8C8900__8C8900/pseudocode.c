bhkRefObject *sub_8C8900()
{
  bhkRefObject *v0; // eax

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8c8923*/
  if ( v0 ) /*0x8c8939*/
    return sub_8C8830(v0); /*0x8c893d*/
  else
    return 0; /*0x8c8952*/
}
