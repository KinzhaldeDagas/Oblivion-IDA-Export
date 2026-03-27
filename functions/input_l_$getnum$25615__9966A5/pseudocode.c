int __usercall _input_l_::_getnum_25615@<eax>(signed int a1@<ebx>, int a2@<ebp>)
{
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  int v5; // eax
  bool v6; // zf
  FILE *v7; // edx
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  FILE *v14; // edx
  int v16; // [esp-4h] [ebp-4h]
  int v17; // [esp-4h] [ebp-4h]
  int v18; // [esp-4h] [ebp-4h]
  int v19; // [esp-4h] [ebp-4h]

  if ( !*(_DWORD *)(a2 - 0x48) )
  {
    v9 = *(_DWORD *)(a2 - 0x54);
    if ( *(_BYTE *)(a2 + 3) )
      goto LABEL_38;
    while ( 1 )
    {
      if ( *(_DWORD *)(a2 - 0x20) == 0x78 || *(_DWORD *)(a2 - 0x20) == 0x70 )
      {
        if ( !isxdigit((unsigned __int8)a1) )
        {
LABEL_36:
          --*(_DWORD *)(a2 + 4);
          if ( a1 != 0xFFFFFFFF )
            _ungetc_nolock(a1, *(FILE **)(a2 - 0x14));
          goto LABEL_38;
        }
        v12 = 0x10 * v9;
        v13 = isdigit((unsigned __int8)a1);
        v11 = v19;
        a1 = (char)a1;
        if ( !v13 )
          a1 = ((char)a1 & 0xFFFFFFDF) - 7;
        *(_DWORD *)(a2 - 4) = a1;
      }
      else
      {
        v10 = isdigit((unsigned __int8)a1);
        v11 = v18;
        if ( !v10 )
          goto LABEL_36;
        if ( *(_DWORD *)(a2 - 0x20) == 0x6F )
        {
          if ( a1 >= 0x38 )
            goto LABEL_36;
          v12 = 8 * v9;
        }
        else
        {
          v12 = 0xA * v9;
        }
      }
      ++*(_DWORD *)(a2 - 0x1C);
      v9 = v12 + a1 - 0x30;
      if ( *(_DWORD *)(a2 - 0x2C) )
      {
        v6 = (*(_DWORD *)(a2 - 0xC))-- == 1;
        if ( v6 )
          goto LABEL_38;
      }
      v14 = *(FILE **)(a2 - 0x14);
      ++*(_DWORD *)(a2 + 4);
      a1 = _inc(v11, v14);
      *(_DWORD *)(a2 - 4) = a1;
    }
  }
  if ( *(_BYTE *)(a2 + 3) )
    goto LABEL_19;
  while ( *(_DWORD *)(a2 - 0x20) != 0x78 && *(_DWORD *)(a2 - 0x20) != 0x70 )
  {
    v2 = isdigit((unsigned __int8)a1);
    v3 = v16;
    if ( !v2 )
      goto LABEL_17;
    if ( *(_DWORD *)(a2 - 0x20) == 0x6F )
    {
      if ( a1 >= 0x38 )
        goto LABEL_17;
      v4 = 8 * *(_DWORD *)(a2 - 0x34);
      *(_DWORD *)(a2 - 0x30) = *(_QWORD *)(a2 - 0x34) >> 0x1D;
    }
    else
    {
      v4 = 0xA * *(_DWORD *)(a2 - 0x34);
      *(_DWORD *)(a2 - 0x30) = (unsigned __int64)(0xALL * *(_QWORD *)(a2 - 0x34)) >> 0x20;
    }
LABEL_14:
    ++*(_DWORD *)(a2 - 0x1C);
    *(_DWORD *)(a2 - 0x30) = (a1 - 0x30 + __PAIR64__(*(_DWORD *)(a2 - 0x30), v4)) >> 0x20;
    v6 = *(_DWORD *)(a2 - 0x2C) == 0;
    *(_DWORD *)(a2 - 0x34) = a1 - 0x30 + v4;
    if ( !v6 )
    {
      v6 = (*(_DWORD *)(a2 - 0xC))-- == 1;
      if ( v6 )
        goto LABEL_19;
    }
    v7 = *(FILE **)(a2 - 0x14);
    ++*(_DWORD *)(a2 + 4);
    a1 = _inc(v3, v7);
    *(_DWORD *)(a2 - 4) = a1;
  }
  if ( isxdigit((unsigned __int8)a1) )
  {
    v4 = 0x10 * *(_DWORD *)(a2 - 0x34);
    *(_DWORD *)(a2 - 0x30) = *(_QWORD *)(a2 - 0x34) >> 0x1C;
    v5 = isdigit((unsigned __int8)a1);
    v3 = v17;
    a1 = (char)a1;
    if ( !v5 )
      a1 = ((char)a1 & 0xFFFFFFDF) - 7;
    *(_DWORD *)(a2 - 4) = a1;
    goto LABEL_14;
  }
LABEL_17:
  --*(_DWORD *)(a2 + 4);
  if ( a1 != 0xFFFFFFFF )
    _ungetc_nolock(a1, *(FILE **)(a2 - 0x14));
LABEL_19:
  if ( *(_BYTE *)(a2 - 0x17) )
  {
    v8 = -*(_QWORD *)(a2 - 0x34) >> 0x20;
    *(_DWORD *)(a2 - 0x34) = -*(_DWORD *)(a2 - 0x34);
    *(_DWORD *)(a2 - 0x30) = v8;
  }
LABEL_38:
  if ( *(_DWORD *)(a2 - 0x20) == 0x46 )
    *(_DWORD *)(a2 - 0x1C) = 0;
  if ( !*(_DWORD *)(a2 - 0x1C) )
    return _input_l_::_error_return_25524();
  if ( *(_BYTE *)(a2 - 0xD) )
    JUMPOUT(0x99688D);
  ++*(_DWORD *)(a2 - 0x3C);
  return _input_l_::_assign_num_25677();
}
