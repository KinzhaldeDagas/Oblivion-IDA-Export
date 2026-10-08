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
  char *v13; // ebx
  unsigned int *v14; // ecx

  result = sub_700670(this, a2); /*0x726439*/
  if ( result ) /*0x726440*/
  {
    if ( LOWORD(this->members.super.m_kBound.Center.x) == *(_WORD *)(a2 + 0xC) /*0x72645c*/
      && (y = this->members.super.m_kBound.Center.y, LODWORD(y) == *(_DWORD *)(a2 + 0x10)) )
    {
      v5 = 0; /*0x726463*/
      if ( y == 0.0 ) /*0x726467*/
      {
LABEL_14:
        m_pkColor_high = HIWORD(this->members.super.m_pkColor); /*0x7264b9*/
        v11 = 0; /*0x7264bd*/
        if ( HIWORD(this->members.super.m_pkColor) ) /*0x7264b9*/
        {
          v12 = *(int **)(a2 + 0x20); /*0x7264c7*/
          v13 = (char *)((char *)this->members.super.m_pkNormal - (char *)v12); /*0x7264cd*/
          do /*0x7264d4*/
          {
            v14 = *(unsigned int **)((char *)v12 + (_DWORD)v13); /*0x7264d4*/
            if ( *v12 ) /*0x7264d0*/
            {
              if ( !v14 || !sub_725EF0(v14, *v12) ) /*0x7264eb*/
                return 0; /*0x7264f2*/
            }
            else if ( v14 ) /*0x7264db*/
            {
              return 0; /*0x7264db*/
            }
            ++v11; /*0x7264f4*/
            ++v12; /*0x7264f7*/
          }
          while ( v11 < m_pkColor_high ); /*0x7264d4*/
        }
        return 1; /*0x7264fe*/
      }
      else
      {
        v6 = *(_DWORD *)(a2 + 0x14); /*0x726469*/
        z = this->members.super.m_kBound.Center.z; /*0x72646c*/
        v8 = (_DWORD *)(v6 + 8); /*0x726471*/
        v9 = v6 - LODWORD(z); /*0x726474*/
        while ( *(_DWORD *)(LODWORD(z) + 4) == v8[0xFFFFFFFF] /*0x7264aa*/
             && *(_DWORD *)(LODWORD(z) + 8) == *v8
             && *(_DWORD *)(LODWORD(z) + 0xC) == v8[1]
             && *(_DWORD *)(LODWORD(z) + 0x10) == v8[2]
             && *(_DWORD *)(LODWORD(z) + 0x14) == v8[3]
             && *(_DWORD *)(LODWORD(z) + 0x18) == v8[4]
             && *(_BYTE *)LODWORD(z) == *(_BYTE *)(LODWORD(z) + v9) )
        {
          ++v5; /*0x7264ac*/
          v8 += 7; /*0x7264af*/
          LODWORD(z) += 0x1C; /*0x7264b2*/
          if ( v5 >= LODWORD(y) ) /*0x7264b7*/
            goto LABEL_14; /*0x7264b7*/
        }
        return 0; /*0x7264dd*/
      }
    }
    else
    {
      return 0; /*0x726509*/
    }
  }
  return result; /*0x726443*/
}
