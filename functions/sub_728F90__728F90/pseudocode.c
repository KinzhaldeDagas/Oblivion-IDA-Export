bool __thiscall sub_728F90(NiTriBasedGeomData *this, int a2)
{
  int v2; // ebp
  NiTriBasedGeomData *v3; // edi
  UInt16 m_usVertices; // ax
  const NiPoint3 *m_pkVertex; // esi
  unsigned int v7; // ebx
  unsigned int v8; // edi
  int v9; // eax
  const NiPoint3 *m_pkNormal; // esi
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

  v2 = a2; /*0x728f94*/
  v3 = this; /*0x728f99*/
  if ( !sub_700670(this, a2) ) /*0x728fa0*/
    return 0; /*0x728fa0*/
  m_usVertices = v3->members.super.m_usVertices; /*0x728fb3*/
  if ( m_usVertices != *(_WORD *)(a2 + 8) ) /*0x728fbb*/
    return 0; /*0x728fb0*/
  m_pkVertex = v3->members.super.m_pkVertex; /*0x728fbe*/
  if ( m_pkVertex ) /*0x728fc3*/
  {
    if ( *(_DWORD *)(a2 + 0x1C) ) /*0x728fc5*/
      goto LABEL_8; /*0x728fc9*/
    return 0; /*0x728fed*/
  }
  if ( *(_DWORD *)(a2 + 0x1C) ) /*0x728fcf*/
    return 0; /*0x728fd3*/
LABEL_8:
  if ( v3->members.super.m_ucKeepFlags != *(_BYTE *)(a2 + 0x30) /*0x728fe3*/
    || v3->members.super.m_ucCompressFlags != *(_BYTE *)(a2 + 0x31) )
  {
    return 0; /*0x728fe3*/
  }
  if ( m_pkVertex ) /*0x728ff3*/
  {
    v7 = m_usVertices; /*0x728ff5*/
    v8 = 0; /*0x728ff8*/
    if ( m_usVertices ) /*0x728ffc*/
    {
      v9 = *(_DWORD *)(a2 + 0x1C) - (_DWORD)m_pkVertex; /*0x729001*/
      v29 = v9; /*0x729003*/
      while ( !NiPoint3__NotEqual(m_pkVertex, (const NiPoint3 *)((char *)m_pkVertex + v9)) ) /*0x729020*/
      {
        ++v8; /*0x729026*/
        ++m_pkVertex; /*0x729029*/
        if ( v8 >= v7 ) /*0x72902e*/
          goto LABEL_17; /*0x72902e*/
        v9 = v29; /*0x729010*/
      }
      return 0; /*0x729020*/
    }
LABEL_17:
    v3 = this; /*0x729030*/
  }
  m_pkNormal = v3->members.super.m_pkNormal; /*0x729034*/
  if ( m_pkNormal ) /*0x729039*/
  {
    if ( !*(_DWORD *)(a2 + 0x20) ) /*0x72903b*/
      return 0; /*0x72903b*/
    v11 = v3->members.super.format & 0xF000; /*0x72905f*/
    if ( v11 != (*(_WORD *)(a2 + 0x2C) & 0xF000) ) /*0x72906b*/
      return 0; /*0x72906b*/
    v12 = v11 == 0; /*0x729071*/
    v13 = v3->members.super.m_usVertices; /*0x729074*/
    if ( v12 ) /*0x729078*/
      v14 = v13; /*0x72907a*/
    else
      v14 = 3 * v13; /*0x729082*/
    v15 = 0; /*0x729085*/
    if ( v14 ) /*0x729089*/
    {
      v16 = *(_DWORD *)(a2 + 0x20) - (_DWORD)m_pkNormal; /*0x72908e*/
      while ( !NiPoint3__NotEqual(m_pkNormal, (const NiPoint3 *)((char *)m_pkNormal + v16)) ) /*0x72909d*/
      {
        ++v15; /*0x7290a3*/
        ++m_pkNormal; /*0x7290a6*/
        if ( v15 >= v14 ) /*0x7290ab*/
        {
          v2 = a2; /*0x7290ad*/
          goto LABEL_32; /*0x7290ad*/
        }
      }
      return 0; /*0x72909d*/
    }
LABEL_32:
    v3 = this; /*0x7290b1*/
  }
  else if ( *(_DWORD *)(a2 + 0x20) ) /*0x729049*/
  {
    return 0; /*0x72904d*/
  }
  if ( !sub_72A0A0(&v3->members.super.m_kBound.Center.x, (float *)(v2 + 0xC)) ) /*0x7290bc*/
    return 0; /*0x7290bc*/
  m_pkColor = (float *)v3->members.super.m_pkColor; /*0x7290c9*/
  if ( m_pkColor ) /*0x7290ce*/
  {
    if ( !*(_DWORD *)(v2 + 0x24) ) /*0x7290d0*/
      return 0; /*0x7290d0*/
  }
  if ( !v3->members.super.m_pkTexture && *(_DWORD *)(v2 + 0x28) ) /*0x7290e0*/
    return 0; /*0x7290e4*/
  if ( m_pkColor ) /*0x7290ec*/
  {
    v18 = v3->members.super.m_usVertices; /*0x7290ee*/
    v19 = 0; /*0x7290f2*/
    if ( v18 ) /*0x7290f6*/
    {
      v20 = *(_DWORD *)(v2 + 0x24) - (_DWORD)m_pkColor; /*0x7290fb*/
      a2a = v20; /*0x7290fd*/
      while ( !sub_632310(m_pkColor, (float *)((char *)m_pkColor + v20)) ) /*0x729113*/
      {
        ++v19; /*0x729119*/
        m_pkColor += 4; /*0x72911c*/
        if ( v19 >= v18 ) /*0x729121*/
          goto LABEL_44; /*0x729121*/
        v20 = a2a; /*0x729103*/
      }
      return 0; /*0x729113*/
    }
LABEL_44:
    v3 = this; /*0x729123*/
  }
  m_pkTexture = v3->members.super.m_pkTexture; /*0x729127*/
  if ( m_pkTexture ) /*0x72912c*/
  {
    if ( !*(_DWORD *)(v2 + 0x28) ) /*0x72912e*/
      return 0; /*0x72912e*/
    format = v3->members.super.format; /*0x72914a*/
    if ( (((unsigned __int8)format ^ *(_BYTE *)(v2 + 0x2C)) & 0x3F) != 0 ) /*0x729156*/
      return 0; /*0x729156*/
    v23 = v3->members.super.m_usVertices * (format & 0x3F); /*0x729162*/
    v24 = 0; /*0x729164*/
    if ( v23 ) /*0x729168*/
    {
      v25 = *(_DWORD *)(v2 + 0x28) - (_DWORD)m_pkTexture; /*0x72916d*/
      v26 = (float *)v3->members.super.m_pkTexture; /*0x72916f*/
      a2b = v25; /*0x729171*/
      while ( !sub_4B9D10(v26, (float *)((char *)v26 + v25)) ) /*0x729187*/
      {
        ++v24; /*0x729189*/
        v26 += 2; /*0x72918c*/
        if ( v24 >= v23 ) /*0x729191*/
        {
          v3 = this; /*0x729193*/
          goto LABEL_57; /*0x729193*/
        }
        v25 = a2b; /*0x729177*/
      }
      return 0; /*0x729187*/
    }
  }
  else if ( *(_DWORD *)(v2 + 0x28) ) /*0x72913c*/
  {
    return 0; /*0x729140*/
  }
LABEL_57:
  m_spAdditionalGeomData = v3->members.super.m_spAdditionalGeomData; /*0x729197*/
  if ( !m_spAdditionalGeomData ) /*0x72919c*/
    return !*(_DWORD *)(v2 + 0x34); /*0x7291ce*/
  return *(_DWORD *)(v2 + 0x34) /*0x7291bf*/
      && (!*(_DWORD *)(v2 + 0x34)
       || (*(unsigned __int8 (__thiscall **)(NiAdditionalGeometryData *, _DWORD))(*(_DWORD *)m_spAdditionalGeomData
                                                                                + 0x2C))(
            m_spAdditionalGeomData,
            *(_DWORD *)(v2 + 0x34)));
}
