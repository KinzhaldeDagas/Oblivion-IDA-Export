bhkRefObject *sub_8A41F0()
{
  bhkRefObject *v0; // eax

  v0 = (bhkRefObject *)FormHeapAlloc(0x1Cu); /*0x8a4213*/
  if ( v0 ) /*0x8a4229*/
    return sub_8A4150(v0); /*0x8a422d*/
  else
    return 0; /*0x8a4242*/
}
