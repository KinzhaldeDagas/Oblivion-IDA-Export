// Oblivion Random::SetLong. Stores the supplied integer seed and fills the complete 128-float shuffle buffer by repeated Park-Miller Raw steps.
void __cdecl OB_Random_SetLong_010201A0(int seed)
{
  double v1; // st6
  float *v2; // esi
  double v3; // st7
  int v4; // eax
  int v5; // ecx
  double v6; // st6
  int seeda; // [esp+4h] [ebp+4h]
  float seedb; // [esp+4h] [ebp+4h]

  v1 = dbl_A89C50; /*0x7a6d35*/
  v2 = OB_Random_Buffer_010201A0; /*0x7a6d3b*/
  while ( 1 ) /*0x7a6d44*/
  {
    v3 = v1; /*0x7a6d44*/
    v4 = Double_To_SInt32(v1); /*0x7a6d46*/
    v5 = 0x41A7 * v4 - 0x7FFFFFFF * (v4 / 0x1F31D); /*0x7a6d6c*/
    seeda = v5; /*0x7a6d70*/
    if ( v5 <= 0 ) /*0x7a6d74*/
      seeda = v5 + 0x7FFFFFFF; /*0x7a6d7c*/
    v6 = (double)seeda; /*0x7a6d80*/
    ++v2; /*0x7a6d84*/
    seedb = v6; /*0x7a6d8d*/
    v2[0xFFFFFFFF] = seedb * v3; /*0x7a6d97*/
    if ( (int)v2 >= (int)&OB_Random_seed_010201A0 ) /*0x7a6d9a*/
      break; /*0x7a6d9a*/
    v1 = v3; /*0x7a6d42*/
  }
  OB_Random_seed_010201A0 = v6; /*0x7a6d9f*/
}
