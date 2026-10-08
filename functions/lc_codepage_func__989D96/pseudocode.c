int ___lc_codepage_func()
{
  DWORD *v0; // ecx
  int v1; // eax

  v0 = _getptd(); /*0x989d9b*/
  v1 = v0[0x1B]; /*0x989d9d*/
  if ( (_UNKNOWN *)v1 != off_B31998 && (dword_B318B0 & v0[0x1C]) == 0 ) /*0x989db1*/
    v1 = __updatetlocinfo(); /*0x989db3*/
  return *(_DWORD *)(v1 + 4); /*0x989dbb*/
}
