bool __thiscall sub_8A2650(NiTriBasedGeomData *this, int a2)
{
  bool result; // al

  result = sub_89D6F0(this, a2);
  if ( result )
    return *(_DWORD *)(a2 + 0x10) == LODWORD(this->members.super.m_kBound.Center.y);
  return result;
}
