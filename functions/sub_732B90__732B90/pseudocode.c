bool __thiscall sub_732B90(NiTriBasedGeomData *this, int a2)
{
  bool result; // al
  int v4; // esi
  UInt16 m_usVertices; // di
  unsigned __int16 v6; // cx

  result = sub_728F90(this, a2);
  if ( !result )
    return result;
  v4 = *(_DWORD *)&this->members.m_usTriangles;
  if ( v4 )
  {
    if ( *(_DWORD *)(a2 + 0x40) )
      goto LABEL_7;
    return 0;
  }
  if ( *(_DWORD *)(a2 + 0x40) )
    return 0;
LABEL_7:
  if ( !v4 )
    return 1;
  m_usVertices = this->members.super.m_usVertices;
  v6 = 0;
  if ( !m_usVertices )
    return 1;
  while ( *(_BYTE *)(v6 + v4) == *(_BYTE *)(v6 + *(_DWORD *)(a2 + 0x40)) )
  {
    if ( ++v6 >= m_usVertices )
      return 1;
  }
  return 0;
}
