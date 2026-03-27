int __thiscall sub_8644F0(NiGeometry *this, NiDX9Renderer *a2)
{
  bool v2; // zf
  float v3; // edx
  int result; // eax
  float v5; // edx

  v2 = *((_WORD *)this + 0x60) == 0;
  v3 = *((float *)this + 0x32);
  this->member.super.m_kWorldBound.Center.x = *((float *)this + 0x31);
  result = *((_DWORD *)this + 0x33);
  this->member.super.m_kWorldBound.Center.y = v3;
  v5 = *((float *)this + 0x34);
  LODWORD(this->member.super.m_kWorldBound.Center.z) = result;
  this->member.super.m_kWorldBound.Radius = v5;
  if ( !v2 )
    return sub_719BA0(this, a2);
  return result;
}
