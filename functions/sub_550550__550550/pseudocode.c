int sub_550550()
{
  char *v0; // eax
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0; /*0x550553*/
  if ( g_faceGenManager ) /*0x550556*/
  {
    v0 = (char *)g_faceGenManager + 0xDB0; /*0x550565*/
  }
  else
  {
    v2 = 0; /*0x55056e*/
    v0 = (char *)&v2; /*0x550572*/
  }
  return *(_DWORD *)v0; /*0x5505a3*/
}
