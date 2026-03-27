int __usercall _input_l_::_f_incwidth_25695@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>)
{
  FILE *v3; // edx
  int i; // eax
  int v5; // eax
  char v6; // al
  int v7; // ecx
  int v8; // ecx
  FILE *v9; // edx
  char v10; // al
  bool v11; // zf
  int v12; // eax
  FILE *v13; // edx
  int v14; // eax
  int v15; // ecx
  int j; // eax
  int v17; // eax
  int v18; // eax
  char v19; // cl
  int v20; // ecx
  FILE *v21; // edx
  int v22; // eax
  int v23; // ebx
  int v24; // ecx
  FILE *v25; // edx
  int v26; // eax
  int v28; // [esp-4h] [ebp-4h]

  --*(_DWORD *)(a3 - 0xC);
  v3 = *(FILE **)(a3 - 0x14);
  ++*(_DWORD *)(a3 + 4);
  *(_DWORD *)(a3 - 4) = _inc(a1, v3);
  if ( !*(_DWORD *)(a3 - 0x2C) )
    *(_DWORD *)(a3 - 0xC) = 0xFFFFFFFF;
  for ( i = *(unsigned __int8 *)(a3 - 4); isdigit(i); i = (unsigned __int8)i )
  {
    v5 = *(_DWORD *)(a3 - 0xC);
    *(_DWORD *)(a3 - 0xC) = v5 - 1;
    if ( !v5 )
      break;
    v6 = *(_BYTE *)(a3 - 4);
    v7 = *(_DWORD *)(a3 - 0x24);
    ++*(_DWORD *)(a3 - 0x1C);
    *(_BYTE *)(a2 + v7) = v6;
    if ( !__check_float_string(++a2, (void *)(a3 + 8), a3 - 0x44) )
      return _input_l_::_error_return_25524();
    v9 = *(FILE **)(a3 - 0x14);
    ++*(_DWORD *)(a3 + 4);
    i = _inc(v8, v9);
    *(_DWORD *)(a3 - 4) = i;
  }
  v10 = ***(_BYTE ***)(*(_DWORD *)(a3 - 0x6C) + 0xBC);
  v11 = v10 == *(_BYTE *)(a3 - 4);
  *(_BYTE *)(a3 - 0x18) = v10;
  if ( v11 )
  {
    v12 = *(_DWORD *)(a3 - 0xC);
    *(_DWORD *)(a3 - 0xC) = v12 - 1;
    if ( v12 )
    {
      v13 = *(FILE **)(a3 - 0x14);
      ++*(_DWORD *)(a3 + 4);
      v14 = _inc(v28, v13);
      v15 = *(_DWORD *)(a3 - 0x24);
      *(_DWORD *)(a3 - 4) = v14;
      *(_BYTE *)(a2 + v15) = *(_BYTE *)(a3 - 0x18);
      if ( !__check_float_string(++a2, (void *)(a3 + 8), a3 - 0x44) )
        return _input_l_::_error_return_25524();
      for ( j = *(unsigned __int8 *)(a3 - 4); isdigit(j); j = (unsigned __int8)j )
      {
        v17 = *(_DWORD *)(a3 - 0xC);
        *(_DWORD *)(a3 - 0xC) = v17 - 1;
        if ( !v17 )
          break;
        v18 = *(_DWORD *)(a3 - 0x24);
        v19 = *(_BYTE *)(a3 - 4);
        ++*(_DWORD *)(a3 - 0x1C);
        *(_BYTE *)(a2 + v18) = v19;
        if ( !__check_float_string(++a2, (void *)(a3 + 8), a3 - 0x44) )
          return _input_l_::_error_return_25524();
        v21 = *(FILE **)(a3 - 0x14);
        ++*(_DWORD *)(a3 + 4);
        j = _inc(v20, v21);
        *(_DWORD *)(a3 - 4) = j;
      }
    }
  }
  if ( !*(_DWORD *)(a3 - 0x1C)
    || *(_DWORD *)(a3 - 4) != 0x65 && *(_DWORD *)(a3 - 4) != 0x45
    || (v22 = *(_DWORD *)(a3 - 0xC), *(_DWORD *)(a3 - 0xC) = v22 - 1, !v22) )
  {
    JUMPOUT(0x9962E2);
  }
  *(_BYTE *)(a2 + *(_DWORD *)(a3 - 0x24)) = 0x65;
  v23 = a2 + 1;
  if ( __check_float_string(v23, (void *)(a3 + 8), a3 - 0x44) )
  {
    v25 = *(FILE **)(a3 - 0x14);
    ++*(_DWORD *)(a3 + 4);
    v26 = _inc(v24, v25);
    *(_DWORD *)(a3 - 4) = v26;
    if ( v26 != 0x2D )
    {
      if ( *(_DWORD *)(a3 - 4) != 0x2B )
        JUMPOUT(0x99628A);
      return _input_l_::_f_incwidth2_25725();
    }
    *(_BYTE *)(v23 + *(_DWORD *)(a3 - 0x24)) = 0x2D;
    if ( __check_float_string(v23 + 1, (void *)(a3 + 8), a3 - 0x44) )
      return _input_l_::_f_incwidth2_25725();
  }
  return _input_l_::_error_return_25524();
}
