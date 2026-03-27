bool __thiscall sub_711D20(NiTriBasedGeomData *this, int a2)
{
  if ( !sub_700670(this, a2) )
    return 0;
  if ( *(_DWORD *)&this->members.super.m_usVertices )
    return a2 != 0;
  return !a2;
}
