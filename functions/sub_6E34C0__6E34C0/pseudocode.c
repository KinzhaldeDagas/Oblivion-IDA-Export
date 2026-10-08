char __thiscall sub_6E34C0(NiTriBasedGeomData *this, int a2)
{
  int v4; // ecx
  float y; // eax
  unsigned __int8 (__cdecl *v6)(int, int); // ebp
  int v7; // edi

  if ( !sub_700670(this, a2) ) /*0x6e34c9*/
    return 0; /*0x6e34c9*/
  v4 = *(_DWORD *)&this->members.super.m_usVertices; /*0x6e34d9*/
  if ( v4 != *(_DWORD *)(a2 + 8) ) /*0x6e34df*/
    return 0; /*0x6e34df*/
  y = this->members.super.m_kBound.Center.y; /*0x6e34e1*/
  if ( LODWORD(y) != *(_DWORD *)(a2 + 0x10) || LOBYTE(this->members.super.m_kBound.Center.z) != *(_BYTE *)(a2 + 0x14) ) /*0x6e34ef*/
    return 0; /*0x6e34d3*/
  v6 = *(unsigned __int8 (__cdecl **)(int, int))(4 * LODWORD(y) + 0xB3D4A0); /*0x6e34f2*/
  v7 = 0; /*0x6e34fa*/
  if ( !v4 ) /*0x6e34fe*/
    return 1; /*0x6e3524*/
  while ( v6( /*0x6e351a*/
            v7 * LOBYTE(this->members.super.m_kBound.Center.z) + LODWORD(this->members.super.m_kBound.Center.x),
            v7 * LOBYTE(this->members.super.m_kBound.Center.z) + *(_DWORD *)(a2 + 0xC)) )
  {
    if ( (unsigned int)++v7 >= *(_DWORD *)&this->members.super.m_usVertices ) /*0x6e3522*/
      return 1; /*0x6e3522*/
  }
  return 0; /*0x6e34d2*/
}
