unsigned int *sub_6FA900()
{
  NiObject *v0; // eax
  unsigned int *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x10u); /*0x6fa924*/
  if ( v0 ) /*0x6fa93a*/
    v1 = (unsigned int *)BSXFlags_constr(v0); /*0x6fa943*/
  else
    v1 = 0; /*0x6fa947*/
  sub_721440(v1, 0); /*0x6fa955*/
  return v1; /*0x6fa95c*/
}
