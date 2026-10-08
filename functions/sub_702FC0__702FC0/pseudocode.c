// MoonSugarEffect decode: sets 4-vertex screen polygon UVs for one texture set. Image-space quad uses UV rectangle 0,0 to 1,1.
char __thiscall sub_702FC0(NiGeometry *this, int arg0, unsigned __int16 a2, float a4, float a5, float a6, float a7)
{
  unsigned __int16 v7; // ax
  _WORD *v8; // esi
  int v9; // eax
  int v10; // ecx
  float *v11; // eax

  if ( !LODWORD(this->member.super.m_kWorldBound.Center.z) ) /*0x702fc0*/
    return 0; /*0x702fc0*/
  if ( arg0 < 0 ) /*0x702fcd*/
    return 0; /*0x702fcd*/
  if ( arg0 >= LOWORD(this->member.super.m_localTransform.scale) ) /*0x702fd5*/
    return 0; /*0x702fd5*/
  v7 = *(_WORD *)(LODWORD(this->member.super.m_localTransform.pos.z) + 2 * arg0); /*0x702fda*/
  if ( v7 == 0xFFFF ) /*0x702fe2*/
    return 0; /*0x702fe2*/
  v8 = (_WORD *)(LODWORD(this->member.super.m_localTransform.pos.y) + 8 * v7); /*0x702fef*/
  if ( *v8 != 4 || a2 >= (unsigned __int8)(LOBYTE(this->member.super.m_kWorldBound.Radius) & 0x3F) ) /*0x703002*/
    return 0; /*0x703041*/
  v9 = sub_7282F0(this, a2); /*0x703005*/
  v10 = (unsigned __int16)v8[1]; /*0x70300e*/
  *(float *)(v9 + 8 * v10) = a4; /*0x703012*/
  v11 = (float *)(v9 + 8 * v10); /*0x703019*/
  v11[1] = a5; /*0x70301d*/
  v11[2] = a4; /*0x703022*/
  v11[3] = a7; /*0x703029*/
  v11[4] = a6; /*0x703030*/
  v11[6] = a6; /*0x703033*/
  v11[5] = a7; /*0x703036*/
  v11[7] = a5; /*0x703039*/
  return 1; /*0x703043*/
}
