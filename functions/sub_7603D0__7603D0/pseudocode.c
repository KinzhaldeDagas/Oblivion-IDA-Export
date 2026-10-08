void sub_7603D0()
{
  unsigned int v0; // esi

  v0 = g_NiD3DPassPool; /*0x7603d9*/
  if ( g_NiD3DPassPool ) /*0x7603d0*/
  {
    sub_75E0A0((unsigned int *)g_NiD3DPassPool); /*0x7603dd*/
    FormHeapFree(v0); /*0x7603e3*/
  }
  g_NiD3DPassPool = 0; /*0x7603eb*/
}
