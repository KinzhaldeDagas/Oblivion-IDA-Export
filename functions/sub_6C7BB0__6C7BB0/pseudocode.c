bool __thiscall sub_6C7BB0(NiTriBasedGeomData *this, int a2)
{
  char *v4; // eax
  float x; // eax
  unsigned int v6; // ebx
  int v7; // esi
  NiPoint3 *m_pkNormal; // ecx
  const char *v9; // eax
  const char *v10; // ecx

  if ( !sub_700670(this, a2) )
    return 0;
  v4 = *(char **)&this->members.super.m_usVertices;
  if ( v4 )
  {
    if ( !*(_DWORD *)(a2 + 8) || *(_DWORD *)(a2 + 8) && _strcmp(v4, *(char **)(a2 + 8)) )
      return 0;
  }
  else if ( *(_DWORD *)(a2 + 8) )
  {
    return 0;
  }
  x = this->members.super.m_kBound.Center.x;
  if ( LODWORD(x) != *(_DWORD *)(a2 + 0xC) || LODWORD(this->members.super.m_kBound.Center.y) != *(_DWORD *)(a2 + 0x10) )
    return 0;
  v6 = 0;
  if ( x != 0.0 )
  {
    v7 = 0;
    while ( sub_6C76C0(
              (_DWORD *)(v7 + LODWORD(this->members.super.m_kBound.Center.z)),
              (int *)(v7 + *(_DWORD *)(a2 + 0x14)))
         && sub_6C7740((_WORD *)(v7 + LODWORD(this->members.super.m_kBound.Radius)), v7 + *(_DWORD *)(a2 + 0x18)) )
    {
      ++v6;
      v7 += 0x10;
      if ( v6 >= LODWORD(this->members.super.m_kBound.Center.x) )
        goto LABEL_17;
    }
    return 0;
  }
LABEL_17:
  if ( *(float *)(a2 + 0x1C) == *(float *)&this->members.super.m_pkVertex )
  {
    m_pkNormal = this->members.super.m_pkNormal;
    if ( m_pkNormal )
    {
      if ( !*(_DWORD *)(a2 + 0x20)
        || *(_DWORD *)(a2 + 0x20)
        && !(*(unsigned __int8 (__thiscall **)(NiPoint3 *, _DWORD))(LODWORD(m_pkNormal->x) + 0x2C))(
              m_pkNormal,
              *(_DWORD *)(a2 + 0x20)) )
      {
        return 0;
      }
    }
    else if ( *(_DWORD *)(a2 + 0x20) )
    {
      return 0;
    }
    if ( this->members.super.m_pkColor != *(NiColorAlpha **)(a2 + 0x24)
      || *(float *)(a2 + 0x28) != *(float *)&this->members.super.m_pkTexture
      || *(float *)(a2 + 0x2C) != *(float *)&this->members.super.format
      || *(float *)(a2 + 0x30) != *(float *)&this->members.super.m_ucKeepFlags )
    {
      return 0;
    }
    if ( *(_DWORD *)&this->members.m_usTriangles )
    {
      if ( !*(_DWORD *)(a2 + 0x40)
        || *(_DWORD *)(a2 + 0x40)
        && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&this->members.m_usTriangles + 0x2C))(
              *(_DWORD *)&this->members.m_usTriangles,
              *(_DWORD *)(a2 + 0x40)) )
      {
        return 0;
      }
    }
    else if ( *(_DWORD *)(a2 + 0x40) )
    {
      return 0;
    }
    v9 = *((const char **)this + 0x17);
    if ( v9 )
    {
      if ( *(_DWORD *)(a2 + 0x5C) )
      {
        v10 = *(const char **)(a2 + 0x5C);
        if ( !v10 || !strcmp(v9, v10) )
          return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x19) + 0x2C))(
                   *((_DWORD *)this + 0x19),
                   *(_DWORD *)(a2 + 0x64)) != 0;
      }
    }
    else if ( !*(_DWORD *)(a2 + 0x5C) )
    {
      return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x19) + 0x2C))(
               *((_DWORD *)this + 0x19),
               *(_DWORD *)(a2 + 0x64)) != 0;
    }
  }
  return 0;
}
