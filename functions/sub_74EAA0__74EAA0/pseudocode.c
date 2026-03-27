int __thiscall sub_74EAA0(NiGeometry *this)
{
  float *m_pkTexture; // eax
  float v3; // edx
  int result; // eax

  sub_749550(this);
  m_pkTexture = (float *)this->member.geomData[1].member.m_pkTexture;
  v3 = m_pkTexture[8];
  m_pkTexture += 8;
  this->member.super.m_kWorldBound.Center.x = v3;
  this->member.super.m_kWorldBound.Center.y = m_pkTexture[1];
  this->member.super.m_kWorldBound.Center.z = m_pkTexture[2];
  result = *((_DWORD *)m_pkTexture + 3);
  LODWORD(this->member.super.m_kWorldBound.Radius) = result;
  return result;
}
