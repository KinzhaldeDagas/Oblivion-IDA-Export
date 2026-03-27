float *__cdecl sub_412250(unsigned int a1, float *a2)
{
  double v2; // st7
  float v4; // [esp+0h] [ebp-Ch]
  float v5; // [esp+4h] [ebp-8h]

  if ( a1 >= dword_B03178 )
  {
    *a2 = 3.4028235e38;
    a2[1] = 3.4028235e38;
    a2[2] = 3.4028235e38;
    return a2;
  }
  else
  {
    v2 = flt_B03174;
    v4 = (double)(a1 & 0xF) * flt_B03174;
    *a2 = v4;
    v5 = v2 * (double)(a1 >> 4);
    a2[1] = v5;
    a2[2] = 0.0;
    return a2;
  }
}
