char __thiscall sub_75EED0(NiTriBasedGeomData *this, int a2)
{
  void *m_pkTexture; // ecx
  int v4; // esi

  if ( !sub_700670(this, a2)
    || *(float *)(a2 + 8) != *(float *)&this->members.super.m_usVertices
    || LOBYTE(this->members.super.m_kBound.Center.x) != *(_BYTE *)(a2 + 0xC)
    || BYTE1(this->members.super.m_kBound.Center.x) != *(_BYTE *)(a2 + 0xD) )
  {
    return 0;
  }
  if ( LODWORD(this->members.super.m_kBound.Center.y) )
  {
    if ( !*(_DWORD *)(a2 + 0x10)
      || *(_DWORD *)(a2 + 0x10)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(this->members.super.m_kBound.Center.y)
                                                            + 0x2C))(
            LODWORD(this->members.super.m_kBound.Center.y),
            *(_DWORD *)(a2 + 0x10)) )
    {
      return 0;
    }
  }
  else if ( *(_DWORD *)(a2 + 0x10) )
  {
    return 0;
  }
  if ( this->members.super.m_pkColor )
  {
    if ( !*(_DWORD *)(a2 + 0x24) )
      return 0;
  }
  else if ( *(_DWORD *)(a2 + 0x24) )
  {
    return 0;
  }
  m_pkTexture = this->members.super.m_pkTexture;
  if ( m_pkTexture )
  {
    if ( *(_DWORD *)(a2 + 0x28) )
    {
      v4 = *(_DWORD *)(a2 + 0x28);
      if ( !v4 || (*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)m_pkTexture + 0x2C))(m_pkTexture, v4) )
        return 1;
    }
  }
  else if ( !*(_DWORD *)(a2 + 0x28) )
  {
    return 1;
  }
  return 0;
}
