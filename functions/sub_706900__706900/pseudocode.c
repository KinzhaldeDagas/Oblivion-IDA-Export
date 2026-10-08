char __thiscall sub_706900(NiTriBasedGeomData *this, int a2)
{
  char result; // al

  result = sub_6D7E00(this, a2); /*0x706909*/
  if ( result ) /*0x706910*/
    return (LOBYTE(this->members.super.m_kBound.Radius) ^ ~*(_BYTE *)(a2 + 0x18)) & 1; /*0x706920*/
  return result; /*0x706912*/
}
