bool __thiscall sub_726430(NiTriBasedGeomData *this, int a2)
{
  bool result; // al
  float y; // edi
  unsigned int v5; // esi
  int v6; // edx
  float z; // eax
  _DWORD *v8; // ecx
  int v9; // ebp
  unsigned int m_pkColor_high; // ebp
  unsigned int v11; // edi
  int *v12; // esi
  int v13; // ebx
  unsigned int *v14; // ecx

  result = sub_700670(this, a2);
  if ( result )
  {
    if ( LOWORD(this->members.super.m_kBound.Center.x) == *(_WORD *)(a2 + 0xC)
      && (y = this->members.super.m_kBound.Center.y, LODWORD(y) == *(_DWORD *)(a2 + 0x10)) )
    {
      v5 = 0;
      if ( y == 0.0 )
      {
LABEL_14:
        m_pkColor_high = HIWORD(this->members.super.m_pkColor);
        v11 = 0;
        if ( HIWORD(this->members.super.m_pkColor) )
        {
          v12 = *(int **)(a2 + 0x20);
          v13 = (char *)this->members.super.m_pkNormal - (char *)v12;
          do
          {
            v14 = *(unsigned int **)((char *)v12 + v13);
            if ( *v12 )
            {
              if ( !v14 || !sub_725EF0(v14, *v12) )
                return 0;
            }
            else if ( v14 )
            {
              return 0;
            }
            ++v11;
            ++v12;
          }
          while ( v11 < m_pkColor_high );
        }
        return 1;
      }
      else
      {
        v6 = *(_DWORD *)(a2 + 0x14);
        z = this->members.super.m_kBound.Center.z;
        v8 = (_DWORD *)(v6 + 8);
        v9 = v6 - LODWORD(z);
        while ( *(_DWORD *)(LODWORD(z) + 4) == v8[0xFFFFFFFF]
             && *(_DWORD *)(LODWORD(z) + 8) == *v8
             && *(_DWORD *)(LODWORD(z) + 0xC) == v8[1]
             && *(_DWORD *)(LODWORD(z) + 0x10) == v8[2]
             && *(_DWORD *)(LODWORD(z) + 0x14) == v8[3]
             && *(_DWORD *)(LODWORD(z) + 0x18) == v8[4]
             && *(_BYTE *)LODWORD(z) == *(_BYTE *)(LODWORD(z) + v9) )
        {
          ++v5;
          v8 += 7;
          LODWORD(z) += 0x1C;
          if ( v5 >= LODWORD(y) )
            goto LABEL_14;
        }
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
