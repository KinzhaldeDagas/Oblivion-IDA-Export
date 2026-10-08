double __cdecl sub_547E70(float a1, float a2)
{
  double result; // st7
  float v3; // [esp+4h] [ebp+4h]
  float v4; // [esp+4h] [ebp+4h]
  float v5; // [esp+4h] [ebp+4h]

  v3 = a1 * fConstant_Inv100; /*0x547e8a*/
  v4 = (unk_B37458 - MEMORY[0xB37450]) * v3 + MEMORY[0xB37450]; /*0x547e96*/
  v5 = v4 * (1.0 - MEMORY[0xB373D0] * a2); /*0x547eae*/
  result = 0.0; /*0x547eb2*/
  if ( v5 >= 0.0 ) /*0x547ebf*/
    return v5; /*0x547ec4*/
  return result; /*0x547ec3*/
}
