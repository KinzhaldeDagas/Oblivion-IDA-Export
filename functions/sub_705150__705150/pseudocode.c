char __thiscall sub_705150(NiTriBasedGeomData *this, int a2)
{
  unsigned int m_pkColor_high; // ebp
  unsigned int v5; // esi
  float *v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // ebp
  int v11; // esi
  _DWORD *v12; // ecx
  int v13; // edx
  int v14; // eax
  float *v15; // [esp-Ch] [ebp-14h]

  if ( !sub_6D7E00(this, a2) || LOWORD(this->members.super.m_kBound.Radius) != *(_WORD *)(a2 + 0x18) ) /*0x705171*/
    return 0; /*0x705166*/
  m_pkColor_high = HIWORD(this->members.super.m_pkColor); /*0x705178*/
  if ( m_pkColor_high != *(unsigned __int16 *)(a2 + 0x26) ) /*0x70517e*/
    return 0; /*0x705185*/
  v5 = 0; /*0x705189*/
  if ( HIWORD(this->members.super.m_pkColor) ) /*0x705178*/
  {
    do /*0x7051cd*/
    {
      v6 = *((float **)&this->members.super.m_pkNormal->x + v5); /*0x705193*/
      v7 = *(_DWORD *)(*(_DWORD *)(a2 + 0x20) + 4 * v5); /*0x70519b*/
      if ( v6 ) /*0x70519e*/
      {
        if ( !v7 ) /*0x7051a2*/
          return 0; /*0x7051a2*/
        v15 = *(float **)(*(_DWORD *)(a2 + 0x20) + 4 * v5); /*0x7051ab*/
        if ( v5 == 5 ) /*0x7051ac*/
        {
          if ( !sub_704300(v6, v15) ) /*0x7051b5*/
            return 0; /*0x7051b5*/
        }
        else if ( !sub_704290(v6, (int)v15) ) /*0x7051c0*/
        {
          return 0; /*0x7051c0*/
        }
      }
      else if ( v7 ) /*0x7051c6*/
      {
        return 0; /*0x7051c6*/
      }
      ++v5; /*0x7051c8*/
    }
    while ( v5 < m_pkColor_high ); /*0x7051cd*/
  }
  v8 = *(_DWORD *)&this->members.super.format; /*0x7051cf*/
  if ( v8 ) /*0x7051d4*/
  {
    v9 = *(_DWORD *)(a2 + 0x2C); /*0x7051d6*/
    if ( v9 ) /*0x7051db*/
    {
      v10 = *(unsigned __int16 *)(v8 + 0xA); /*0x7051dd*/
      if ( v10 == *(unsigned __int16 *)(v9 + 0xA) ) /*0x7051e7*/
      {
        v11 = 0; /*0x7051e9*/
        if ( *(_WORD *)(v8 + 0xA) ) /*0x7051dd*/
        {
          while ( 1 ) /*0x7051f6*/
          {
            v12 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)&this->members.super.format + 4) + 4 * v11); /*0x7051f6*/
            v13 = *(_DWORD *)(a2 + 0x2C); /*0x7051fb*/
            v14 = *(_DWORD *)(*(_DWORD *)(v13 + 4) + 4 * v11); /*0x705201*/
            if ( v12 ) /*0x705204*/
            {
              if ( !v14 || !sub_704380(v12, *(_DWORD *)(*(_DWORD *)(v13 + 4) + 4 * v11)) ) /*0x70520b*/
                return 0; /*0x705212*/
            }
            else if ( v14 ) /*0x705218*/
            {
              return 0; /*0x705218*/
            }
            if ( ++v11 >= v10 ) /*0x70521f*/
              return 1; /*0x70521f*/
          }
        }
        return 1; /*0x7051ed*/
      }
    }
  }
  else if ( !*(_DWORD *)(a2 + 0x2C) ) /*0x70522e*/
  {
    return 1; /*0x705227*/
  }
  return 0; /*0x705162*/
}
