int *__cdecl unknown_libname_166(int a1)
{
  int *result; // eax

  result = (int *)a1; /*0x992ec1*/
  if ( a1 == 1 ) /*0x992ec8*/
  {
    result = _errno(); /*0x992edd*/
    *result = 0x21; /*0x992ee2*/
  }
  else if ( a1 > 1 && a1 <= 3 ) /*0x992ecf*/
  {
    result = _errno(); /*0x992ed1*/
    *result = 0x22; /*0x992ed6*/
  }
  return result; /*0x992edc*/
}
