int __thiscall sub_864670(NiGeometry *this, NiDX9Renderer *a2)
{
  bool v2; // zf
  float v3; // edx
  int result; // eax
  float v5; // edx

  v2 = *((_WORD *)this + 0x60) == 0; /*0x864670*/
  v3 = *((float *)this + 0x32); /*0x86467e*/
  this->member.super.m_kWorldBound.Center.x = *((float *)this + 0x31); /*0x864684*/
  result = *((_DWORD *)this + 0x33); /*0x864687*/
  this->member.super.m_kWorldBound.Center.y = v3; /*0x86468d*/
  v5 = *((float *)this + 0x34); /*0x864690*/
  LODWORD(this->member.super.m_kWorldBound.Center.z) = result; /*0x864696*/
  this->member.super.m_kWorldBound.Radius = v5; /*0x864699*/
  if ( !v2 ) /*0x86469c*/
    return sub_7176D0(this, a2); /*0x86469e*/
  return result; /*0x8646a3*/
}
