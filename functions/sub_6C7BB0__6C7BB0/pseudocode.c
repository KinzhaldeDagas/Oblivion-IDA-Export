bool __thiscall sub_6C7BB0(NiTriBasedGeomData *this, int a2)
{
  const char *v4; // eax
  float x; // eax
  unsigned int v6; // ebx
  int v7; // esi
  NiPoint3 *m_pkNormal; // ecx
  const char *v9; // eax
  const char *v10; // ecx

  if ( !sub_700670(this, a2) ) /*0x6c7bb9*/
    return 0; /*0x6c7bc0*/
  v4 = *(const char **)&this->members.super.m_usVertices; /*0x6c7bc9*/
  if ( v4 ) /*0x6c7bce*/
  {
    if ( !*(_DWORD *)(a2 + 8) || *(_DWORD *)(a2 + 8) && CRT_StricmpLocaleDispatch(v4, *(const char **)(a2 + 8)) ) /*0x6c7bed*/
      return 0; /*0x6c7bf7*/
  }
  else if ( *(_DWORD *)(a2 + 8) ) /*0x6c7bda*/
  {
    return 0; /*0x6c7bc6*/
  }
  x = this->members.super.m_kBound.Center.x; /*0x6c7bf9*/
  if ( LODWORD(x) != *(_DWORD *)(a2 + 0xC) || LODWORD(this->members.super.m_kBound.Center.y) != *(_DWORD *)(a2 + 0x10) ) /*0x6c7c07*/
    return 0; /*0x6c7c07*/
  v6 = 0; /*0x6c7c0a*/
  if ( x != 0.0 ) /*0x6c7c0f*/
  {
    v7 = 0; /*0x6c7c11*/
    while ( sub_6C76C0( /*0x6c7c3d*/
              (_DWORD *)(v7 + LODWORD(this->members.super.m_kBound.Center.z)),
              (int *)(v7 + *(_DWORD *)(a2 + 0x14)))
         && sub_6C7740((_WORD *)(v7 + LODWORD(this->members.super.m_kBound.Radius)), v7 + *(_DWORD *)(a2 + 0x18)) )
    {
      ++v6; /*0x6c7c43*/
      v7 += 0x10; /*0x6c7c46*/
      if ( v6 >= LODWORD(this->members.super.m_kBound.Center.x) ) /*0x6c7c4c*/
        goto LABEL_17; /*0x6c7c4c*/
    }
    return 0; /*0x6c7c3d*/
  }
LABEL_17:
  if ( *(float *)(a2 + 0x1C) == *(float *)&this->members.super.m_pkVertex ) /*0x6c7c5b*/
  {
    m_pkNormal = this->members.super.m_pkNormal; /*0x6c7c61*/
    if ( m_pkNormal ) /*0x6c7c66*/
    {
      if ( !*(_DWORD *)(a2 + 0x20) /*0x6c7c91*/
        || *(_DWORD *)(a2 + 0x20)
        && !(*(unsigned __int8 (__thiscall **)(NiPoint3 *, _DWORD))(LODWORD(m_pkNormal->x) + 0x2C))(
              m_pkNormal,
              *(_DWORD *)(a2 + 0x20)) )
      {
        return 0; /*0x6c7c95*/
      }
    }
    else if ( *(_DWORD *)(a2 + 0x20) ) /*0x6c7c76*/
    {
      return 0; /*0x6c7c7a*/
    }
    if ( this->members.super.m_pkColor != *(NiColorAlpha **)(a2 + 0x24) /*0x6c7cda*/
      || *(float *)(a2 + 0x28) != *(float *)&this->members.super.m_pkTexture
      || *(float *)(a2 + 0x2C) != *(float *)&this->members.super.format
      || *(float *)(a2 + 0x30) != *(float *)&this->members.super.m_ucKeepFlags )
    {
      return 0; /*0x6c7cda*/
    }
    if ( *(_DWORD *)&this->members.m_usTriangles ) /*0x6c7ce0*/
    {
      if ( !*(_DWORD *)(a2 + 0x40) /*0x6c7d13*/
        || *(_DWORD *)(a2 + 0x40)
        && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&this->members.m_usTriangles + 0x2C))(
              *(_DWORD *)&this->members.m_usTriangles,
              *(_DWORD *)(a2 + 0x40)) )
      {
        return 0; /*0x6c7d17*/
      }
    }
    else if ( *(_DWORD *)(a2 + 0x40) ) /*0x6c7cf5*/
    {
      return 0; /*0x6c7cf9*/
    }
    v9 = *((const char **)this + 0x17); /*0x6c7d19*/
    if ( v9 ) /*0x6c7d1e*/
    {
      if ( *(_DWORD *)(a2 + 0x5C) ) /*0x6c7d20*/
      {
        v10 = *(const char **)(a2 + 0x5C); /*0x6c7d34*/
        if ( !v10 || !strcmp(v9, v10) ) /*0x6c7d44*/
          return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x19) + 0x2C))( /*0x6c7d67*/
                   *((_DWORD *)this + 0x19),
                   *(_DWORD *)(a2 + 0x64)) != 0;
      }
    }
    else if ( !*(_DWORD *)(a2 + 0x5C) ) /*0x6c7d2a*/
    {
      return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x19) + 0x2C))( /*0x6c7d80*/
               *((_DWORD *)this + 0x19),
               *(_DWORD *)(a2 + 0x64)) != 0;
    }
  }
  return 0; /*0x6c7bc2*/
}
