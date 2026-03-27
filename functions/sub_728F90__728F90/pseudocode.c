bool __thiscall sub_728F90(NiTriBasedGeomData *this, int a2)
{
  int v2; // ebp
  NiTriBasedGeomData *v3; // edi
  UInt16 m_usVertices; // ax
  float *p_x; // esi
  unsigned int v7; // ebx
  unsigned int v8; // edi
  int v9; // eax
  float *v10; // esi
  __int16 v11; // ax
  bool v12; // zf
  UInt16 v13; // ax
  unsigned int v14; // ebx
  unsigned int v15; // edi
  int v16; // ebp
  float *m_pkColor; // esi
  unsigned int v18; // edi
  unsigned int v19; // ebx
  int v20; // eax
  void *m_pkTexture; // ecx
  UInt16 format; // ax
  unsigned int v23; // ebx
  unsigned int v24; // esi
  int v25; // eax
  float *v26; // edi
  NiAdditionalGeometryData *m_spAdditionalGeomData; // ecx
  int v29; // [esp+Ch] [ebp-4h]
  int a2a; // [esp+14h] [ebp+4h]
  int a2b; // [esp+14h] [ebp+4h]

  v2 = a2;
  v3 = this;
  if ( !sub_700670(this, a2) )
    return 0;
  m_usVertices = v3->members.super.m_usVertices;
  if ( m_usVertices != *(_WORD *)(a2 + 8) )
    return 0;
  p_x = &v3->members.super.m_pkVertex->x;
  if ( p_x )
  {
    if ( *(_DWORD *)(a2 + 0x1C) )
      goto LABEL_8;
    return 0;
  }
  if ( *(_DWORD *)(a2 + 0x1C) )
    return 0;
LABEL_8:
  if ( v3->members.super.m_ucKeepFlags != *(_BYTE *)(a2 + 0x30)
    || v3->members.super.m_ucCompressFlags != *(_BYTE *)(a2 + 0x31) )
  {
    return 0;
  }
  if ( p_x )
  {
    v7 = m_usVertices;
    v8 = 0;
    if ( m_usVertices )
    {
      v9 = *(_DWORD *)(a2 + 0x1C) - (_DWORD)p_x;
      v29 = v9;
      while ( !sub_8AA390(p_x, (float *)((char *)p_x + v9)) )
      {
        ++v8;
        p_x += 3;
        if ( v8 >= v7 )
          goto LABEL_17;
        v9 = v29;
      }
      return 0;
    }
LABEL_17:
    v3 = this;
  }
  v10 = &v3->members.super.m_pkNormal->x;
  if ( v10 )
  {
    if ( !*(_DWORD *)(a2 + 0x20) )
      return 0;
    v11 = v3->members.super.format & 0xF000;
    if ( v11 != (*(_WORD *)(a2 + 0x2C) & 0xF000) )
      return 0;
    v12 = v11 == 0;
    v13 = v3->members.super.m_usVertices;
    if ( v12 )
      v14 = v13;
    else
      v14 = 3 * v13;
    v15 = 0;
    if ( v14 )
    {
      v16 = *(_DWORD *)(a2 + 0x20) - (_DWORD)v10;
      while ( !sub_8AA390(v10, (float *)((char *)v10 + v16)) )
      {
        ++v15;
        v10 += 3;
        if ( v15 >= v14 )
        {
          v2 = a2;
          goto LABEL_32;
        }
      }
      return 0;
    }
LABEL_32:
    v3 = this;
  }
  else if ( *(_DWORD *)(a2 + 0x20) )
  {
    return 0;
  }
  if ( !sub_72A0A0(&v3->members.super.m_kBound.Center.x, (float *)(v2 + 0xC)) )
    return 0;
  m_pkColor = (float *)v3->members.super.m_pkColor;
  if ( m_pkColor )
  {
    if ( !*(_DWORD *)(v2 + 0x24) )
      return 0;
  }
  if ( !v3->members.super.m_pkTexture && *(_DWORD *)(v2 + 0x28) )
    return 0;
  if ( m_pkColor )
  {
    v18 = v3->members.super.m_usVertices;
    v19 = 0;
    if ( v18 )
    {
      v20 = *(_DWORD *)(v2 + 0x24) - (_DWORD)m_pkColor;
      a2a = v20;
      while ( !sub_632310(m_pkColor, (float *)((char *)m_pkColor + v20)) )
      {
        ++v19;
        m_pkColor += 4;
        if ( v19 >= v18 )
          goto LABEL_44;
        v20 = a2a;
      }
      return 0;
    }
LABEL_44:
    v3 = this;
  }
  m_pkTexture = v3->members.super.m_pkTexture;
  if ( m_pkTexture )
  {
    if ( !*(_DWORD *)(v2 + 0x28) )
      return 0;
    format = v3->members.super.format;
    if ( (((unsigned __int8)format ^ *(_BYTE *)(v2 + 0x2C)) & 0x3F) != 0 )
      return 0;
    v23 = v3->members.super.m_usVertices * (format & 0x3F);
    v24 = 0;
    if ( v23 )
    {
      v25 = *(_DWORD *)(v2 + 0x28) - (_DWORD)m_pkTexture;
      v26 = (float *)v3->members.super.m_pkTexture;
      a2b = v25;
      while ( !sub_4B9D10(v26, (float *)((char *)v26 + v25)) )
      {
        ++v24;
        v26 += 2;
        if ( v24 >= v23 )
        {
          v3 = this;
          goto LABEL_57;
        }
        v25 = a2b;
      }
      return 0;
    }
  }
  else if ( *(_DWORD *)(v2 + 0x28) )
  {
    return 0;
  }
LABEL_57:
  m_spAdditionalGeomData = v3->members.super.m_spAdditionalGeomData;
  if ( !m_spAdditionalGeomData )
    return !*(_DWORD *)(v2 + 0x34);
  return *(_DWORD *)(v2 + 0x34)
      && (!*(_DWORD *)(v2 + 0x34)
       || (*(unsigned __int8 (__thiscall **)(NiAdditionalGeometryData *, _DWORD))(*(_DWORD *)m_spAdditionalGeomData
                                                                                + 0x2C))(
            m_spAdditionalGeomData,
            *(_DWORD *)(v2 + 0x34)));
}
