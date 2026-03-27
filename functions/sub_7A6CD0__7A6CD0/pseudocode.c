double sub_7A6CD0()
{
  int v0; // eax
  int v1; // ecx
  double v2; // st7
  int v4; // [esp+0h] [ebp-4h]
  float v5; // [esp+0h] [ebp-4h]

  v0 = Double_To_SInt32(dbl_B42C90);
  v1 = 0x41A7 * v0 - 0x7FFFFFFF * (v0 / 0x1F31D);
  v4 = v1;
  if ( v1 <= 0 )
    v4 = v1 + 0x7FFFFFFF;
  v2 = (double)v4;
  dbl_B42C90 = v2;
  v5 = v2;
  return (float)(v5 * dbl_A89C50);
}
