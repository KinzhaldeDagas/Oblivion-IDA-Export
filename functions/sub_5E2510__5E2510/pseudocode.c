void __stdcall sub_5E2510(int a1, signed int a2, int a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  float v6; // [esp+8h] [ebp+8h]
  float v7; // [esp+8h] [ebp+8h]
  float v8; // [esp+8h] [ebp+8h]

  v6 = (float)a2; /*0x5e2514*/
  v3 = v6; /*0x5e2518*/
  v7 = (float)Double_To_SInt32(v6); /*0x5e252b*/
  v4 = v3 - v7; /*0x5e2537*/
  v5 = v7; /*0x5e2537*/
  if ( v4 < dbl_A2FC68 ) /*0x5e2544*/
    v5 = v5 - dbl_A2F928; /*0x5e2546*/
  v8 = v5; /*0x5e254c*/
  Double_To_SInt32(v8); /*0x5e2554*/
}
