char __thiscall sub_702FC0(NiGeometry *this, int a2, unsigned __int16 a3, float a4, float a5, float a6, float a7)
{
  unsigned __int16 v7; // ax
  _WORD *v8; // esi
  int v9; // eax
  int v10; // ecx
  float *v11; // eax

  if ( !LODWORD(this->member.super.m_kWorldBound.Center.z) )
    return 0;
  if ( a2 < 0 )
    return 0;
  if ( a2 >= LOWORD(this->member.super.m_localTransform.scale) )
    return 0;
  v7 = *(_WORD *)(LODWORD(this->member.super.m_localTransform.pos.z) + 2 * a2);
  if ( v7 == 0xFFFF )
    return 0;
  v8 = (_WORD *)(LODWORD(this->member.super.m_localTransform.pos.y) + 8 * v7);
  if ( *v8 != 4 || a3 >= (unsigned __int8)(LOBYTE(this->member.super.m_kWorldBound.Radius) & 0x3F) )
    return 0;
  v9 = sub_7282F0(this, a3);
  v10 = (unsigned __int16)v8[1];
  *(float *)(v9 + 8 * v10) = a4;
  v11 = (float *)(v9 + 8 * v10);
  v11[1] = a5;
  v11[2] = a4;
  v11[3] = a7;
  v11[4] = a6;
  v11[6] = a6;
  v11[5] = a7;
  v11[7] = a5;
  return 1;
}
