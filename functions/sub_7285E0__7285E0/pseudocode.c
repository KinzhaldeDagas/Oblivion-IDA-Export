int __thiscall sub_7285E0(NiTriBasedGeomData *this)
{
  int v1; // esi

  if ( this->members.super.m_pkVertex )
    v1 = 0xC * this->members.super.m_usVertices;
  else
    v1 = 0;
  if ( this->members.super.m_pkNormal )
    v1 += 0xC * this->members.super.m_usVertices * ((this->members.super.format & 0xF000) != 0 ? 3 : 1);
  if ( this->members.super.m_pkColor )
    v1 += 0x10 * this->members.super.m_usVertices;
  if ( this->members.super.m_pkTexture )
    v1 += 8 * this->members.super.m_usVertices * (this->members.super.format & 0x3F);
  return v1 + nullsub_return0_0arg();
}
