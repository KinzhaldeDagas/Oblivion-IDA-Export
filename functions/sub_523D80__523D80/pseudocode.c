int sub_523D80()
{
  char *v0; // eax
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0; /*0x523d83*/
  if ( g_faceGenManager ) /*0x523d86*/
  {
    v0 = (char *)g_faceGenManager + 0xDB4; /*0x523d95*/
  }
  else
  {
    v2 = 0; /*0x523d9e*/
    v0 = (char *)&v2; /*0x523da2*/
  }
  return *(_DWORD *)v0; /*0x523dd3*/
}
