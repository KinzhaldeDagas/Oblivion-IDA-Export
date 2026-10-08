// Oblivion Random::Raw Park-Miller step. Advances the shared integer seed with multiplier 16807 modulo 2147483647 and returns seed * 4.656612875e-10 as float.
float __cdecl OB_Random_Raw_010201A0()
{
  int v0; // eax
  int v1; // ecx
  double v2; // st7
  int v5; // [esp+0h] [ebp-4h]
  float v6; // [esp+0h] [ebp-4h]

  v0 = Double_To_SInt32(OB_Random_seed_010201A0); /*0x7a6cd7*/
  v1 = 0x41A7 * v0 - 0x7FFFFFFF * (v0 / 0x1F31D); /*0x7a6cfd*/
  v5 = v1; /*0x7a6d01*/
  if ( v1 <= 0 ) /*0x7a6d04*/
    v5 = v1 + 0x7FFFFFFF; /*0x7a6d0c*/
  v2 = (double)v5; /*0x7a6d0f*/
  OB_Random_seed_010201A0 = v2; /*0x7a6d12*/
  v6 = v2; /*0x7a6d18*/
  return v6 * dbl_A89C50; /*0x7a6d2b*/
}
