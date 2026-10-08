// Restores the current world bound from TallGrassTriStrips' saved local bound, then invokes the first NiTriStrips immediate-render path when instanceCount != 0.
int __thiscall TallGrassTriStrips__RenderImmediate(NiGeometry *this, NiDX9Renderer *a2)
{
  bool v2; // zf
  float v3; // edx
  int result; // eax
  float v5; // edx

  v2 = *((_WORD *)this + 0x60) == 0; /*0x8644b0*/
  v3 = *((float *)this + 0x32); /*0x8644be*/
  this->member.super.m_kWorldBound.Center.x = *((float *)this + 0x31); /*0x8644c4*/
  result = *((_DWORD *)this + 0x33); /*0x8644c7*/
  this->member.super.m_kWorldBound.Center.y = v3; /*0x8644cd*/
  v5 = *((float *)this + 0x34); /*0x8644d0*/
  LODWORD(this->member.super.m_kWorldBound.Center.z) = result; /*0x8644d6*/
  this->member.super.m_kWorldBound.Radius = v5; /*0x8644d9*/
  if ( !v2 ) /*0x8644dc*/
    return sub_719B60(this, a2); /*0x8644de*/
  return result; /*0x8644e3*/
}
