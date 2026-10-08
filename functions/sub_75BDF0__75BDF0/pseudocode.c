bool __thiscall sub_75BDF0(NiTriBasedGeomData *this, int a2)
{
  int v4; // eax
  NiPoint3 *m_pkVertex; // esi

  if ( !sub_752CD0(this, a2) || *(_BYTE *)(a2 + 0x18) != LOBYTE(this->members.super.m_kBound.Radius) ) /*0x75be0f*/
    return 0; /*0x75be0f*/
  v4 = *(_DWORD *)(a2 + 0x1C); /*0x75be11*/
  if ( v4 ) /*0x75be16*/
  {
    if ( this->members.super.m_pkVertex ) /*0x75be18*/
    {
      m_pkVertex = this->members.super.m_pkVertex; /*0x75be2c*/
      if ( !m_pkVertex || (*(unsigned __int8 (__stdcall **)(NiPoint3 *))(*(_DWORD *)v4 + 0x2C))(m_pkVertex) ) /*0x75be3b*/
        return 1; /*0x75be3f*/
    }
    return 0; /*0x75be06*/
  }
  return !this->members.super.m_pkVertex; /*0x75be22*/
}
