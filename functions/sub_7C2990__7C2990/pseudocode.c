int __cdecl sub_7C2990(float a1, float a2)
{
  int v2; // esi
  double v3; // st7
  float v5; // [esp+8h] [ebp+4h]
  float v6; // [esp+8h] [ebp+4h]

  Double_To_SInt32(a1);
  v2 = Double_To_SInt32(0.0);
  v5 = (float)Double_To_SInt32(0.0);
  v3 = v5;
  if ( a2 - v5 < 0.0 )
    v3 = v3 - 1.0;
  v6 = v3;
  return (v2 << 0x10) | (unsigned __int16)Double_To_SInt32(v6);
}
