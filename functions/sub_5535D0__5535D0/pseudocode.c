void sub_5535D0()
{
  void *v0; // esi

  if ( g_faceGenManager ) /*0x5535d0*/
  {
    v0 = g_faceGenManager; /*0x5535db*/
    sub_553000((char *)g_faceGenManager); /*0x5535dd*/
    FormHeapFree((unsigned int)v0); /*0x5535e3*/
    g_faceGenManager = 0; /*0x5535eb*/
  }
}
