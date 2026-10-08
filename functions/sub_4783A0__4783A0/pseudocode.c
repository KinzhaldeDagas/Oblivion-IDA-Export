int sub_4783A0()
{
  char *v0; // eax
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0; /*0x4783a3*/
  if ( g_faceGenManager ) /*0x4783a6*/
  {
    v0 = (char *)g_faceGenManager + 0xDB8; /*0x4783b5*/
  }
  else
  {
    v2 = 0; /*0x4783be*/
    v0 = (char *)&v2; /*0x4783c2*/
  }
  return *(_DWORD *)v0; /*0x4783f3*/
}
