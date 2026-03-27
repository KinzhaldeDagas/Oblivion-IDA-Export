int __thiscall sub_6DB850(NiTriBasedGeomData *this, int arg0)
{
  int result; // eax
  float Radius; // ecx
  NiPoint3 *m_pkVertex; // ecx

  result = sub_700750(this, arg0);
  Radius = this->members.super.m_kBound.Radius;
  if ( Radius != 0.0 )
    result = (*(int (__thiscall **)(float, int))(*(_DWORD *)LODWORD(Radius) + 0x38))(
               COERCE_FLOAT(LODWORD(Radius)),
               arg0);
  m_pkVertex = this->members.super.m_pkVertex;
  if ( m_pkVertex )
    return (*(int (__thiscall **)(NiPoint3 *, int))(LODWORD(m_pkVertex->x) + 0x38))(m_pkVertex, arg0);
  return result;
}
