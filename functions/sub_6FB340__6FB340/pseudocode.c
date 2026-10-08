unsigned int *sub_6FB340()
{
  NiObject *v0; // eax
  unsigned int *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x1Cu); /*0x6fb364*/
  if ( v0 ) /*0x6fb37a*/
    v1 = (unsigned int *)sub_6FB280(v0); /*0x6fb383*/
  else
    v1 = 0; /*0x6fb387*/
  sub_721440(v1, 0); /*0x6fb395*/
  return v1; /*0x6fb39c*/
}
