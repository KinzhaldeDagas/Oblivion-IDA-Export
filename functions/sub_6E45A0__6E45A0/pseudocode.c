char __thiscall sub_6E45A0(NiTriBasedGeomData *this, int a2)
{
  int v4; // ecx
  float y; // eax
  unsigned __int8 (__cdecl *v6)(int, int); // ebp
  int v7; // edi

  if ( !sub_700670(this, a2) ) /*0x6e45a9*/
    return 0; /*0x6e45a9*/
  v4 = *(_DWORD *)&this->members.super.m_usVertices; /*0x6e45b9*/
  if ( v4 != *(_DWORD *)(a2 + 8) ) /*0x6e45bf*/
    return 0; /*0x6e45bf*/
  y = this->members.super.m_kBound.Center.y; /*0x6e45c1*/
  if ( LODWORD(y) != *(_DWORD *)(a2 + 0x10) || LOBYTE(this->members.super.m_kBound.Center.z) != *(_BYTE *)(a2 + 0x14) ) /*0x6e45cf*/
    return 0; /*0x6e45b3*/
  v6 = *(unsigned __int8 (__cdecl **)(int, int))(4 * LODWORD(y) + 0xB3D4E8); /*0x6e45d2*/
  v7 = 0; /*0x6e45da*/
  if ( !v4 ) /*0x6e45de*/
    return 1; /*0x6e4604*/
  while ( v6( /*0x6e45fa*/
            v7 * LOBYTE(this->members.super.m_kBound.Center.z) + LODWORD(this->members.super.m_kBound.Center.x),
            v7 * LOBYTE(this->members.super.m_kBound.Center.z) + *(_DWORD *)(a2 + 0xC)) )
  {
    if ( (unsigned int)++v7 >= *(_DWORD *)&this->members.super.m_usVertices ) /*0x6e4602*/
      return 1; /*0x6e4602*/
  }
  return 0; /*0x6e45b2*/
}
