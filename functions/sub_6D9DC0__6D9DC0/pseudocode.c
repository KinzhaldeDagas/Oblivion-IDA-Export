char __thiscall sub_6D9DC0(NiTriBasedGeomData *this, int a2)
{
  int v4; // ecx
  float y; // eax
  unsigned __int8 (__cdecl *v6)(int, int); // ebp
  int v7; // edi

  if ( !sub_700670(this, a2) )
    return 0;
  v4 = *(_DWORD *)&this->members.super.m_usVertices;
  if ( v4 != *(_DWORD *)(a2 + 8) )
    return 0;
  y = this->members.super.m_kBound.Center.y;
  if ( LODWORD(y) != *(_DWORD *)(a2 + 0x10) || LOBYTE(this->members.super.m_kBound.Center.z) != *(_BYTE *)(a2 + 0x14) )
    return 0;
  v6 = *(unsigned __int8 (__cdecl **)(int, int))(4 * LODWORD(y) + 0xB3D4B8);
  v7 = 0;
  if ( !v4 )
    return 1;
  while ( v6(
            v7 * LOBYTE(this->members.super.m_kBound.Center.z) + LODWORD(this->members.super.m_kBound.Center.x),
            v7 * LOBYTE(this->members.super.m_kBound.Center.z) + *(_DWORD *)(a2 + 0xC)) )
  {
    if ( (unsigned int)++v7 >= *(_DWORD *)&this->members.super.m_usVertices )
      return 1;
  }
  return 0;
}
