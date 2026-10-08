bool __thiscall sub_732B90(NiTriBasedGeomData *this, int a2)
{
  bool result; // al
  int v4; // esi
  UInt16 m_usVertices; // di
  unsigned __int16 v6; // cx

  result = sub_728F90(this, a2); /*0x732b99*/
  if ( !result ) /*0x732ba0*/
    return result; /*0x732ba0*/
  v4 = *(_DWORD *)&this->members.m_usTriangles; /*0x732ba8*/
  if ( v4 ) /*0x732bad*/
  {
    if ( *(_DWORD *)(a2 + 0x40) ) /*0x732baf*/
      goto LABEL_7; /*0x732bb3*/
    return 0; /*0x732bc4*/
  }
  if ( *(_DWORD *)(a2 + 0x40) ) /*0x732bb9*/
    return 0; /*0x732bbd*/
LABEL_7:
  if ( !v4 ) /*0x732bca*/
    return 1; /*0x732bca*/
  m_usVertices = this->members.super.m_usVertices; /*0x732bcc*/
  v6 = 0; /*0x732bd0*/
  if ( !m_usVertices ) /*0x732bd5*/
    return 1; /*0x732bf3*/
  while ( *(_BYTE *)(v6 + v4) == *(_BYTE *)(v6 + *(_DWORD *)(a2 + 0x40)) ) /*0x732be9*/
  {
    if ( ++v6 >= m_usVertices ) /*0x732bf1*/
      return 1; /*0x732bf1*/
  }
  return 0; /*0x732ba2*/
}
