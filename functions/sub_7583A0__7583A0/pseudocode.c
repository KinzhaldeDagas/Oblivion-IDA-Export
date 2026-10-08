char __thiscall sub_7583A0(NiTriBasedGeomData *this, int a2)
{
  int v4; // ecx
  float y; // eax
  unsigned __int8 (__cdecl *v6)(int, int); // ebp
  int v7; // edi
  int v8; // edi

  if ( !sub_700670(this, a2) ) /*0x7583a9*/
    return 0; /*0x7583a9*/
  v4 = *(_DWORD *)&this->members.super.m_usVertices; /*0x7583b9*/
  if ( *(_DWORD *)(a2 + 8) != v4 ) /*0x7583bf*/
    return 0; /*0x7583bf*/
  y = this->members.super.m_kBound.Center.y; /*0x7583c1*/
  if ( *(_DWORD *)(a2 + 0x10) != LODWORD(y) /*0x7583d7*/
    || *(_DWORD *)(a2 + 0x18) != LODWORD(this->members.super.m_kBound.Radius)
    || *(_BYTE *)(a2 + 0x14) != LOBYTE(this->members.super.m_kBound.Center.z) )
  {
    return 0; /*0x7583b6*/
  }
  v6 = *(unsigned __int8 (__cdecl **)(int, int))(4 * LODWORD(y) + 0xB3D4A0); /*0x7583da*/
  v7 = 0; /*0x7583e2*/
  if ( v4 ) /*0x7583e6*/
  {
    while ( v6( /*0x75840a*/
              v7 * LOBYTE(this->members.super.m_kBound.Center.z) + *(_DWORD *)(a2 + 0xC),
              v7 * LOBYTE(this->members.super.m_kBound.Center.z) + LODWORD(this->members.super.m_kBound.Center.x)) )
    {
      if ( (unsigned int)++v7 >= *(_DWORD *)&this->members.super.m_usVertices ) /*0x758412*/
        goto LABEL_10; /*0x758412*/
    }
  }
  else
  {
LABEL_10:
    v8 = 0; /*0x758414*/
    if ( !LODWORD(this->members.super.m_kBound.Radius) ) /*0x758419*/
      return 1; /*0x75844a*/
    while ( v6( /*0x75843a*/
              v8 * LOBYTE(this->members.super.m_pkColor) + *(_DWORD *)(a2 + 0x1C),
              (int)this->members.super.m_pkVertex + v8 * LOBYTE(this->members.super.m_pkColor)) )
    {
      if ( (unsigned int)++v8 >= LODWORD(this->members.super.m_kBound.Radius) ) /*0x758442*/
        return 1; /*0x758442*/
    }
  }
  return 0; /*0x7583b2*/
}
