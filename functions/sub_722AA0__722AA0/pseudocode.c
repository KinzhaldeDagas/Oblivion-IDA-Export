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

  x = this->member.super.m_kWorldBound.Center.x;
  z = this->member.super.m_kWorldBound.Center.z;
  p_m_kWorldBound = &this->member.super.m_kWorldBound;
  v8[1] = this->member.super.m_kWorldBound.Center.y;
  skinData = this->member.skinData;
  v8[0] = x;
  Radius = this->member.super.m_kWorldBound.Radius;
  v8[2] = z;
  v8[3] = Radius;
  if ( skinData )
  {
    sub_72BB30((int)skinData, v9);
    result = sub_72A820(&p_m_kWorldBound->Center.x, v9, (float *)&this->member.super.m_worldTransform);
  }
  else
  {
    result = sub_72A820(
               &p_m_kWorldBound->Center.x,
               &this->member.geomData->member.m_kBound.Center.x,
               (float *)&this->member.super.m_worldTransform);
  }
  if ( SLOBYTE(this->member.super.m_flags) < 0 )
  {
    result = sub_72A0A0(&p_m_kWorldBound->Center.x, v8);
    if ( (_BYTE)result )
      this->member.super.m_flags |= 0x80u;
    else
      this->member.super.m_flags &= ~0x80u;
  }
  return result;
}
