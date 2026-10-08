bool __thiscall sub_6E7A20(NiTriBasedGeomData *this, int a2)
{
  bool result; // al

  result = sub_700670(this, a2); /*0x6e7a29*/
  if ( result ) /*0x6e7a30*/
    return *(_DWORD *)(a2 + 8) == *(_DWORD *)&this->members.super.m_usVertices; /*0x6e7a43*/
  return result; /*0x6e7a32*/
}
