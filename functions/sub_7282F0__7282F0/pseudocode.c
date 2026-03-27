int __thiscall sub_7282F0(NiGeometry *this, unsigned __int16 a2)
{
  float z; // eax

  z = this->member.super.m_kWorldBound.Center.z;
  if ( z == 0.0 || a2 >= (unsigned __int8)(LOBYTE(this->member.super.m_kWorldBound.Radius) & 0x3F) )
    return 0;
  else
    return LODWORD(z) + 8 * a2 * LOWORD(this->member.super.super.m_pcName);
}
