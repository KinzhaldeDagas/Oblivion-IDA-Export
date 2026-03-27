bool __thiscall sub_732E10(NiTriBasedGeomData *this, int a2)
{
  bool result; // al

  result = sub_728F90(this, a2);
  if ( result )
    return this->members.m_usTriangles == *(_WORD *)(a2 + 0x40);
  return result;
}
