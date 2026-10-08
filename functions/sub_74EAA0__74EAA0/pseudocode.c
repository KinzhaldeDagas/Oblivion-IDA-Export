int __thiscall sub_74EAA0(NiGeometry *this)
{
  float *m_pkTexture; // eax
  float v3; // edx
  int result; // eax

  sub_749550(this); /*0x74eaa3*/
  m_pkTexture = (float *)this->member.geomData[1].member.m_pkTexture; /*0x74eaae*/
  v3 = m_pkTexture[8]; /*0x74eab1*/
  m_pkTexture += 8; /*0x74eab4*/
  this->member.super.m_kWorldBound.Center.x = v3; /*0x74eaba*/
  this->member.super.m_kWorldBound.Center.y = m_pkTexture[1]; /*0x74eabf*/
  this->member.super.m_kWorldBound.Center.z = m_pkTexture[2]; /*0x74eac5*/
  result = *((_DWORD *)m_pkTexture + 3); /*0x74eac8*/
  LODWORD(this->member.super.m_kWorldBound.Radius) = result; /*0x74eacb*/
  return result; /*0x74eace*/
}
