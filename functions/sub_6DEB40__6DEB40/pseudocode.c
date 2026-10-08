bool __thiscall sub_6DEB40(_BYTE *this, int a2)
{
  bool result; // al

  result = j_NiSingleInterpController_IsEqual(this, a2); /*0x6deb49*/
  if ( result ) /*0x6deb50*/
    return ((*(this + 0x40) ^ *(_BYTE *)(a2 + 0x40)) & 7) == 0; /*0x6deb60*/
  return result; /*0x6deb52*/
}
