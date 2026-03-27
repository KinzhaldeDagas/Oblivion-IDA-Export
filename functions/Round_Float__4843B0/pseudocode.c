double __cdecl Round_Float(float a1, float a2)
{
  int v2; // ecx
  float v4; // [esp+4h] [ebp+4h]

  v4 = a1 / a2;
  v2 = Double_To_SInt32(a2);
  if ( v4 - (double)v2 >= dbl_A2FAA0 )
    ++v2;
  return (float)(a2 * (double)v2);
}
