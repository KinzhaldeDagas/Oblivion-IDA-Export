int __cdecl Calc_MagickaMasteryLevel(float a1)
{
  double v1; // st7
  int result; // eax
  float v3; // [esp+4h] [ebp+4h]

  v3 = unk_B37E00 * a1 + unk_B37DF8; /*0x548c60*/
  v1 = v3; /*0x548c64*/
  if ( unk_B37E08 > (double)v3 ) /*0x548c75*/
    return 0; /*0x548c79*/
  if ( unk_B37E10 > v1 ) /*0x548c89*/
    return 1; /*0x548c8d*/
  if ( unk_B37E18 > v1 ) /*0x548ca0*/
    return 2; /*0x548ca4*/
  result = 3; /*0x548cb7*/
  if ( unk_B37E20 <= v1 ) /*0x548cbc*/
    return 4; /*0x548cbe*/
  return result; /*0x548c7b*/
}
