_DWORD *__cdecl _CreateFrameInfo(_DWORD *a1, int a2)
{
  *a1 = a2; /*0x9810f8*/
  a1[1] = _getptd()[0x26]; /*0x981105*/
  _getptd()[0x26] = (DWORD)a1; /*0x98110d*/
  return a1; /*0x981115*/
}
