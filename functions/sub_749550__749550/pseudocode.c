// CULLING MainWorld goal 2026-09-27: particle-system bound override calls ordinary geometry update, then when byte geometry+0xC0 is set replaces the result using geometry-data bound and world scale. This special branch is distinct from ordinary full world-transform handling. Keep particle rejection conservative until mode/update semantics are established.
int __thiscall sub_749550(NiGeometry *this)
{
  int result; // eax
  NiGeometryData *geomData; // eax
  double v4; // st7
  float scale; // [esp+4h] [ebp-10h]
  float v6; // [esp+4h] [ebp-10h]
  float v7; // [esp+8h] [ebp-Ch]
  float v8; // [esp+Ch] [ebp-8h]
  float v9; // [esp+10h] [ebp-4h]

  result = sub_722AA0(this); /*0x749556*/
  if ( *((_BYTE *)this + 0xC0) ) /*0x74955b*/
  {
    geomData = this->member.geomData; /*0x749564*/
    scale = this->member.super.m_worldTransform.scale; /*0x749573*/
    this->member.super.m_kWorldBound.Center.x = geomData->member.m_kBound.Center.x; /*0x749577*/
    this->member.super.m_kWorldBound.Center.y = geomData->member.m_kBound.Center.y; /*0x74957d*/
    this->member.super.m_kWorldBound.Center.z = geomData->member.m_kBound.Center.z; /*0x749586*/
    this->member.super.m_kWorldBound.Radius = geomData->member.m_kBound.Radius; /*0x74958c*/
    v7 = this->member.super.m_kWorldBound.Center.x * scale; /*0x74959c*/
    v8 = this->member.super.m_kWorldBound.Center.y * scale; /*0x7495a9*/
    v9 = scale * this->member.super.m_kWorldBound.Center.z; /*0x7495b4*/
    v4 = this->member.super.m_kWorldBound.Radius * this->member.super.m_worldTransform.scale; /*0x7495bf*/
    this->member.super.m_kWorldBound.Center.x = v7; /*0x7495c5*/
    this->member.super.m_kWorldBound.Center.y = v8; /*0x7495c8*/
    this->member.super.m_kWorldBound.Center.z = v9; /*0x7495cb*/
    v6 = v4; /*0x7495ce*/
    this->member.super.m_kWorldBound.Radius = v6; /*0x7495d6*/
    return LODWORD(v7); /*0x7495a0*/
  }
  return result; /*0x7495d9*/
}
