char __thiscall sub_6D8D70(NiTriBasedGeomData *this, int a2)
{
  int v4; // ecx
  float y; // eax
  unsigned __int8 (__cdecl *v6)(int, int); // ebp
  int v7; // edi

  if ( !sub_700670(this, a2) ) /*0x6d8d79*/
    return 0; /*0x6d8d79*/
  v4 = *(_DWORD *)&this->members.super.m_usVertices; /*0x6d8d89*/
  if ( v4 != *(_DWORD *)(a2 + 8) ) /*0x6d8d8f*/
    return 0; /*0x6d8d8f*/
  y = this->members.super.m_kBound.Center.y; /*0x6d8d91*/
  if ( LODWORD(y) != *(_DWORD *)(a2 + 0x10) || LOBYTE(this->members.super.m_kBound.Center.z) != *(_BYTE *)(a2 + 0x14) ) /*0x6d8d9f*/
    return 0; /*0x6d8d83*/
  v6 = *(unsigned __int8 (__cdecl **)(int, int))(4 * LODWORD(y) + 0xB3D4D0); /*0x6d8da2*/
  v7 = 0; /*0x6d8daa*/
  if ( !v4 ) /*0x6d8dae*/
    return 1; /*0x6d8dd4*/
  while ( v6( /*0x6d8dca*/
            v7 * LOBYTE(this->members.super.m_kBound.Center.z) + LODWORD(this->members.super.m_kBound.Center.x),
            v7 * LOBYTE(this->members.super.m_kBound.Center.z) + *(_DWORD *)(a2 + 0xC)) )
  {
    if ( (unsigned int)++v7 >= *(_DWORD *)&this->members.super.m_usVertices ) /*0x6d8dd2*/
      return 1; /*0x6d8dd2*/
  }
  return 0; /*0x6d8d82*/
}
