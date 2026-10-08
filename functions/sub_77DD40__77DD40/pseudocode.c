void __thiscall sub_77DD40(NiGeometryGroup *this, NiGeometryData *a2)
{
  NiGeometryBufferData *m_pkTexture; // esi

  m_pkTexture = (NiGeometryBufferData *)a2->member.m_pkTexture; /*0x77dd46*/
  if ( m_pkTexture ) /*0x77dd4b*/
  {
    NiGeometryGroup_RemoveBufferData(this, (NiGeometryBufferData *)a2->member.m_pkTexture); /*0x77dd4e*/
    NiGeometryBufferData_Destroy(m_pkTexture); /*0x77dd55*/
    FormHeapFree((unsigned int)m_pkTexture); /*0x77dd5b*/
    a2->member.m_pkTexture = 0; /*0x77dd63*/
  }
}
