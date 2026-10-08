int __thiscall sub_7282F0(NiGeometry *this, unsigned __int16 a2)
{
  float z; // eax

  z = this->member.super.m_kWorldBound.Center.z; /*0x7282f0*/
  if ( z == 0.0 || a2 >= (unsigned __int8)(LOBYTE(this->member.super.m_kWorldBound.Radius) & 0x3F) ) /*0x728307*/
    return 0; /*0x72831a*/
  else
    return LODWORD(z) + 8 * a2 * LOWORD(this->member.super.super.m_pcName); /*0x728313*/
}
