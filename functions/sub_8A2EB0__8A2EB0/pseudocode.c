bool __thiscall sub_8A2EB0(NiTriBasedGeomData *this, _DWORD *a2)
{
  bool result; // al

  result = sub_89FA50(this, a2);
  if ( result )
    return LODWORD(this->members.super.m_kBound.Radius) == a2[6];
  return result;
}
