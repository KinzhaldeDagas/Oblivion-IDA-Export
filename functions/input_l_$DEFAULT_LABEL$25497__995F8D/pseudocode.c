int __usercall _input_l_::_DEFAULT_LABEL_25497@<eax>(
        int a1@<ecx>,
        int a2@<ebp>,
        unsigned __int8 *a3@<edi>,
        int a4@<esi>)
{
  bool v4; // zf
  int *v5; // eax
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
  int v21; // ebx

  if ( !++*(_BYTE *)(a2 + 3) )
    JUMPOUT(0x995EE1);
  v4 = *(_BYTE *)(a2 - 0xD) == 0;
  *(_DWORD *)(a2 - 0x28) = a3;
  if ( v4 )
  {
    v5 = *(int **)(a2 - 0x58);
    a4 = *v5;
    *(_DWORD *)(a2 - 0x70) = v5;
    *(_DWORD *)(a2 - 0x58) = v5 + 1;
  }
  v4 = *(_BYTE *)(a2 - 5) == 0;
  *(_DWORD *)(a2 - 0x38) = a4;
  *(_BYTE *)(a2 + 3) = 0;
  if ( v4 )
  {
    v6 = *a3;
    if ( *a3 == 0x53 || (*(_BYTE *)(a2 - 5) = 0xFF, v6 == 0x43) )
      *(_BYTE *)(a2 - 5) = 1;
  }
  v7 = *a3 | 0x20;
  *(_DWORD *)(a2 - 0x20) = v7;
  if ( v7 != 0x6E )
  {
    if ( v7 == 0x63 || v7 == 0x7B )
    {
      v9 = *(FILE **)(a2 - 0x14);
      ++*(_DWORD *)(a2 + 4);
      v8 = _inc(a1, v9);
    }
    else
    {
      v8 = _whiteout(a1, (_DWORD *)(a2 + 4), *(FILE **)(a2 - 0x14));
    }
    *(_DWORD *)(a2 - 4) = v8;
    if ( v8 == 0xFFFFFFFF )
      return _input_l_::_error_return_25524();
    a3 = *(unsigned __int8 **)(a2 - 0x28);
  }
  v10 = *(_DWORD *)(a2 - 0x2C);
  if ( v10 && !*(_DWORD *)(a2 - 0xC) )
LABEL_83:
    JUMPOUT(0x996916);
  if ( v7 > 0x6F )
  {
    switch ( v7 )
    {
      case 'p':
        *(_BYTE *)(a2 - 0xE) = 1;
        break;
      case 's':
LABEL_36:
        if ( *(char *)(a2 - 5) > 0 )
          *(_BYTE *)(a2 - 0x16) = 1;
        return _input_l_::_scanit_25535();
      case 'u':
        break;
      case 'x':
LABEL_28:
        v11 = *(_DWORD *)(a2 - 4);
        if ( v11 == 0x2D )
        {
          *(_BYTE *)(a2 - 0x17) = 1;
          return _input_l_::_x_incwidth_25598();
        }
        else
        {
          if ( v11 != 0x2B )
            JUMPOUT(0x99657F);
          return _input_l_::_x_incwidth_25598();
        }
      case '{':
        if ( *(char *)(a2 - 5) > 0 )
          *(_BYTE *)(a2 - 0x16) = 1;
        v13 = a3 + 1;
        v14 = v13;
        if ( *v13 == 0x5E )
        {
          v14 = v13 + 1;
          *(_BYTE *)(a2 - 0x18) = 0xFF;
        }
        _memset(a2 + 0x168, 0, 0x20u);
        if ( *v14 == 0x5D )
        {
          v15 = 0x5D;
          ++v14;
          *(_BYTE *)(a2 + 0x173) = 0x20;
        }
        else
        {
          v15 = *(_BYTE *)(a2 - 0x3D);
        }
        while ( 1 )
        {
          v20 = *v14;
          if ( *v14 == 0x5D )
            break;
          ++v14;
          if ( v20 == 0x2D && v15 && (v16 = *v14, *v14 != 0x5D) )
          {
            ++v14;
            if ( v15 >= v16 )
            {
              v17 = v15;
              v15 = v16;
            }
            else
            {
              v17 = v16;
            }
            if ( v15 <= v17 )
            {
              v18 = v15;
              v19 = (unsigned __int8)(v17 - v15 + 1);
              do
              {
                *(_BYTE *)(a2 + (v18 >> 3) + 0x168) |= 1 << (v18 & 7);
                ++v18;
                --v19;
              }
              while ( v19 );
            }
            v15 = 0;
          }
          else
          {
            v15 = v20;
            *(_BYTE *)(a2 + (v20 >> 3) + 0x168) |= 1 << (v20 & 7);
          }
        }
        *(_DWORD *)(a2 - 0x28) = v14;
        return _input_l_::_scanit_25535();
      default:
        goto LABEL_44;
    }
LABEL_70:
    v21 = *(_DWORD *)(a2 - 4);
    if ( v21 == 0x2D )
    {
      *(_BYTE *)(a2 - 0x17) = 1;
      return _input_l_::_d_incwidth_25620();
    }
    else if ( v21 == 0x2B )
    {
      return _input_l_::_d_incwidth_25620();
    }
    else
    {
      return _input_l_::_getnum_25615();
    }
  }
  switch ( v7 )
  {
    case 'o':
      goto LABEL_70;
    case 'c':
      if ( !v10 )
      {
        ++*(_DWORD *)(a2 - 0xC);
        *(_DWORD *)(a2 - 0x2C) = 1;
      }
      goto LABEL_36;
    case 'd':
      goto LABEL_70;
  }
  if ( v7 <= 0x64 )
    goto LABEL_44;
  if ( v7 <= 0x67 )
  {
    if ( *(_DWORD *)(a2 - 4) == 0x2D )
    {
      **(_BYTE **)(a2 - 0x24) = 0x2D;
      return _input_l_::_f_incwidth_25695();
    }
    else
    {
      if ( *(_DWORD *)(a2 - 4) != 0x2B )
        JUMPOUT(0x9960CA);
      return _input_l_::_f_incwidth_25695();
    }
  }
  if ( v7 == 0x69 )
  {
    *(_DWORD *)(a2 - 0x20) = 0x64;
    goto LABEL_28;
  }
  if ( v7 != 0x6E )
  {
LABEL_44:
    if ( *a3 == *(_DWORD *)(a2 - 4) )
    {
      --*(_BYTE *)(a2 - 0x15);
      if ( !*(_BYTE *)(a2 - 0xD) )
        *(_DWORD *)(a2 - 0x58) = *(_DWORD *)(a2 - 0x70);
LABEL_78:
      JUMPOUT(0x99688D);
    }
    goto LABEL_83;
  }
  if ( *(_BYTE *)(a2 - 0xD) )
    goto LABEL_78;
  return _input_l_::_assign_num_25677();
}
