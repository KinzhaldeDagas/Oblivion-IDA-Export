void __cdecl sub_547A90(int a1, int a2, int a3, float a4, float a5)
{
  long double v5; // st7
  float v6; // [esp+8h] [ebp+4h]
  float v7; // [esp+8h] [ebp+4h]

  if ( !a1 ) /*0x547a97*/
    a1 = 1; /*0x547a9e*/
  v6 = (fCostant_100 - (double)a1) / fCostant_100; /*0x547ab2*/
  v5 = pow(v6, a5); /*0x547abe*/
  v7 = (double)(a2 - a3 + 0x64) * a4; /*0x547ada*/
  Double_To_SInt32(v5 * v7); /*0x547ae2*/
}
