float __thiscall sub_703050(NiGeometry *this)
{
  unsigned __int16 m_pcName; // ax
  float result; // st7

  m_pcName = (unsigned __int16)this->member.super.super.m_pcName; /*0x703050*/
  BYTE2(this->member.super.m_worldTransform.rot.data[0][2]) = 0; /*0x703057*/
  if ( m_pcName ) /*0x70305b*/
    NiSphere_ComputeFromVertices( /*0x703068*/
      (NiSphere *)&this->member.super.super.m_controller,
      m_pcName,
      (const NiPoint3 *)this->member.super.m_parent);
  return result; /*0x70306d*/
}
