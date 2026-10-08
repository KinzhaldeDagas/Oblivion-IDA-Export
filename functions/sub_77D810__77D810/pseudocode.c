// Pass225: NiUnsharedGeometryGroup remove; releases buffer resources, frees NiGeometryBufferData, and clears screenTexture +0x1C.
void __thiscall sub_77D810(NiGeometryGroup *this, NiGeometryData *a2)
{
  NiPoint3 *m_pkVertex; // esi

  m_pkVertex = a2->member.m_pkVertex; /*0x77d816*/
  if ( m_pkVertex ) /*0x77d81b*/
  {
    NiGeometryGroup_RemoveBufferData(this, (NiGeometryBufferData *)a2->member.m_pkVertex); /*0x77d81e*/
    NiGeometryBufferData_Destroy((NiGeometryBufferData *)m_pkVertex); /*0x77d825*/
    FormHeapFree((unsigned int)m_pkVertex); /*0x77d82b*/
    a2->member.m_pkVertex = 0; /*0x77d833*/
  }
}
