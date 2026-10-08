const unsigned __int16 *__cdecl __pctype_func()
{
  DWORD *v0; // ecx
  int v1; // eax

  v0 = _getptd(); /*0x9899dd*/
  v1 = v0[0x1B]; /*0x9899df*/
  if ( (_UNKNOWN *)v1 != off_B31998 && (dword_B318B0 & v0[0x1C]) == 0 ) /*0x9899f3*/
    v1 = __updatetlocinfo(); /*0x9899f5*/
  return *(const unsigned __int16 **)(v1 + 0xC8); /*0x989a00*/
}
