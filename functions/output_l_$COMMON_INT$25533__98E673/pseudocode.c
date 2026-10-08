int __usercall _output_l_::_COMMON_INT_25533@<eax>(int a1@<ebp>, __int64 *a2@<edi>, unsigned int a3@<esi>)
{
  int v3; // ecx
  __int64 v4; // rax
  __int64 *v5; // edi
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

  v3 = *(_DWORD *)(a1 - 0x18); /*0x98e673*/
  if ( (__int16)v3 < 0 || (v3 & 0x1000) != 0 ) /*0x98e7c7*/
  {
    v4 = *a2; /*0x98e67f*/
    v5 = a2 + 1; /*0x98e684*/
LABEL_12:
    *(_DWORD *)(a1 - 0x2C) = v5; /*0x98e7f7*/
    goto LABEL_13; /*0x98e7f7*/
  }
  v5 = (__int64 *)((char *)a2 + 4); /*0x98e7cd*/
  if ( (v3 & 0x20) == 0 ) /*0x98e7d3*/
  {
    LODWORD(v4) = *((_DWORD *)v5 + 0xFFFFFFFF); /*0x98e7ed*/
    if ( (v3 & 0x40) != 0 ) /*0x98e7f0*/
      v4 = (int)v4; /*0x98e7f2*/
    else
      HIDWORD(v4) = 0; /*0x98e7f5*/
    goto LABEL_12; /*0x98e7f3*/
  }
  *(_DWORD *)(a1 - 0x2C) = v5; /*0x98e7d8*/
  if ( (v3 & 0x40) != 0 ) /*0x98e7db*/
    LODWORD(v4) = *((__int16 *)v5 + 0xFFFFFFFE); /*0x98e7dd*/
  else
    LODWORD(v4) = *((unsigned __int16 *)v5 + 0xFFFFFFFE); /*0x98e7e3*/
  v4 = (int)v4; /*0x98e7e7*/
LABEL_13:
  if ( (v3 & 0x40) != 0 && v4 < __SPAIR64__(a3, a3) ) /*0x98e807*/
  {
    v4 = -v4; /*0x98e80e*/
    *(_DWORD *)(a1 - 0x18) |= 0x100u; /*0x98e810*/
  }
  v6 = HIDWORD(v4); /*0x98e81d*/
  v7 = v4; /*0x98e81f*/
  if ( (*(_WORD *)(a1 - 0x18) & 0x9000) == 0 ) /*0x98e821*/
    v6 = 0; /*0x98e823*/
  if ( *(int *)(a1 - 0x20) >= 0 ) /*0x98e829*/
  {
    *(_DWORD *)(a1 - 0x18) &= ~8u; /*0x98e834*/
    if ( *(int *)(a1 - 0x20) > 0x200 ) /*0x98e840*/
      *(_DWORD *)(a1 - 0x20) = 0x200; /*0x98e842*/
  }
  else
  {
    *(_DWORD *)(a1 - 0x20) = 1; /*0x98e82b*/
  }
  if ( !(v6 | (unsigned int)v4) ) /*0x98e847*/
    *(_DWORD *)(a1 - 0x3C) = 0; /*0x98e84b*/
  for ( i = (_BYTE *)(a1 + 0x1EB); ; --i ) /*0x98e84f*/
  {
    v9 = *(_DWORD *)(a1 - 0x20); /*0x98e855*/
    *(_DWORD *)(a1 - 0x20) = v9 - 1; /*0x98e858*/
    if ( v9 <= 0 && !(v6 | v7) ) /*0x98e861*/
      break; /*0x98e861*/
    v25 = *(int *)(a1 - 0x28); /*0x98e86a*/
    v24 = __PAIR64__(v6, v7); /*0x98e86c*/
    v10 = __PAIR64__(v6, v7) % v25; /*0x98e86d*/
    v11 = v10 + 0x30; /*0x98e872*/
    *(_DWORD *)(a1 - 0x68) = HIDWORD(v10); /*0x98e878*/
    v6 = (v24 / v25) >> 0x20; /*0x98e87d*/
    v7 = v24 / v25; /*0x98e87d*/
    if ( v11 > 0x39 ) /*0x98e87f*/
      v11 += *(_DWORD *)(a1 - 0x4C); /*0x98e881*/
    *i = v11; /*0x98e884*/
  }
  v12 = a1 + 0x1EB - (_DWORD)i; /*0x98e88f*/
  v13 = i + 1; /*0x98e891*/
  v14 = (*(_WORD *)(a1 - 0x18) & 0x200) == 0; /*0x98e892*/
  *(_DWORD *)(a1 - 0x28) = v12; /*0x98e898*/
  *(_DWORD *)(a1 - 0x24) = v13; /*0x98e89b*/
  if ( !v14 && (!v12 || *v13 != 0x30) ) /*0x98e8a9*/
  {
    *(_BYTE *)--*(_DWORD *)(a1 - 0x24) = 0x30; /*0x98e8b1*/
    *(_DWORD *)(a1 - 0x28) = v12 + 1; /*0x98e8e9*/
  }
  if ( *(_DWORD *)(a1 - 0x50) ) /*0x98e8ec*/
    goto LABEL_60; /*0x98e8f0*/
  v15 = *(_DWORD *)(a1 - 0x18); /*0x98e8f6*/
  if ( (v15 & 0x40) != 0 ) /*0x98e8fb*/
  {
    if ( (v15 & 0x100) != 0 ) /*0x98e901*/
    {
      *(_BYTE *)(a1 - 0x38) = 0x2D; /*0x98e903*/
LABEL_42:
      *(_DWORD *)(a1 - 0x3C) = 1; /*0x98e91b*/
      goto LABEL_43; /*0x98e91b*/
    }
    if ( (v15 & 1) != 0 ) /*0x98e90b*/
    {
      *(_BYTE *)(a1 - 0x38) = 0x2B; /*0x98e90d*/
      goto LABEL_42; /*0x98e911*/
    }
    if ( (v15 & 2) != 0 ) /*0x98e915*/
    {
      *(_BYTE *)(a1 - 0x38) = 0x20; /*0x98e917*/
      goto LABEL_42; /*0x98e917*/
    }
  }
LABEL_43:
  v16 = *(_DWORD *)(a1 - 0x40) - *(_DWORD *)(a1 - 0x28) - *(_DWORD *)(a1 - 0x3C); /*0x98e922*/
  if ( (*(_BYTE *)(a1 - 0x18) & 0xC) == 0 ) /*0x98e92f*/
    write_multi_char((_DWORD *)(a1 - 0x34), 0x20, v16, *(FILE **)(a1 - 0x30)); /*0x98e93a*/
  v17 = *(FILE **)(a1 - 0x30); /*0x98e945*/
  write_string((int *)(a1 - 0x34), (_BYTE *)(a1 - 0x38), (int)v17, *(_DWORD *)(a1 - 0x3C)); /*0x98e94e*/
  if ( (*(_BYTE *)(a1 - 0x18) & 8) != 0 && (*(_BYTE *)(a1 - 0x18) & 4) == 0 ) /*0x98e95e*/
    write_multi_char((_DWORD *)(a1 - 0x34), 0x30, v16, v17); /*0x98e967*/
  v18 = *(_DWORD *)(a1 - 0x28); /*0x98e973*/
  if ( *(_DWORD *)(a1 - 0x44) && v18 > 0 ) /*0x98e97a*/
  {
    v19 = *(unsigned __int16 **)(a1 - 0x24); /*0x98e97c*/
    *(_DWORD *)(a1 - 0x68) = v18; /*0x98e97f*/
    while ( 1 ) /*0x98e982*/
    {
      v20 = *v19; /*0x98e982*/
      --*(_DWORD *)(a1 - 0x68); /*0x98e985*/
      HIDWORD(v22) = v20; /*0x98e988*/
      LODWORD(v22) = 6; /*0x98e989*/
      ++v19; /*0x98e997*/
      if ( wctomb_s((int *)(a1 - 0x70), (char *)(a1 + 0x1EC), v22, v23) || !*(_DWORD *)(a1 - 0x70) ) /*0x98e9a4*/
        break; /*0x98e9a4*/
      write_string((int *)(a1 - 0x34), (_BYTE *)(a1 + 0x1EC), (int)v17, *(_DWORD *)(a1 - 0x70)); /*0x98e9b5*/
      if ( !*(_DWORD *)(a1 - 0x68) ) /*0x98e9ba*/
        goto LABEL_57; /*0x98e9bf*/
    }
    *(_DWORD *)(a1 - 0x34) = 0xFFFFFFFF; /*0x98e9c3*/
  }
  else
  {
    write_string((int *)(a1 - 0x34), *(_BYTE **)(a1 - 0x24), (int)v17, *(_DWORD *)(a1 - 0x28)); /*0x98e9d0*/
  }
LABEL_57:
  if ( *(int *)(a1 - 0x34) >= 0 && (*(_BYTE *)(a1 - 0x18) & 4) != 0 ) /*0x98e9e0*/
    write_multi_char((_DWORD *)(a1 - 0x34), 0x20, v16, v17); /*0x98e9e9*/
LABEL_60:
  if ( *(_DWORD *)(a1 - 0x54) ) /*0x98e9f1*/
  {
    free(*(void **)(a1 - 0x54)); /*0x98e9fa*/
    *(_DWORD *)(a1 - 0x54) = 0; /*0x98e9ff*/
  }
  return _output_l_::def_98E289(a1);
}
