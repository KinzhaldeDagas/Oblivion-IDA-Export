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

  if ( !sub_700670(this, a2) ) /*0x6d4879*/
    return 0; /*0x6d4879*/
  v4 = *(_DWORD *)&this->members.super.m_usVertices; /*0x6d4889*/
  if ( v4 != *(_DWORD *)(a2 + 8) ) /*0x6d488f*/
    return 0; /*0x6d488f*/
  y = this->members.super.m_kBound.Center.y; /*0x6d4891*/
  if ( LODWORD(y) != *(_DWORD *)(a2 + 0x10) /*0x6d48e7*/
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
    return 0; /*0x6d4886*/
  }
  v6 = 0; /*0x6d48ea*/
  v7 = *(unsigned __int8 (__cdecl **)(int, int))(4 * LODWORD(y) + 0xB3D4A0); /*0x6d48ef*/
  if ( v4 ) /*0x6d48f6*/
  {
    while ( v7( /*0x6d491a*/
              v6 * *((unsigned __int8 *)this + 0x48) + LODWORD(this->members.super.m_kBound.Center.x),
              v6 * *((unsigned __int8 *)this + 0x48) + *(_DWORD *)(a2 + 0xC)) )
    {
      if ( (unsigned int)++v6 >= *(_DWORD *)&this->members.super.m_usVertices ) /*0x6d4926*/
        goto LABEL_18; /*0x6d4926*/
    }
  }
  else
  {
LABEL_18:
    v8 = *(unsigned __int8 (__cdecl **)(int, int))(4 * (int)this->members.super.m_pkVertex + 0xB3D4A0); /*0x6d4928*/
    v9 = 0; /*0x6d4932*/
    if ( LODWORD(this->members.super.m_kBound.Center.z) ) /*0x6d4934*/
    {
      while ( v8( /*0x6d495a*/
                v9 * *((unsigned __int8 *)this + 0x49) + LODWORD(this->members.super.m_kBound.Radius),
                v9 * *((unsigned __int8 *)this + 0x49) + *(_DWORD *)(a2 + 0x18)) )
      {
        if ( (unsigned int)++v9 >= LODWORD(this->members.super.m_kBound.Center.z) ) /*0x6d4966*/
          goto LABEL_21; /*0x6d4966*/
      }
    }
    else
    {
LABEL_21:
      v10 = *(unsigned __int8 (__cdecl **)(char *, int))(4 * (int)this->members.super.m_pkTexture + 0xB3D4A0); /*0x6d4968*/
      v11 = 0; /*0x6d4972*/
      if ( this->members.super.m_pkNormal ) /*0x6d4974*/
      {
        while ( v10( /*0x6d499a*/
                  (char *)this->members.super.m_pkColor + v11 * *((unsigned __int8 *)this + 0x4A),
                  v11 * *((unsigned __int8 *)this + 0x4A) + *(_DWORD *)(a2 + 0x24)) )
        {
          if ( (NiPoint3 *)++v11 >= this->members.super.m_pkNormal ) /*0x6d49a2*/
            goto LABEL_24; /*0x6d49a2*/
        }
      }
      else
      {
LABEL_24:
        v12 = *(unsigned __int8 (__cdecl **)(int, int))(4 * (int)this->members.super.m_spAdditionalGeomData + 0xB3D4A0); /*0x6d49a4*/
        v13 = 0; /*0x6d49ae*/
        if ( !*(_DWORD *)&this->members.super.format ) /*0x6d49b3*/
          return 1; /*0x6d49df*/
        while ( v12( /*0x6d49cf*/
                  v13 * *((unsigned __int8 *)this + 0x4B) + *(_DWORD *)&this->members.super.m_ucKeepFlags,
                  v13 * *((unsigned __int8 *)this + 0x4B) + *(_DWORD *)(a2 + 0x30)) )
        {
          if ( (unsigned int)++v13 >= *(_DWORD *)&this->members.super.format ) /*0x6d49d7*/
            return 1; /*0x6d49d7*/
        }
      }
    }
  }
  return 0; /*0x6d4882*/
}
