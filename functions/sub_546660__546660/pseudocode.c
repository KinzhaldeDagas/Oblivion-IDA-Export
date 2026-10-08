double __cdecl sub_546660(int a1, int a2, float a3)
{
  double v3; // st7
  double v4; // st7
  double result; // st7
  float v6; // [esp+8h] [ebp+8h]
  float v7; // [esp+8h] [ebp+8h]
  float v8; // [esp+8h] [ebp+8h]
  float v9; // [esp+8h] [ebp+8h]

  v6 = (double)a2 * flt_B36778[0x7C] + flt_B36778[0x7A]; /*0x546670*/
  v3 = v6; /*0x546674*/
  v7 = (double)a1 * flt_B36778[0x78] + flt_B36778[0x76]; /*0x546688*/
  v4 = v3 + v7; /*0x54668c*/
  v8 = flt_B36778[0x80] * a3 + flt_B36778[0x7E]; /*0x5466a0*/
  v9 = (float)Double_To_SInt32(v4 + v8); /*0x5466b7*/
  if ( flt_B36778[0x8A] <= (double)v9 ) /*0x5466cc*/
  {
    result = flt_B36778[0x8C]; /*0x5466e1*/
    if ( result < v9 ) /*0x5466e6*/
      Double_To_SInt32(result); /*0x5466e8*/
  }
  else
  {
    result = flt_B36778[0x8A]; /*0x5466ce*/
    Double_To_SInt32(result); /*0x5466d0*/
  }
  return result; /*0x5466f1*/
}
