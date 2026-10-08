// CULLING MainWorld goal 2026-09-27: native geometry bound update reads skin pointer at geometry+0xB8. With skin, obtains skin-derived bound via 0x72BB30; without it, uses geometryData+local-bound, then transforms via 0x72A820 to world bound at geometry+0x20. Finite world-bound values alone do not prove update freshness. Do not conflate skinned and ordinary static bound provenance.
int __thiscall sub_722AA0(NiGeometry *this)
{
  float x; // eax
  float z; // edx
  NiBound *p_m_kWorldBound; // edi
  NiObject *skinData; // ecx
  float Radius; // eax
  int result; // eax
  float v8[4]; // [esp+8h] [ebp-20h] BYREF
  float v9[4]; // [esp+18h] [ebp-10h] BYREF

  x = this->member.super.m_kWorldBound.Center.x; /*0x722aa9*/
  z = this->member.super.m_kWorldBound.Center.z; /*0x722aac*/
  p_m_kWorldBound = &this->member.super.m_kWorldBound; /*0x722ab0*/
  v8[1] = this->member.super.m_kWorldBound.Center.y; /*0x722ab3*/
  skinData = this->member.skinData; /*0x722ab7*/
  v8[0] = x; /*0x722abf*/
  Radius = this->member.super.m_kWorldBound.Radius; /*0x722ac3*/
  v8[2] = z; /*0x722ac6*/
  v8[3] = Radius; /*0x722aca*/
  if ( skinData ) /*0x722ace*/
  {
    sub_72BB30((int)skinData, v9); /*0x722ad5*/
    result = NiBound_TransformInto(&p_m_kWorldBound->Center.x, (NiPoint3 *)v9, &this->member.super.m_worldTransform); /*0x722ae3*/
  }
  else
  {
    result = NiBound_TransformInto( /*0x722af5*/
               &p_m_kWorldBound->Center.x,
               &this->member.geomData->member.m_kBound.Center,
               &this->member.super.m_worldTransform);
  }
  if ( SLOBYTE(this->member.super.m_flags) < 0 ) /*0x722b03*/
  {
    result = sub_72A0A0(&p_m_kWorldBound->Center.x, v8); /*0x722b0c*/
    if ( (_BYTE)result ) /*0x722b13*/
      this->member.super.m_flags |= 0x80u; /*0x722b15*/
    else
      this->member.super.m_flags &= ~0x80u; /*0x722b21*/
  }
  return result; /*0x722b1b*/
}
