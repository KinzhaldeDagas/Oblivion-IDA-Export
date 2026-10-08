int __thiscall sub_7285E0(NiTriBasedGeomData *this)
{
  int v1; // esi

  if ( this->members.super.m_pkVertex ) /*0x7285e0*/
    v1 = 0xC * this->members.super.m_usVertices; /*0x7285f0*/
  else
    v1 = 0; /*0x7285f4*/
  if ( this->members.super.m_pkNormal )
    v1 += 0xC * this->members.super.m_usVertices * ((this->members.super.format & 0xF000) != 0 ? 3 : 1);
  if ( this->members.super.m_pkColor ) /*0x72861c*/
    v1 += 0x10 * this->members.super.m_usVertices; /*0x728629*/
  if ( this->members.super.m_pkTexture ) /*0x72862b*/
    v1 += 8 * this->members.super.m_usVertices * (this->members.super.format & 0x3F); /*0x72863f*/
  return v1 + nullsub_return0_0arg(); /*0x728649*/
}
