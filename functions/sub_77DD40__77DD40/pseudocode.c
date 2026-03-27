void __thiscall sub_77DD40(NiGeometryGroup *this, NiGeometryData *a2)
{
  NiGeometryBufferData *m_pkTexture; // esi

  m_pkTexture = (NiGeometryBufferData *)a2->member.m_pkTexture;
  if ( m_pkTexture )
  {
    sub_782930(this, (NiGeometryBufferData *)a2->member.m_pkTexture);
    sub_778110(m_pkTexture);
    FormHeapFree((unsigned int)m_pkTexture);
    a2->member.m_pkTexture = 0;
  }
}
