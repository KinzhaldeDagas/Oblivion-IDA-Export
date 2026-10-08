// Player override of vtable +0x1E0. Returns base rotation.z plus PlayerCharacter+0x61C, with one wrap by 2*pi (0xA3D5B0 = 6.283185...) into the expected angular interval. Native ABI return is float.
float __thiscall PlayerCharacter_GetZRotation(PlayerCharacter *this)
{
  double v2; // st7
  double v3; // st6
  float ZRotation; // [esp+4h] [ebp-4h]
  float v6; // [esp+4h] [ebp-4h]

  ZRotation = MobileObject_GetZRotation((MobileObject *)this); /*0x65da69*/
  v6 = this->unk61C + ZRotation; /*0x65da77*/
  v2 = v6; /*0x65da83*/
  if ( v6 >= 0.0 ) /*0x65da88*/
  {
    v3 = dbl_A3D5B0; /*0x65da98*/
    if ( v3 < v2 ) /*0x65daa5*/
      return v2 - v3; /*0x65daac*/
  }
  else
  {
    return v2 + dbl_A3D5B0; /*0x65da93*/
  }
  return v2; /*0x65da96*/
}
