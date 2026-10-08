char __thiscall sub_6E1CA0(NiTriBasedGeomData *this, int a2)
{
  UInt16 m_usVertices; // cx
  float y; // eax
  int v6; // ebx
  unsigned __int8 (__cdecl *v7)(char *, int); // ebp
  unsigned __int8 (__cdecl *v8)(char *, int); // ebp
  int v9; // ebx
  unsigned __int8 (__cdecl *v10)(char *, int); // ebp
  int v11; // ebx

  if ( !sub_700670(this, a2) ) /*0x6e1ca9*/
    return 0; /*0x6e1ca9*/
  m_usVertices = this->members.super.m_usVertices; /*0x6e1cb9*/
  if ( m_usVertices != *(_WORD *)(a2 + 8) ) /*0x6e1cc1*/
    return 0; /*0x6e1cc1*/
  y = this->members.super.m_kBound.Center.y; /*0x6e1cc3*/
  if ( LODWORD(y) != *(_DWORD *)(a2 + 0x10) /*0x6e1d05*/
    || this->members.super.serial != *(_WORD *)(a2 + 0xA)
    || LODWORD(this->members.super.m_kBound.Center.z) != *(_DWORD *)(a2 + 0x14)
    || LOWORD(this->members.super.m_kBound.Center.x) != *(_WORD *)(a2 + 0xC)
    || LODWORD(this->members.super.m_kBound.Radius) != *(_DWORD *)(a2 + 0x18)
    || LOBYTE(this->members.super.m_pkVertex) != *(_BYTE *)(a2 + 0x1C)
    || BYTE1(this->members.super.m_pkVertex) != *(_BYTE *)(a2 + 0x1D)
    || BYTE2(this->members.super.m_pkVertex) != *(_BYTE *)(a2 + 0x1E) )
  {
    return 0; /*0x6e1cb6*/
  }
  v6 = 0; /*0x6e1d08*/
  v7 = *(unsigned __int8 (__cdecl **)(char *, int))(4 * LODWORD(y) + 0xB3D4D0); /*0x6e1d0e*/
  if ( m_usVertices ) /*0x6e1d15*/
  {
    while ( v7( /*0x6e1d3a*/
              (char *)this->members.super.m_pkNormal + v6 * LOBYTE(this->members.super.m_pkVertex),
              v6 * LOBYTE(this->members.super.m_pkVertex) + *(_DWORD *)(a2 + 0x20)) )
    {
      if ( ++v6 >= (unsigned int)this->members.super.m_usVertices ) /*0x6e1d49*/
        goto LABEL_15; /*0x6e1d49*/
    }
  }
  else
  {
LABEL_15:
    v8 = *(unsigned __int8 (__cdecl **)(char *, int))(4 * LODWORD(this->members.super.m_kBound.Center.z) + 0xB3D4B8); /*0x6e1d4b*/
    v9 = 0; /*0x6e1d55*/
    if ( this->members.super.serial ) /*0x6e1d57*/
    {
      while ( v8( /*0x6e1d7a*/
                (char *)this->members.super.m_pkColor + v9 * BYTE1(this->members.super.m_pkVertex),
                v9 * BYTE1(this->members.super.m_pkVertex) + *(_DWORD *)(a2 + 0x24)) )
      {
        if ( ++v9 >= (unsigned int)this->members.super.serial ) /*0x6e1d85*/
          goto LABEL_18; /*0x6e1d85*/
      }
    }
    else
    {
LABEL_18:
      v10 = *(unsigned __int8 (__cdecl **)(char *, int))(4 * LODWORD(this->members.super.m_kBound.Radius) + 0xB3D4A0); /*0x6e1d87*/
      v11 = 0; /*0x6e1d91*/
      if ( !LOWORD(this->members.super.m_kBound.Center.x) ) /*0x6e1d97*/
        return 1; /*0x6e1dcd*/
      while ( v10( /*0x6e1dba*/
                (char *)this->members.super.m_pkTexture + v11 * BYTE2(this->members.super.m_pkVertex),
                v11 * BYTE2(this->members.super.m_pkVertex) + *(_DWORD *)(a2 + 0x28)) )
      {
        if ( ++v11 >= (unsigned int)LOWORD(this->members.super.m_kBound.Center.x) ) /*0x6e1dc5*/
          return 1; /*0x6e1dc5*/
      }
    }
  }
  return 0; /*0x6e1cb2*/
}
