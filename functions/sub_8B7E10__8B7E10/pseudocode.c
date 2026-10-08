bhkRefObject *sub_8B7E10()
{
  bhkRefObject *v0; // eax

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8b7e33*/
  if ( v0 ) /*0x8b7e49*/
    return sub_8B7D50(v0); /*0x8b7e4d*/
  else
    return 0; /*0x8b7e62*/
}
