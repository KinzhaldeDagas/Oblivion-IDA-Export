double __cdecl Round_Float(float a1, float a2)
{
  int v2; // ecx
  float v4; // [esp+4h] [ebp+4h]

  v4 = a1 / a2; /*0x4843be*/
  v2 = Double_To_SInt32(a2); /*0x4843cd*/
  if ( v4 - (double)v2 >= dbl_A2FAA0 ) /*0x4843e2*/
    ++v2; /*0x4843fe*/
  return (float)(a2 * (double)v2); /*0x4843f8*/
}
