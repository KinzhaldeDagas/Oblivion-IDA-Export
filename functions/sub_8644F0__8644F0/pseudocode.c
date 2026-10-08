// Restores the current world bound from the saved local bound, then invokes the alternate/only-immediate NiTriStrips renderer path when instanceCount != 0.
int __thiscall TallGrassTriStrips__OnlyRenderImmediate(NiGeometry *this, NiDX9Renderer *a2)
{
  bool v2; // zf
  float v3; // edx
  int result; // eax
  float v5; // edx

  v2 = *((_WORD *)this + 0x60) == 0; /*0x8644f0*/
  v3 = *((float *)this + 0x32); /*0x8644fe*/
  this->member.super.m_kWorldBound.Center.x = *((float *)this + 0x31); /*0x864504*/
  result = *((_DWORD *)this + 0x33); /*0x864507*/
  this->member.super.m_kWorldBound.Center.y = v3; /*0x86450d*/
  v5 = *((float *)this + 0x34); /*0x864510*/
  LODWORD(this->member.super.m_kWorldBound.Center.z) = result; /*0x864516*/
  this->member.super.m_kWorldBound.Radius = v5; /*0x864519*/
  if ( !v2 ) /*0x86451c*/
    return sub_719BA0(this, a2); /*0x86451e*/
  return result; /*0x864523*/
}
