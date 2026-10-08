unsigned int *sub_6FBA20()
{
  NiObject *v0; // eax
  unsigned int *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x24u); /*0x6fba44*/
  if ( v0 ) /*0x6fba5a*/
    v1 = (unsigned int *)BSBound_BSBound(v0); /*0x6fba63*/
  else
    v1 = 0; /*0x6fba67*/
  sub_721440(v1, 0); /*0x6fba75*/
  return v1; /*0x6fba7c*/
}
