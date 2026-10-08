bool __thiscall sub_8A2EB0(NiTriBasedGeomData *this, _DWORD *a2)
{
  bool result; // al

  result = sub_89FA50(this, a2); /*0x8a2eb9*/
  if ( result ) /*0x8a2ec0*/
    return LODWORD(this->members.super.m_kBound.Radius) == a2[6]; /*0x8a2ec8*/
  return result; /*0x8a2ecb*/
}
