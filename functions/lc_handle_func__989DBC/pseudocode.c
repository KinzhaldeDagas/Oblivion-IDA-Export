char *___lc_handle_func()
{
  DWORD *v0; // ecx
  char *v1; // eax

  v0 = _getptd(); /*0x989dc1*/
  v1 = (char *)v0[0x1B]; /*0x989dc3*/
  if ( v1 != (char *)off_B31998 && (dword_B318B0 & v0[0x1C]) == 0 ) /*0x989dd7*/
    v1 = (char *)__updatetlocinfo(); /*0x989dd9*/
  return v1 + 0xC; /*0x989de1*/
}
