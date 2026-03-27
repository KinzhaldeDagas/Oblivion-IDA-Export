void __stdcall sub_5E2510(int a1, signed int a2, int a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  float v6; // [esp+8h] [ebp+8h]
  float v7; // [esp+8h] [ebp+8h]
  float v8; // [esp+8h] [ebp+8h]

  v6 = (float)a2;
  v3 = v6;
  v7 = (float)Double_To_SInt32(v6);
  v4 = v3 - v7;
  v5 = v7;
  if ( v4 < dbl_A2FC68 )
    v5 = v5 - dbl_A2F928;
  v8 = v5;
  Double_To_SInt32(v8);
}
