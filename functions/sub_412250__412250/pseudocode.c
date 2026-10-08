float *__cdecl sub_412250(unsigned int a1, float *a2)
{
  double v2; // st7
  float v4; // [esp+0h] [ebp-Ch]
  float v5; // [esp+4h] [ebp-8h]

  if ( a1 >= dword_B03178 ) /*0x41225d*/
  {
    *a2 = 3.4028235e38; /*0x4122d9*/
    a2[1] = 3.4028235e38; /*0x4122e3*/
    a2[2] = 3.4028235e38; /*0x4122e6*/
    return a2; /*0x4122c7*/
  }
  else
  {
    v2 = flt_B03174; /*0x412289*/
    v4 = (double)(a1 & 0xF) * flt_B03174; /*0x41228b*/
    *a2 = v4; /*0x4122a3*/
    v5 = v2 * (double)(a1 >> 4); /*0x4122a5*/
    a2[1] = v5; /*0x4122af*/
    a2[2] = 0.0; /*0x4122ba*/
    return a2; /*0x41229a*/
  }
}
