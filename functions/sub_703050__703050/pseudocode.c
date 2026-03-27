float __thiscall sub_703050(NiGeometry *this)
{
  unsigned __int16 m_pcName; // ax
  float result; // st7

  m_pcName = (unsigned __int16)this->member.super.super.m_pcName;
  BYTE2(this->member.super.m_worldTransform.rot.data[0][2]) = 0;
  if ( m_pcName )
    sub_72A0F0((float *)&this->member.super.super.m_controller, m_pcName, (float *)this->member.super.m_parent);
  return result;
}
