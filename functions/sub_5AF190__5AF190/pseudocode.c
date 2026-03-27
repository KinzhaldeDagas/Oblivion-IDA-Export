signed int __thiscall sub_5AF190(signed int *this, int a2)
{
  signed int *v2; // edi
  int v3; // esi
  int v4; // eax
  signed int *i; // ecx
  float v7; // [esp+8h] [ebp-4h]
  float v8; // [esp+8h] [ebp-4h]

  v2 = this + 0x26;
  v3 = 0;
  v7 = (double)*(this + 0x30) - (double)*(this + 0x26);
  v8 = v7 * dbl_A2FAA0;
  v4 = Double_To_SInt32(v8);
  for ( i = v2; a2 >= v4 + *i; i += 0xA )
  {
    if ( ++v3 >= 5 )
      return 4;
  }
  if ( v3 == 0xFFFFFFFF )
    return 4;
  else
    return v3;
}
