signed int __thiscall sub_5AF190(signed int *this, int a2)
{
  signed int *v2; // edi
  int v3; // esi
  int v4; // eax
  signed int *i; // ecx
  float v7; // [esp+8h] [ebp-4h]
  float v8; // [esp+8h] [ebp-4h]

  v2 = this + 0x26; /*0x5af199*/
  v3 = 0; /*0x5af1a1*/
  v7 = (double)*(this + 0x30) - (double)*(this + 0x26); /*0x5af1a3*/
  v8 = v7 * dbl_A2FAA0; /*0x5af1b1*/
  v4 = Double_To_SInt32(v8); /*0x5af1b9*/
  for ( i = v2; a2 >= v4 + *i; i += 0xA ) /*0x5af1c2*/
  {
    if ( ++v3 >= 5 ) /*0x5af1d5*/
      return 4; /*0x5af1df*/
  }
  if ( v3 == 0xFFFFFFFF ) /*0x5af1e5*/
    return 4; /*0x5af1e8*/
  else
    return v3; /*0x5af1f3*/
}
