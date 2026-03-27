bool __thiscall sub_6E7A20(NiTriBasedGeomData *this, int a2)
{
  bool result; // al

  result = sub_700670(this, a2);
  if ( result )
    return *(_DWORD *)(a2 + 8) == *(_DWORD *)&this->members.super.m_usVertices;
  return result;
}
