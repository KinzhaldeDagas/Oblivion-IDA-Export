double __cdecl _frnd(double a1)
{
  double result; // st7

  _ST7 = a1; /*0x99f11c*/
  __asm { frndint } /*0x99f120*/
  return result; /*0x99f129*/
}
