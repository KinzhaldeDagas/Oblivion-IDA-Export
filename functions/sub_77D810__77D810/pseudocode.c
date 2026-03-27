void __thiscall sub_77D810(NiGeometryGroup *this, NiGeometryData *a2)
{
  NiPoint3 *m_pkVertex; // esi

  m_pkVertex = a2->member.m_pkVertex;
  if ( m_pkVertex )
  {
    sub_782930(this, (NiGeometryBufferData *)a2->member.m_pkVertex);
    sub_778110((NiGeometryBufferData *)m_pkVertex);
    FormHeapFree((unsigned int)m_pkVertex);
    a2->member.m_pkVertex = 0;
  }
}
