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

  if ( !sub_700670(this, a2) )
    return 0;
  m_usVertices = this->members.super.m_usVertices;
  if ( m_usVertices != *(_WORD *)(a2 + 8) )
    return 0;
  y = this->members.super.m_kBound.Center.y;
  if ( LODWORD(y) != *(_DWORD *)(a2 + 0x10)
    || this->members.super.serial != *(_WORD *)(a2 + 0xA)
    || LODWORD(this->members.super.m_kBound.Center.z) != *(_DWORD *)(a2 + 0x14)
    || LOWORD(this->members.super.m_kBound.Center.x) != *(_WORD *)(a2 + 0xC)
    || LODWORD(this->members.super.m_kBound.Radius) != *(_DWORD *)(a2 + 0x18)
    || LOBYTE(this->members.super.m_pkVertex) != *(_BYTE *)(a2 + 0x1C)
    || BYTE1(this->members.super.m_pkVertex) != *(_BYTE *)(a2 + 0x1D)
    || BYTE2(this->members.super.m_pkVertex) != *(_BYTE *)(a2 + 0x1E) )
  {
    return 0;
  }
  v6 = 0;
  v7 = *(unsigned __int8 (__cdecl **)(char *, int))(4 * LODWORD(y) + 0xB3D4D0);
  if ( m_usVertices )
  {
    while ( v7(
              (char *)this->members.super.m_pkNormal + v6 * LOBYTE(this->members.super.m_pkVertex),
              v6 * LOBYTE(this->members.super.m_pkVertex) + *(_DWORD *)(a2 + 0x20)) )
    {
      if ( ++v6 >= (unsigned int)this->members.super.m_usVertices )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    v8 = *(unsigned __int8 (__cdecl **)(char *, int))(4 * LODWORD(this->members.super.m_kBound.Center.z) + 0xB3D4B8);
    v9 = 0;
    if ( this->members.super.serial )
    {
      while ( v8(
                (char *)this->members.super.m_pkColor + v9 * BYTE1(this->members.super.m_pkVertex),
                v9 * BYTE1(this->members.super.m_pkVertex) + *(_DWORD *)(a2 + 0x24)) )
      {
        if ( ++v9 >= (unsigned int)this->members.super.serial )
          goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      v10 = *(unsigned __int8 (__cdecl **)(char *, int))(4 * LODWORD(this->members.super.m_kBound.Radius) + 0xB3D4A0);
      v11 = 0;
      if ( !LOWORD(this->members.super.m_kBound.Center.x) )
        return 1;
      while ( v10(
                (char *)this->members.super.m_pkTexture + v11 * BYTE2(this->members.super.m_pkVertex),
                v11 * BYTE2(this->members.super.m_pkVertex) + *(_DWORD *)(a2 + 0x28)) )
      {
        if ( ++v11 >= (unsigned int)LOWORD(this->members.super.m_kBound.Center.x) )
          return 1;
      }
    }
  }
  return 0;
}
