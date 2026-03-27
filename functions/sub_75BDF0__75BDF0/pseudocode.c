bool __thiscall sub_75BDF0(NiTriBasedGeomData *this, int a2)
{
  int v4; // eax
  NiPoint3 *m_pkVertex; // esi

  if ( !sub_752CD0(this, a2) || *(_BYTE *)(a2 + 0x18) != LOBYTE(this->members.super.m_kBound.Radius) )
    return 0;
  v4 = *(_DWORD *)(a2 + 0x1C);
  if ( v4 )
  {
    if ( this->members.super.m_pkVertex )
    {
      m_pkVertex = this->members.super.m_pkVertex;
      if ( !m_pkVertex || (*(unsigned __int8 (__stdcall **)(NiPoint3 *))(*(_DWORD *)v4 + 0x2C))(m_pkVertex) )
        return 1;
    }
    return 0;
  }
  return !this->members.super.m_pkVertex;
}
