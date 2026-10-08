bhkRefObject *sub_8B6780()
{
  bhkRefObject *v0; // eax

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8b67a3*/
  if ( v0 ) /*0x8b67b9*/
    return sub_8B6650(v0); /*0x8b67bd*/
  else
    return 0; /*0x8b67d2*/
}
