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
  int v11; // ecx
  int v12; // eax
  _BYTE *v13; // esi
  bool v14; // zf
  int v15; // eax
  int v16; // ebx
  FILE *v17; // edi
  int v18; // eax
  unsigned __int16 *v19; // esi
  int v20; // eax
  rsize_t v22; // [esp-290h] [ebp-290h]
  wchar_t v23; // [esp-288h] [ebp-288h]
  unsigned __int64 v24; // [esp-10h] [ebp-10h]
  unsigned __int64 v25; // [esp-8h] [ebp-8h]

  v3 = *(_DWORD *)(a1 - 0x18); /*0x998268*/
  if ( (__int16)v3 < 0 || (v3 & 0x1000) != 0 ) /*0x9983ba*/
  {
    v4 = a3 + a2; /*0x998274*/
    v5 = *(_QWORD *)(v4 - 8); /*0x998276*/
LABEL_12:
    *(_DWORD *)(a1 - 0x2C) = v4; /*0x9983ea*/
    goto LABEL_13; /*0x9983ea*/
  }
  v4 = a2 + 4; /*0x9983c0*/
  if ( (v3 & 0x20) == 0 ) /*0x9983c6*/
  {
    LODWORD(v5) = *(_DWORD *)(v4 - 4); /*0x9983e0*/
    if ( (v3 & 0x40) != 0 ) /*0x9983e3*/
      v5 = (int)v5; /*0x9983e5*/
    else
      HIDWORD(v5) = 0; /*0x9983e8*/
    goto LABEL_12; /*0x9983e6*/
  }
  *(_DWORD *)(a1 - 0x2C) = v4; /*0x9983cb*/
  if ( (v3 & 0x40) != 0 ) /*0x9983ce*/
    LODWORD(v5) = *(__int16 *)(v4 - 4); /*0x9983d0*/
  else
    LODWORD(v5) = *(unsigned __int16 *)(v4 - 4); /*0x9983d6*/
  v5 = (int)v5; /*0x9983da*/
LABEL_13:
  if ( (v3 & 0x40) != 0 && v5 < 0 ) /*0x9983f4*/
  {
    v5 = -v5; /*0x998401*/
    *(_DWORD *)(a1 - 0x18) |= 0x100u; /*0x998403*/
  }
  v6 = HIDWORD(v5); /*0x998410*/
  v7 = v5; /*0x998412*/
  if ( (*(_WORD *)(a1 - 0x18) & 0x9000) == 0 ) /*0x998414*/
    v6 = 0; /*0x998416*/
  if ( *(int *)(a1 - 0x20) >= 0 ) /*0x99841c*/
  {
    *(_DWORD *)(a1 - 0x18) &= ~8u; /*0x998427*/
    if ( *(int *)(a1 - 0x20) > 0x200 ) /*0x998433*/
      *(_DWORD *)(a1 - 0x20) = 0x200; /*0x998435*/
  }
  else
  {
    *(_DWORD *)(a1 - 0x20) = 1; /*0x99841e*/
  }
  if ( !(v6 | (unsigned int)v5) ) /*0x99843a*/
    *(_DWORD *)(a1 - 0x3C) = 0; /*0x99843e*/
  for ( i = (_BYTE *)(a1 + 0x1EB); ; --i ) /*0x998442*/
  {
    v9 = *(_DWORD *)(a1 - 0x20); /*0x998448*/
    *(_DWORD *)(a1 - 0x20) = v9 - 1; /*0x99844b*/
    if ( v9 <= 0 && !(v6 | v7) ) /*0x998454*/
      break; /*0x998454*/
    v25 = *(int *)(a1 - 0x28); /*0x99845d*/
    v24 = __PAIR64__(v6, v7); /*0x99845f*/
    v10 = __PAIR64__(v6, v7) % v25; /*0x998460*/
    v11 = v10 + 0x30; /*0x998465*/
    *(_DWORD *)(a1 - 0x6C) = HIDWORD(v10); /*0x99846b*/
    v6 = (v24 / v25) >> 0x20; /*0x998470*/
    v7 = v24 / v25; /*0x998470*/
    if ( v11 > 0x39 ) /*0x998472*/
      v11 += *(_DWORD *)(a1 - 0x64); /*0x998474*/
    *i = v11; /*0x998477*/
  }
  v12 = a1 + 0x1EB - (_DWORD)i; /*0x998482*/
  v13 = i + 1; /*0x998484*/
  v14 = (*(_WORD *)(a1 - 0x18) & 0x200) == 0; /*0x998485*/
  *(_DWORD *)(a1 - 0x28) = v12; /*0x99848b*/
  *(_DWORD *)(a1 - 0x24) = v13; /*0x99848e*/
  if ( !v14 && (!v12 || *v13 != 0x30) ) /*0x99849c*/
  {
    *(_BYTE *)--*(_DWORD *)(a1 - 0x24) = 0x30; /*0x9984a4*/
    *(_DWORD *)(a1 - 0x28) = v12 + 1; /*0x9984dd*/
  }
  if ( *(_DWORD *)(a1 - 0x68) ) /*0x9984e0*/
    goto LABEL_60; /*0x9984e4*/
  v15 = *(_DWORD *)(a1 - 0x18); /*0x9984ea*/
  if ( (v15 & 0x40) != 0 ) /*0x9984ef*/
  {
    if ( (v15 & 0x100) != 0 ) /*0x9984f5*/
    {
      *(_BYTE *)(a1 - 0x38) = 0x2D; /*0x9984f7*/
LABEL_42:
      *(_DWORD *)(a1 - 0x3C) = 1; /*0x99850f*/
      goto LABEL_43; /*0x99850f*/
    }
    if ( (v15 & 1) != 0 ) /*0x9984ff*/
    {
      *(_BYTE *)(a1 - 0x38) = 0x2B; /*0x998501*/
      goto LABEL_42; /*0x998505*/
    }
    if ( (v15 & 2) != 0 ) /*0x998509*/
    {
      *(_BYTE *)(a1 - 0x38) = 0x20; /*0x99850b*/
      goto LABEL_42; /*0x99850b*/
    }
  }
LABEL_43:
  v16 = *(_DWORD *)(a1 - 0x40) - *(_DWORD *)(a1 - 0x28) - *(_DWORD *)(a1 - 0x3C); /*0x998516*/
  if ( (*(_BYTE *)(a1 - 0x18) & 0xC) == 0 ) /*0x998523*/
    write_multi_char((_DWORD *)(a1 - 0x34), 0x20, v16, *(FILE **)(a1 - 0x30)); /*0x99852e*/
  v17 = *(FILE **)(a1 - 0x30); /*0x998539*/
  write_string((int *)(a1 - 0x34), (_BYTE *)(a1 - 0x38), (int)v17, *(_DWORD *)(a1 - 0x3C)); /*0x998542*/
  if ( (*(_BYTE *)(a1 - 0x18) & 8) != 0 && (*(_BYTE *)(a1 - 0x18) & 4) == 0 ) /*0x998552*/
    write_multi_char((_DWORD *)(a1 - 0x34), 0x30, v16, v17); /*0x99855b*/
  v18 = *(_DWORD *)(a1 - 0x28); /*0x998567*/
  if ( *(_DWORD *)(a1 - 0x44) && v18 > 0 ) /*0x99856e*/
  {
    v19 = *(unsigned __int16 **)(a1 - 0x24); /*0x998570*/
    *(_DWORD *)(a1 - 0x6C) = v18; /*0x998573*/
    while ( 1 ) /*0x998576*/
    {
      v20 = *v19; /*0x998576*/
      --*(_DWORD *)(a1 - 0x6C); /*0x998579*/
      HIDWORD(v22) = v20; /*0x99857c*/
      LODWORD(v22) = 6; /*0x99857d*/
      ++v19; /*0x99858b*/
      if ( wctomb_s((int *)(a1 - 0x78), (char *)(a1 + 0x1EC), v22, v23) || !*(_DWORD *)(a1 - 0x78) ) /*0x998598*/
        break; /*0x998598*/
      write_string((int *)(a1 - 0x34), (_BYTE *)(a1 + 0x1EC), (int)v17, *(_DWORD *)(a1 - 0x78)); /*0x9985a9*/
      if ( !*(_DWORD *)(a1 - 0x6C) ) /*0x9985ae*/
        goto LABEL_57; /*0x9985b3*/
    }
    *(_DWORD *)(a1 - 0x34) = 0xFFFFFFFF; /*0x9985b7*/
  }
  else
  {
    write_string((int *)(a1 - 0x34), *(_BYTE **)(a1 - 0x24), (int)v17, *(_DWORD *)(a1 - 0x28)); /*0x9985c4*/
  }
LABEL_57:
  if ( *(int *)(a1 - 0x34) >= 0 && (*(_BYTE *)(a1 - 0x18) & 4) != 0 ) /*0x9985d4*/
    write_multi_char((_DWORD *)(a1 - 0x34), 0x20, v16, v17); /*0x9985dd*/
LABEL_60:
  if ( *(_DWORD *)(a1 - 0x60) ) /*0x9985e5*/
  {
    free(*(void **)(a1 - 0x60)); /*0x9985ee*/
    *(_DWORD *)(a1 - 0x60) = 0; /*0x9985f3*/
  }
  return _output_s_l_::def_997E7D(a1);
}
