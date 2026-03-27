int __usercall _output_s_l_::_COMMON_INT_25537@<eax>(int a1@<ebp>, int a2@<edi>, int a3@<esi>)
{
  int v3; // ecx
  int v4; // edi
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int v7; // edi
  _BYTE *i; // esi
  int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // eax
  _BYTE *v12; // esi
  bool v13; // zf
  int v14; // eax
  int v15; // ebx
  FILE *v16; // edi
  int v17; // eax
  unsigned __int16 *v18; // esi
  int v19; // eax
  rsize_t v21; // [esp-290h] [ebp-290h]
  int v22; // [esp-28Ch] [ebp-28Ch]
  int v23; // [esp-28Ch] [ebp-28Ch]
  int v24; // [esp-28Ch] [ebp-28Ch]
  wchar_t v25; // [esp-288h] [ebp-288h]
  unsigned __int64 v26; // [esp-10h] [ebp-10h]
  unsigned __int64 v27; // [esp-8h] [ebp-8h]

  v3 = *(_DWORD *)(a1 - 0x18);
  if ( (__int16)v3 < 0 || (v3 & 0x1000) != 0 )
  {
    v4 = a3 + a2;
    v5 = *(_QWORD *)(v4 - 8);
LABEL_12:
    *(_DWORD *)(a1 - 0x2C) = v4;
    goto LABEL_13;
  }
  v4 = a2 + 4;
  if ( (v3 & 0x20) == 0 )
  {
    LODWORD(v5) = *(_DWORD *)(v4 - 4);
    if ( (v3 & 0x40) != 0 )
      v5 = (int)v5;
    else
      HIDWORD(v5) = 0;
    goto LABEL_12;
  }
  *(_DWORD *)(a1 - 0x2C) = v4;
  if ( (v3 & 0x40) != 0 )
    LODWORD(v5) = *(__int16 *)(v4 - 4);
  else
    LODWORD(v5) = *(unsigned __int16 *)(v4 - 4);
  v5 = (int)v5;
LABEL_13:
  if ( (v3 & 0x40) != 0 && v5 < 0 )
  {
    v5 = -v5;
    *(_DWORD *)(a1 - 0x18) |= 0x100u;
  }
  v6 = HIDWORD(v5);
  v7 = v5;
  if ( (*(_WORD *)(a1 - 0x18) & 0x9000) == 0 )
    v6 = 0;
  if ( *(int *)(a1 - 0x20) >= 0 )
  {
    *(_DWORD *)(a1 - 0x18) &= ~8u;
    if ( *(int *)(a1 - 0x20) > 0x200 )
      *(_DWORD *)(a1 - 0x20) = 0x200;
  }
  else
  {
    *(_DWORD *)(a1 - 0x20) = 1;
  }
  if ( !(v6 | (unsigned int)v5) )
    *(_DWORD *)(a1 - 0x3C) = 0;
  for ( i = (_BYTE *)(a1 + 0x1EB); ; --i )
  {
    v9 = *(_DWORD *)(a1 - 0x20);
    *(_DWORD *)(a1 - 0x20) = v9 - 1;
    if ( v9 <= 0 && !(v6 | v7) )
      break;
    v27 = *(int *)(a1 - 0x28);
    v26 = __PAIR64__(v6, v7);
    v10 = __PAIR64__(v6, v7) % v27;
    v3 = v10 + 0x30;
    *(_DWORD *)(a1 - 0x6C) = HIDWORD(v10);
    v6 = (v26 / v27) >> 0x20;
    v7 = v26 / v27;
    if ( v3 > 0x39 )
      v3 += *(_DWORD *)(a1 - 0x64);
    *i = v3;
  }
  v11 = a1 + 0x1EB - (_DWORD)i;
  v12 = i + 1;
  v13 = (*(_WORD *)(a1 - 0x18) & 0x200) == 0;
  *(_DWORD *)(a1 - 0x28) = v11;
  *(_DWORD *)(a1 - 0x24) = v12;
  if ( !v13 )
  {
    if ( !v11 || (v3 = (int)v12, *v12 != 0x30) )
    {
      v3 = --*(_DWORD *)(a1 - 0x24);
      *(_BYTE *)v3 = 0x30;
      *(_DWORD *)(a1 - 0x28) = v11 + 1;
    }
  }
  if ( *(_DWORD *)(a1 - 0x68) )
    goto LABEL_60;
  v14 = *(_DWORD *)(a1 - 0x18);
  if ( (v14 & 0x40) != 0 )
  {
    if ( (v14 & 0x100) != 0 )
    {
      *(_BYTE *)(a1 - 0x38) = 0x2D;
LABEL_42:
      *(_DWORD *)(a1 - 0x3C) = 1;
      goto LABEL_43;
    }
    if ( (v14 & 1) != 0 )
    {
      *(_BYTE *)(a1 - 0x38) = 0x2B;
      goto LABEL_42;
    }
    if ( (v14 & 2) != 0 )
    {
      *(_BYTE *)(a1 - 0x38) = 0x20;
      goto LABEL_42;
    }
  }
LABEL_43:
  v15 = *(_DWORD *)(a1 - 0x40) - *(_DWORD *)(a1 - 0x28) - *(_DWORD *)(a1 - 0x3C);
  if ( (*(_BYTE *)(a1 - 0x18) & 0xC) == 0 )
    write_multi_char((_DWORD *)(a1 - 0x34), 0x20, v15, *(FILE **)(a1 - 0x30));
  v16 = *(FILE **)(a1 - 0x30);
  write_string((int *)(a1 - 0x34), a1 - 0x38, (int)v16, *(_DWORD *)(a1 - 0x3C));
  if ( (*(_BYTE *)(a1 - 0x18) & 8) != 0 && (*(_BYTE *)(a1 - 0x18) & 4) == 0 )
    write_multi_char((_DWORD *)(a1 - 0x34), 0x30, v15, v16);
  v17 = *(_DWORD *)(a1 - 0x28);
  if ( *(_DWORD *)(a1 - 0x44) && v17 > 0 )
  {
    v18 = *(unsigned __int16 **)(a1 - 0x24);
    *(_DWORD *)(a1 - 0x6C) = v17;
    while ( 1 )
    {
      v19 = *v18;
      --*(_DWORD *)(a1 - 0x6C);
      HIDWORD(v21) = v19;
      LODWORD(v21) = 6;
      ++v18;
      if ( wctomb_s((int *)(a1 - 0x78), (char *)(a1 + 0x1EC), v21, v25) || !*(_DWORD *)(a1 - 0x78) )
        break;
      write_string((int *)(a1 - 0x34), a1 + 0x1EC, (int)v16, *(_DWORD *)(a1 - 0x78));
      v3 = v22;
      if ( !*(_DWORD *)(a1 - 0x6C) )
        goto LABEL_57;
    }
    *(_DWORD *)(a1 - 0x34) = 0xFFFFFFFF;
  }
  else
  {
    write_string((int *)(a1 - 0x34), *(_DWORD *)(a1 - 0x24), (int)v16, *(_DWORD *)(a1 - 0x28));
    v3 = v23;
  }
LABEL_57:
  if ( *(int *)(a1 - 0x34) >= 0 && (*(_BYTE *)(a1 - 0x18) & 4) != 0 )
    write_multi_char((_DWORD *)(a1 - 0x34), 0x20, v15, v16);
LABEL_60:
  if ( !*(_DWORD *)(a1 - 0x60) )
    return _output_s_l_::def_997E7D(v3);
  free(*(void **)(a1 - 0x60));
  *(_DWORD *)(a1 - 0x60) = 0;
  return _output_s_l_::def_997E7D(v24);
}
