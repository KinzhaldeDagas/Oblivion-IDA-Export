unsigned int __usercall _input_l_::_DEFAULT_LABEL_25497@<eax>(
        int a1@<ecx>,
        int a2@<ebp>,
        unsigned __int8 *a3@<edi>,
        _DWORD *a4@<esi>)
{
  bool v4; // zf
  _DWORD **v5; // eax
  char v6; // al
  int v7; // ebx
  int v8; // eax
  FILE *v9; // edx
  int v10; // ecx
  int v11; // ebx
  unsigned __int8 *v13; // edi
  unsigned __int8 *v14; // esi
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // al
  unsigned int v18; // edi
  int v19; // edx
  unsigned __int8 v20; // al
  signed int v21; // ebx

  if ( !++*(_BYTE *)(a2 + 3) ) /*0x995fac*/
    JUMPOUT(0x995EE1); /*0x995ee1*/
  v4 = *(_BYTE *)(a2 - 0xD) == 0; /*0x995fb2*/
  *(_DWORD *)(a2 - 0x28) = a3; /*0x995fb6*/
  if ( v4 ) /*0x995fb9*/
  {
    v5 = *(_DWORD ***)(a2 - 0x58); /*0x995fbb*/
    a4 = *v5; /*0x995fbe*/
    *(_DWORD *)(a2 - 0x70) = v5; /*0x995fc0*/
    *(_DWORD *)(a2 - 0x58) = v5 + 1; /*0x995fc6*/
  }
  v4 = *(_BYTE *)(a2 - 5) == 0; /*0x995fc9*/
  *(_DWORD *)(a2 - 0x38) = a4; /*0x995fcd*/
  *(_BYTE *)(a2 + 3) = 0; /*0x995fd0*/
  if ( v4 ) /*0x995fd4*/
  {
    v6 = *a3; /*0x995fd6*/
    if ( *a3 == 0x53 || (*(_BYTE *)(a2 - 5) = 0xFF, v6 == 0x43) ) /*0x995fe2*/
      *(_BYTE *)(a2 - 5) = 1; /*0x995fe4*/
  }
  v7 = *a3 | 0x20; /*0x995feb*/
  *(_DWORD *)(a2 - 0x20) = v7; /*0x995ff1*/
  if ( v7 != 0x6E ) /*0x995ff4*/
  {
    if ( v7 == 0x63 || v7 == 0x7B ) /*0x995ffe*/
    {
      v9 = *(FILE **)(a2 - 0x14); /*0x99600e*/
      ++*(_DWORD *)(a2 + 4); /*0x996011*/
      v8 = _inc(a1, v9); /*0x996014*/
    }
    else
    {
      v8 = _whiteout(a1, (_DWORD *)(a2 + 4), *(FILE **)(a2 - 0x14)); /*0x996006*/
    }
    *(_DWORD *)(a2 - 4) = v8; /*0x99601c*/
    if ( v8 == 0xFFFFFFFF ) /*0x99601f*/
      return _input_l_::_error_return_25524(a2); /*0x99601f*/
    a4 = *(_DWORD **)(a2 - 0x38); /*0x996025*/
    a3 = *(unsigned __int8 **)(a2 - 0x28); /*0x996028*/
  }
  v10 = *(_DWORD *)(a2 - 0x2C); /*0x99602b*/
  if ( v10 && !*(_DWORD *)(a2 - 0xC) ) /*0x996036*/
LABEL_83:
    JUMPOUT(0x996916); /*0x996916*/
  if ( v7 > 0x6F ) /*0x99603f*/
  {
    switch ( v7 ) /*0x99644d*/
    {
      case 'p': /*0x99644d*/
        *(_BYTE *)(a2 - 0xE) = 1; /*0x99666f*/
        break;
      case 's': /*0x99644d*/
LABEL_36:
        if ( *(char *)(a2 - 5) > 0 ) /*0x99634c*/
          *(_BYTE *)(a2 - 0x16) = 1; /*0x99634e*/
        return _input_l_::_scanit_25535(); /*0x99634f*/
      case 'u': /*0x99644d*/
        break;
      case 'x': /*0x99644d*/
LABEL_28:
        v11 = *(_DWORD *)(a2 - 4); /*0x99608d*/
        if ( v11 == 0x2D ) /*0x996093*/
        {
          *(_BYTE *)(a2 - 0x17) = 1; /*0x996099*/
          return _input_l_::_x_incwidth_25598(v10, 0x2D, a2); /*0x99609d*/
        }
        else
        {
          if ( v11 != 0x2B ) /*0x99655e*/
            JUMPOUT(0x99657F); /*0x99657f*/
          return _input_l_::_x_incwidth_25598(v10, 0x2B, a2); /*0x99655f*/
        }
      case '{': /*0x99644d*/
        if ( *(char *)(a2 - 5) > 0 ) /*0x99649a*/
          *(_BYTE *)(a2 - 0x16) = 1; /*0x99649c*/
        v13 = a3 + 1; /*0x9964a0*/
        v14 = v13; /*0x9964a4*/
        if ( *v13 == 0x5E ) /*0x9964a6*/
        {
          v14 = v13 + 1; /*0x9964a8*/
          *(_BYTE *)(a2 - 0x18) = 0xFF; /*0x9964ab*/
        }
        _memset(a2 + 0x168, 0, 0x20u); /*0x9964ba*/
        if ( *v14 == 0x5D ) /*0x9964c5*/
        {
          v15 = 0x5D; /*0x9964c7*/
          ++v14; /*0x9964c9*/
          *(_BYTE *)(a2 + 0x173) = 0x20; /*0x9964ca*/
        }
        else
        {
          v15 = *(_BYTE *)(a2 - 0x3D); /*0x9964d3*/
        }
        while ( 1 ) /*0x996542*/
        {
          v20 = *v14; /*0x996542*/
          if ( *v14 == 0x5D ) /*0x996546*/
            break; /*0x996546*/
          ++v14; /*0x9964d8*/
          if ( v20 == 0x2D && v15 && (v16 = *v14, *v14 != 0x5D) ) /*0x9964e6*/
          {
            ++v14; /*0x9964e8*/
            if ( v15 >= v16 ) /*0x9964eb*/
            {
              v17 = v15; /*0x9964f1*/
              v15 = v16; /*0x9964f3*/
            }
            else
            {
              v17 = v16; /*0x9964ed*/
            }
            if ( v15 <= v17 ) /*0x9964f7*/
            {
              v18 = v15; /*0x9964fd*/
              v19 = (unsigned __int8)(v17 - v15 + 1); /*0x996500*/
              do /*0x99651c*/
              {
                *(_BYTE *)(a2 + (v18 >> 3) + 0x168) |= 1 << (v18 & 7); /*0x996518*/
                ++v18; /*0x99651a*/
                --v19; /*0x99651b*/
              }
              while ( v19 ); /*0x99651c*/
            }
            v15 = 0; /*0x996521*/
          }
          else
          {
            v15 = v20; /*0x996528*/
            *(_BYTE *)(a2 + (v20 >> 3) + 0x168) |= 1 << (v20 & 7); /*0x99653d*/
          }
        }
        *(_DWORD *)(a2 - 0x28) = v14; /*0x996550*/
        return _input_l_::_scanit_25535(); /*0x996556*/
      default:
        goto LABEL_44; /*0x996470*/
    }
LABEL_70:
    v21 = *(_DWORD *)(a2 - 4); /*0x996673*/
    if ( v21 == 0x2D ) /*0x996679*/
    {
      *(_BYTE *)(a2 - 0x17) = 1; /*0x99667b*/
      return _input_l_::_d_incwidth_25620(v10, a2, 0x2D); /*0x99667f*/
    }
    else if ( v21 == 0x2B ) /*0x996684*/
    {
      return _input_l_::_d_incwidth_25620(v10, a2, 0x2B); /*0x996685*/
    }
    else
    {
      return _input_l_::_getnum_25615(v21, a2); /*0x996684*/
    }
  }
  switch ( v7 ) /*0x996045*/
  {
    case 'o': /*0x996045*/
      goto LABEL_70; /*0x996045*/
    case 'c': /*0x996045*/
      if ( !v10 ) /*0x99633c*/
      {
        ++*(_DWORD *)(a2 - 0xC); /*0x99633e*/
        *(_DWORD *)(a2 - 0x2C) = 1; /*0x996341*/
      }
      goto LABEL_36; /*0x996341*/
    case 'd': /*0x996045*/
      goto LABEL_70; /*0x996059*/
  }
  if ( v7 <= 0x64 ) /*0x99605f*/
    goto LABEL_44; /*0x99605f*/
  if ( v7 <= 0x67 ) /*0x996068*/
  {
    if ( *(_DWORD *)(a2 - 4) == 0x2D ) /*0x9960a8*/
    {
      **(_BYTE **)(a2 - 0x24) = 0x2D; /*0x9960ad*/
      return _input_l_::_f_incwidth_25695(v10, 1, a2); /*0x9960b1*/
    }
    else
    {
      if ( *(_DWORD *)(a2 - 4) != 0x2B ) /*0x9960b7*/
        JUMPOUT(0x9960CA); /*0x9960ca*/
      return _input_l_::_f_incwidth_25695(v10, 0, a2); /*0x9960b8*/
    }
  }
  if ( v7 == 0x69 ) /*0x99606d*/
  {
    *(_DWORD *)(a2 - 0x20) = 0x64; /*0x99608a*/
    goto LABEL_28; /*0x99608a*/
  }
  if ( v7 != 0x6E ) /*0x996072*/
  {
LABEL_44:
    if ( *a3 == *(_DWORD *)(a2 - 4) ) /*0x996478*/
    {
      --*(_BYTE *)(a2 - 0x15); /*0x99647e*/
      if ( !*(_BYTE *)(a2 - 0xD) ) /*0x996481*/
        *(_DWORD *)(a2 - 0x58) = *(_DWORD *)(a2 - 0x70); /*0x99648e*/
LABEL_78:
      JUMPOUT(0x99688D); /*0x99688d*/
    }
    goto LABEL_83; /*0x996478*/
  }
  if ( *(_BYTE *)(a2 - 0xD) ) /*0x996078*/
    goto LABEL_78; /*0x99607f*/
  return _input_l_::_assign_num_25677(a2, *(_DWORD *)(a2 + 4), a4);
}
