char __thiscall sub_702EC0(NiGeometry *this, int a2, float a3, float a4, float a5, float a6)
{
  unsigned __int16 v6; // ax
  float y; // edx
  bool v8; // zf
  int v9; // eax
  int v10; // edx
  double v11; // st7
  int v12; // eax
  int v14; // esi
  int v15; // esi
  int v16; // edx
  float v17; // [esp+4h] [ebp+4h]
  float v18; // [esp+8h] [ebp+8h]

  if ( a2 < 0 )
    return 0;
  if ( a2 >= LOWORD(this->member.super.m_localTransform.scale) )
    return 0;
  v6 = *(_WORD *)(LODWORD(this->member.super.m_localTransform.pos.z) + 2 * a2);
  if ( v6 == 0xFFFF )
    return 0;
  y = this->member.super.m_localTransform.pos.y;
  v8 = *(_WORD *)(LODWORD(y) + 8 * v6) == 4;
  v9 = LODWORD(y) + 8 * v6;
  if ( !v8 )
    return 0;
  v10 = *(unsigned __int16 *)(v9 + 2);
  v11 = a3;
  v18 = a3 + a5;
  v12 = 0xC * v10;
  v17 = a4 + a6;
  *(float *)((char *)&this->member.super.m_parent->vtbl + v12) = v11;
  *(float *)((char *)&this->member.super.m_parent->members.super.super.super.m_uiRefCount + v12) = a4;
  *(float *)((char *)&this->member.super.m_parent->members.super.super.m_pcName + v12) = 0.0;
  ++v10;
  v14 = 0xC * v10;
  *(float *)((char *)&this->member.super.m_parent->vtbl + v14) = v11;
  ++v10;
  *(float *)((char *)&this->member.super.m_parent->members.super.super.super.m_uiRefCount + v14) = v17;
  *(float *)((char *)&this->member.super.m_parent->members.super.super.m_pcName + v14) = 0.0;
  v15 = 0xC * v10;
  *(float *)((char *)&this->member.super.m_parent->vtbl + v15) = v18;
  *(float *)((char *)&this->member.super.m_parent->members.super.super.super.m_uiRefCount + v15) = v17;
  *(float *)((char *)&this->member.super.m_parent->members.super.super.m_pcName + v15) = 0.0;
  v16 = 0xC * (v10 + 1);
  *(float *)((char *)&this->member.super.m_parent->vtbl + v16) = v18;
  *(float *)((char *)&this->member.super.m_parent->members.super.super.super.m_uiRefCount + v16) = a4;
  *(float *)((char *)&this->member.super.m_parent->members.super.super.m_pcName + v16) = 0.0;
  HIWORD(this->member.super.m_kWorldBound.Radius) |= 1u;
  BYTE2(this->member.super.m_worldTransform.rot.data[0][2]) = 1;
  return 1;
}
