_BYTE *sub_70E870()
{
  _BYTE *v0; // eax

  v0 = (_BYTE *)FormHeapAlloc(0x70u); /*0x70e893*/
  if ( v0 ) /*0x70e8a9*/
    return sub_70E340(v0); /*0x70e8ad*/
  else
    return 0; /*0x70e8c2*/
}
