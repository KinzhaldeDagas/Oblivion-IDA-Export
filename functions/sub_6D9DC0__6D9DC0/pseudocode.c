char __thiscall sub_6D9DC0(NiTriBasedGeomData *this, int a2)
{
  int v4; // ecx
  float y; // eax
  unsigned __int8 (__cdecl *v6)(int, int); // ebp
  int v7; // edi

  if ( !sub_700670(this, a2) ) /*0x6d9dc9*/
    return 0; /*0x6d9dc9*/
  v4 = *(_DWORD *)&this->members.super.m_usVertices; /*0x6d9dd9*/
  if ( v4 != *(_DWORD *)(a2 + 8) ) /*0x6d9ddf*/
    return 0; /*0x6d9ddf*/
  y = this->members.super.m_kBound.Center.y; /*0x6d9de1*/
  if ( LODWORD(y) != *(_DWORD *)(a2 + 0x10) || LOBYTE(this->members.super.m_kBound.Center.z) != *(_BYTE *)(a2 + 0x14) ) /*0x6d9def*/
    return 0; /*0x6d9dd3*/
  v6 = *(unsigned __int8 (__cdecl **)(int, int))(4 * LODWORD(y) + 0xB3D4B8); /*0x6d9df2*/
  v7 = 0; /*0x6d9dfa*/
  if ( !v4 ) /*0x6d9dfe*/
    return 1; /*0x6d9e24*/
  while ( v6( /*0x6d9e1a*/
            v7 * LOBYTE(this->members.super.m_kBound.Center.z) + LODWORD(this->members.super.m_kBound.Center.x),
            v7 * LOBYTE(this->members.super.m_kBound.Center.z) + *(_DWORD *)(a2 + 0xC)) )
  {
    if ( (unsigned int)++v7 >= *(_DWORD *)&this->members.super.m_usVertices ) /*0x6d9e22*/
      return 1; /*0x6d9e22*/
  }
  return 0; /*0x6d9dd2*/
}
