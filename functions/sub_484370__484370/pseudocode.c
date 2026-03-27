double __cdecl sub_484370(float a1)
{
  double v1; // st7
  double v2; // st6
  double v3; // st7
  float v5; // [esp+4h] [ebp+4h]

  v1 = a1;
  v5 = (float)Double_To_SInt32(a1);
  v2 = v5 - v1;
  v3 = v5;
  if ( v2 < dbl_A2FC68 )
    return (float)(v3 + dbl_A2F928);
  return (float)v3;
}
