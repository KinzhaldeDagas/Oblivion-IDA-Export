// MoonSugarEffect decode: sets 4-vertex screen polygon positions. For image-space quad arguments resolve to (-1,1), (-1,-1), (1,-1), (1,1), z=0.
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

  if ( a2 < 0 ) /*0x702ec6*/
    return 0; /*0x702ec6*/
  if ( a2 >= LOWORD(this->member.super.m_localTransform.scale) ) /*0x702ed2*/
    return 0; /*0x702ed2*/
  v6 = *(_WORD *)(LODWORD(this->member.super.m_localTransform.pos.z) + 2 * a2); /*0x702edb*/
  if ( v6 == 0xFFFF ) /*0x702ee3*/
    return 0; /*0x702ee3*/
  y = this->member.super.m_localTransform.pos.y; /*0x702ee9*/
  v8 = *(_WORD *)(LODWORD(y) + 8 * v6) == 4; /*0x702eef*/
  v9 = LODWORD(y) + 8 * v6; /*0x702ef4*/
  if ( !v8 ) /*0x702ef7*/
    return 0; /*0x702fb8*/
  v10 = *(unsigned __int16 *)(v9 + 2); /*0x702efd*/
  v11 = a3; /*0x702f01*/
  v18 = a3 + a5; /*0x702f14*/
  v12 = 0xC * v10; /*0x702f18*/
  v17 = a4 + a6; /*0x702f25*/
  *(float *)((char *)&this->member.super.m_parent->vtbl + v12) = v11; /*0x702f2b*/
  *(float *)((char *)&this->member.super.m_parent->members.super.super.super.m_uiRefCount + v12) = a4; /*0x702f33*/
  *(float *)((char *)&this->member.super.m_parent->members.super.super.m_pcName + v12) = 0.0; /*0x702f3c*/
  ++v10; /*0x702f4a*/
  v14 = 0xC * v10; /*0x702f51*/
  *(float *)((char *)&this->member.super.m_parent->vtbl + v14) = v11; /*0x702f53*/
  ++v10; /*0x702f5d*/
  *(float *)((char *)&this->member.super.m_parent->members.super.super.super.m_uiRefCount + v14) = v17; /*0x702f5f*/
  *(float *)((char *)&this->member.super.m_parent->members.super.super.m_pcName + v14) = 0.0; /*0x702f68*/
  v15 = 0xC * v10; /*0x702f78*/
  *(float *)((char *)&this->member.super.m_parent->vtbl + v15) = v18; /*0x702f7a*/
  *(float *)((char *)&this->member.super.m_parent->members.super.super.super.m_uiRefCount + v15) = v17; /*0x702f84*/
  *(float *)((char *)&this->member.super.m_parent->members.super.super.m_pcName + v15) = 0.0; /*0x702f8e*/
  v16 = 0xC * (v10 + 1); /*0x702f99*/
  *(float *)((char *)&this->member.super.m_parent->vtbl + v16) = v18; /*0x702f9b*/
  *(float *)((char *)&this->member.super.m_parent->members.super.super.super.m_uiRefCount + v16) = a4; /*0x702fa2*/
  *(float *)((char *)&this->member.super.m_parent->members.super.super.m_pcName + v16) = 0.0; /*0x702fa9*/
  HIWORD(this->member.super.m_kWorldBound.Radius) |= 1u; /*0x702fad*/
  BYTE2(this->member.super.m_worldTransform.rot.data[0][2]) = 1; /*0x702fb1*/
  return 1; /*0x702fb5*/
}
