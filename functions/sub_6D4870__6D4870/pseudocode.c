char __thiscall sub_6D4870(NiTriBasedGeomData *this, int a2)
{
  int v4; // ecx
  float y; // eax
  int v6; // ebx
  unsigned __int8 (__cdecl *v7)(int, int); // ebp
  unsigned __int8 (__cdecl *v8)(int, int); // ebp
  int v9; // ebx
  unsigned __int8 (__cdecl *v10)(char *, int); // ebp
  int v11; // ebx
  unsigned __int8 (__cdecl *v12)(int, int); // ebp
  int v13; // ebx

  if ( !sub_700670(this, a2) )
    return 0;
  v4 = *(_DWORD *)&this->members.super.m_usVertices;
  if ( v4 != *(_DWORD *)(a2 + 8) )
    return 0;
  y = this->members.super.m_kBound.Center.y;
  if ( LODWORD(y) != *(_DWORD *)(a2 + 0x10)
    || LODWORD(this->members.super.m_kBound.Center.z) != *(_DWORD *)(a2 + 0x14)
    || this->members.super.m_pkVertex != *(NiPoint3 **)(a2 + 0x1C)
    || this->members.super.m_pkNormal != *(NiPoint3 **)(a2 + 0x20)
    || this->members.super.m_pkTexture != *(void **)(a2 + 0x28)
    || *(_DWORD *)&this->members.super.format != *(_DWORD *)(a2 + 0x2C)
    || this->members.super.m_spAdditionalGeomData != *(NiAdditionalGeometryData **)(a2 + 0x34)
    || *((_BYTE *)this + 0x48) != *(_BYTE *)(a2 + 0x48)
    || *((_BYTE *)this + 0x49) != *(_BYTE *)(a2 + 0x49)
    || *((_BYTE *)this + 0x4A) != *(_BYTE *)(a2 + 0x4A)
    || *((_BYTE *)this + 0x4B) != *(_BYTE *)(a2 + 0x4B) )
  {
    return 0;
  }
  v6 = 0;
  v7 = *(unsigned __int8 (__cdecl **)(int, int))(4 * LODWORD(y) + 0xB3D4A0);
  if ( v4 )
  {
    while ( v7(
              v6 * *((unsigned __int8 *)this + 0x48) + LODWORD(this->members.super.m_kBound.Center.x),
              v6 * *((unsigned __int8 *)this + 0x48) + *(_DWORD *)(a2 + 0xC)) )
    {
      if ( (unsigned int)++v6 >= *(_DWORD *)&this->members.super.m_usVertices )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    v8 = *(unsigned __int8 (__cdecl **)(int, int))(4 * (int)this->members.super.m_pkVertex + 0xB3D4A0);
    v9 = 0;
    if ( LODWORD(this->members.super.m_kBound.Center.z) )
    {
      while ( v8(
                v9 * *((unsigned __int8 *)this + 0x49) + LODWORD(this->members.super.m_kBound.Radius),
                v9 * *((unsigned __int8 *)this + 0x49) + *(_DWORD *)(a2 + 0x18)) )
      {
        if ( (unsigned int)++v9 >= LODWORD(this->members.super.m_kBound.Center.z) )
          goto LABEL_21;
      }
    }
    else
    {
LABEL_21:
      v10 = *(unsigned __int8 (__cdecl **)(char *, int))(4 * (int)this->members.super.m_pkTexture + 0xB3D4A0);
      v11 = 0;
      if ( this->members.super.m_pkNormal )
      {
        while ( v10(
                  (char *)this->members.super.m_pkColor + v11 * *((unsigned __int8 *)this + 0x4A),
                  v11 * *((unsigned __int8 *)this + 0x4A) + *(_DWORD *)(a2 + 0x24)) )
        {
          if ( (NiPoint3 *)++v11 >= this->members.super.m_pkNormal )
            goto LABEL_24;
        }
      }
      else
      {
LABEL_24:
        v12 = *(unsigned __int8 (__cdecl **)(int, int))(4 * (int)this->members.super.m_spAdditionalGeomData + 0xB3D4A0);
        v13 = 0;
        if ( !*(_DWORD *)&this->members.super.format )
          return 1;
        while ( v12(
                  v13 * *((unsigned __int8 *)this + 0x4B) + *(_DWORD *)&this->members.super.m_ucKeepFlags,
                  v13 * *((unsigned __int8 *)this + 0x4B) + *(_DWORD *)(a2 + 0x30)) )
        {
          if ( (unsigned int)++v13 >= *(_DWORD *)&this->members.super.format )
            return 1;
        }
      }
    }
  }
  return 0;
}
