int __thiscall sub_6DB850(NiTriBasedGeomData *this, int arg0)
{
  int result; // eax
  float Radius; // ecx
  NiPoint3 *m_pkVertex; // ecx

  result = sub_700750(this, arg0); /*0x6db859*/
  Radius = this->members.super.m_kBound.Radius; /*0x6db85e*/
  if ( Radius != 0.0 ) /*0x6db863*/
    result = (*(int (__thiscall **)(float, int))(*(_DWORD *)LODWORD(Radius) + 0x38))( /*0x6db86b*/
               COERCE_FLOAT(LODWORD(Radius)),
               arg0);
  m_pkVertex = this->members.super.m_pkVertex; /*0x6db86d*/
  if ( m_pkVertex ) /*0x6db872*/
    return (*(int (__thiscall **)(NiPoint3 *, int))(LODWORD(m_pkVertex->x) + 0x38))(m_pkVertex, arg0); /*0x6db87a*/
  return result; /*0x6db87c*/
}
