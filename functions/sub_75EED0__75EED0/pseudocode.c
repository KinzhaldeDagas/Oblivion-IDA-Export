char __thiscall sub_75EED0(NiTriBasedGeomData *this, int a2)
{
  void *m_pkTexture; // ecx
  int v4; // esi

  if ( !sub_700670(this, a2) /*0x75ef0b*/
    || *(float *)(a2 + 8) != *(float *)&this->members.super.m_usVertices
    || LOBYTE(this->members.super.m_kBound.Center.x) != *(_BYTE *)(a2 + 0xC)
    || BYTE1(this->members.super.m_kBound.Center.x) != *(_BYTE *)(a2 + 0xD) )
  {
    return 0; /*0x75ef0b*/
  }
  if ( LODWORD(this->members.super.m_kBound.Center.y) ) /*0x75ef0d*/
  {
    if ( !*(_DWORD *)(a2 + 0x10) /*0x75ef38*/
      || *(_DWORD *)(a2 + 0x10)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(this->members.super.m_kBound.Center.y)
                                                            + 0x2C))(
            LODWORD(this->members.super.m_kBound.Center.y),
            *(_DWORD *)(a2 + 0x10)) )
    {
      return 0; /*0x75ef3c*/
    }
  }
  else if ( *(_DWORD *)(a2 + 0x10) ) /*0x75ef1e*/
  {
    return 0; /*0x75ef22*/
  }
  if ( this->members.super.m_pkColor ) /*0x75ef3e*/
  {
    if ( !*(_DWORD *)(a2 + 0x24) ) /*0x75ef49*/
      return 0; /*0x75ef49*/
  }
  else if ( *(_DWORD *)(a2 + 0x24) ) /*0x75ef4f*/
  {
    return 0; /*0x75ef53*/
  }
  m_pkTexture = this->members.super.m_pkTexture; /*0x75ef55*/
  if ( m_pkTexture ) /*0x75ef5a*/
  {
    if ( *(_DWORD *)(a2 + 0x28) ) /*0x75ef5c*/
    {
      v4 = *(_DWORD *)(a2 + 0x28); /*0x75ef70*/
      if ( !v4 || (*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)m_pkTexture + 0x2C))(m_pkTexture, v4) ) /*0x75ef7d*/
        return 1; /*0x75ef81*/
    }
  }
  else if ( !*(_DWORD *)(a2 + 0x28) ) /*0x75ef66*/
  {
    return 1; /*0x75ef87*/
  }
  return 0; /*0x75ef83*/
}
