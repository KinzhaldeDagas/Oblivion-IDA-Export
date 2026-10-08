int __cdecl sub_7C2990(float a1, float a2)
{
  int v2; // esi
  double v3; // st7
  float v5; // [esp+8h] [ebp+4h]
  float v6; // [esp+8h] [ebp+4h]

  Double_To_SInt32(a1); /*0x7c2997*/
  v2 = Double_To_SInt32(0.0); /*0x7c29d3*/
  v5 = (float)Double_To_SInt32(0.0); /*0x7c29e2*/
  v3 = v5; /*0x7c29f4*/
  if ( a2 - v5 < 0.0 ) /*0x7c29f9*/
    v3 = v3 - 1.0; /*0x7c29ff*/
  v6 = v3; /*0x7c2a01*/
  return (v2 << 0x10) | (unsigned __int16)Double_To_SInt32(v6); /*0x7c2a1a*/
}
