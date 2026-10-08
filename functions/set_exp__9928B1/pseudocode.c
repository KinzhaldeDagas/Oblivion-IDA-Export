double __cdecl _set_exp(double a1, __int16 a2)
{
  double v3; // [esp+0h] [ebp-8h]

  v3 = a1; /*0x9928bf*/
  HIWORD(v3) = HIWORD(a1) & 0x800F | (0x10 * (a2 + 0x3FE)); /*0x9928d2*/
  return v3; /*0x9928d9*/
}
