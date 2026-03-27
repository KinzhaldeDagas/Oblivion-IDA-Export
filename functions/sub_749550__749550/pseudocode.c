int __thiscall sub_749550(NiGeometry *this)
{
  int result; // eax
  float *geomData; // eax
  double v4; // st7
  float scale; // [esp+4h] [ebp-10h]
  float v6; // [esp+4h] [ebp-10h]
  float v7; // [esp+8h] [ebp-Ch]
  float v8; // [esp+Ch] [ebp-8h]
  float v9; // [esp+10h] [ebp-4h]

  result = sub_722AA0(this);
  if ( *((_BYTE *)this + 0xC0) )
  {
    geomData = (float *)this->member.geomData;
    scale = this->member.super.m_worldTransform.scale;
    this->member.super.m_kWorldBound.Center.x = geomData[3];
    this->member.super.m_kWorldBound.Center.y = geomData[4];
    this->member.super.m_kWorldBound.Center.z = geomData[5];
    this->member.super.m_kWorldBound.Radius = geomData[6];
    v7 = this->member.super.m_kWorldBound.Center.x * scale;
    v8 = this->member.super.m_kWorldBound.Center.y * scale;
    v9 = scale * this->member.super.m_kWorldBound.Center.z;
    v4 = this->member.super.m_kWorldBound.Radius * this->member.super.m_worldTransform.scale;
    this->member.super.m_kWorldBound.Center.x = v7;
    this->member.super.m_kWorldBound.Center.y = v8;
    this->member.super.m_kWorldBound.Center.z = v9;
    v6 = v4;
    this->member.super.m_kWorldBound.Radius = v6;
    return LODWORD(v7);
  }
  return result;
}
