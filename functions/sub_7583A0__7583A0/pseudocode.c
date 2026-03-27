char __thiscall sub_7583A0(NiTriBasedGeomData *this, int a2)
{
  int v4; // ecx
  float y; // eax
  unsigned __int8 (__cdecl *v6)(int, int); // ebp
  int v7; // edi
  int v8; // edi

  if ( !sub_700670(this, a2) )
    return 0;
  v4 = *(_DWORD *)&this->members.super.m_usVertices;
  if ( *(_DWORD *)(a2 + 8) != v4 )
    return 0;
  y = this->members.super.m_kBound.Center.y;
  if ( *(_DWORD *)(a2 + 0x10) != LODWORD(y)
    || *(_DWORD *)(a2 + 0x18) != LODWORD(this->members.super.m_kBound.Radius)
    || *(_BYTE *)(a2 + 0x14) != LOBYTE(this->members.super.m_kBound.Center.z) )
  {
    return 0;
  }
  v6 = *(unsigned __int8 (__cdecl **)(int, int))(4 * LODWORD(y) + 0xB3D4A0);
  v7 = 0;
  if ( v4 )
  {
    while ( v6(
              v7 * LOBYTE(this->members.super.m_kBound.Center.z) + *(_DWORD *)(a2 + 0xC),
              v7 * LOBYTE(this->members.super.m_kBound.Center.z) + LODWORD(this->members.super.m_kBound.Center.x)) )
    {
      if ( (unsigned int)++v7 >= *(_DWORD *)&this->members.super.m_usVertices )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v8 = 0;
    if ( !LODWORD(this->members.super.m_kBound.Radius) )
      return 1;
    while ( v6(
              v8 * LOBYTE(this->members.super.m_pkColor) + *(_DWORD *)(a2 + 0x1C),
              (int)this->members.super.m_pkVertex + v8 * LOBYTE(this->members.super.m_pkColor)) )
    {
      if ( (unsigned int)++v8 >= LODWORD(this->members.super.m_kBound.Radius) )
        return 1;
    }
  }
  return 0;
}
