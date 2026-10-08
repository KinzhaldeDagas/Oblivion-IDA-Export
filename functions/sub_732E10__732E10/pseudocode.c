bool __thiscall sub_732E10(NiTriBasedGeomData *this, int a2)
{
  bool result; // al

  result = sub_728F90(this, a2); /*0x732e19*/
  if ( result ) /*0x732e20*/
    return this->members.m_usTriangles == *(_WORD *)(a2 + 0x40); /*0x732e30*/
  return result; /*0x732e22*/
}
