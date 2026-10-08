double __cdecl sub_507010(float a1, int a2)
{
  unsigned int v3; // eax
  double v4; // st7
  double v5; // st7
  int v7; // [esp+8h] [ebp+8h]

  v3 = a2; /*0x507016*/
  if ( a2 < 0 ) /*0x507018*/
    v3 = -a2; /*0x50701a*/
  *(float *)&v7 = 1.0; /*0x50701e*/
  while ( 1 ) /*0x507024*/
  {
    v4 = a1; /*0x507024*/
    if ( (v3 & 1) != 0 ) /*0x507028*/
      *(float *)&v7 = *(float *)&v7 * v4; /*0x507030*/
    v3 >>= 1; /*0x507034*/
    if ( !v3 ) /*0x507036*/
      break; /*0x507036*/
    a1 = v4 * v4; /*0x50703a*/
  }
  v5 = *(float *)&v7; /*0x507044*/
  if ( a2 < 0 ) /*0x507048*/
    return (float)(1.0 / v5); /*0x50704c*/
  return (float)v5; /*0x507056*/
}
