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
  int v27; // ecx
  int v29; // [esp-4h] [ebp-4h]

  --*(_DWORD *)(a3 - 0xC); /*0x9960b9*/
  v3 = *(FILE **)(a3 - 0x14); /*0x9960bc*/
  ++*(_DWORD *)(a3 + 4); /*0x9960bf*/
  *(_DWORD *)(a3 - 4) = _inc(a1, v3); /*0x9960c7*/
  if ( !*(_DWORD *)(a3 - 0x2C) ) /*0x9960ca*/
    *(_DWORD *)(a3 - 0xC) = 0xFFFFFFFF; /*0x9960d0*/
  for ( i = *(unsigned __int8 *)(a3 - 4); isdigit(i); i = (unsigned __int8)i ) /*0x9960d4*/
  {
    v5 = *(_DWORD *)(a3 - 0xC); /*0x9960da*/
    *(_DWORD *)(a3 - 0xC) = v5 - 1; /*0x9960dd*/
    if ( !v5 ) /*0x9960e2*/
      break; /*0x9960e2*/
    v6 = *(_BYTE *)(a3 - 4); /*0x9960e4*/
    v7 = *(_DWORD *)(a3 - 0x24); /*0x9960e7*/
    ++*(_DWORD *)(a3 - 0x1C); /*0x9960ea*/
    *(_BYTE *)(a2 + v7) = v6; /*0x9960ed*/
    if ( !__check_float_string( /*0x99610a*/
            (void **)(a3 - 0x24),
            (unsigned int *)(a3 - 0x4C),
            ++a2,
            (void *)(a3 + 8),
            (_DWORD *)(a3 - 0x44)) )
      return _input_l_::_error_return_25524(a3); /*0x99610a*/
    v9 = *(FILE **)(a3 - 0x14); /*0x996110*/
    ++*(_DWORD *)(a3 + 4); /*0x996113*/
    i = _inc(v8, v9); /*0x996116*/
    *(_DWORD *)(a3 - 4) = i; /*0x99611b*/
  }
  v10 = ***(_BYTE ***)(*(_DWORD *)(a3 - 0x6C) + 0xBC); /*0x996137*/
  v11 = v10 == *(_BYTE *)(a3 - 4); /*0x996139*/
  *(_BYTE *)(a3 - 0x18) = v10; /*0x99613c*/
  if ( v11 ) /*0x99613f*/
  {
    v12 = *(_DWORD *)(a3 - 0xC); /*0x996145*/
    *(_DWORD *)(a3 - 0xC) = v12 - 1; /*0x996148*/
    if ( v12 ) /*0x99614d*/
    {
      v13 = *(FILE **)(a3 - 0x14); /*0x996153*/
      ++*(_DWORD *)(a3 + 4); /*0x996156*/
      v14 = _inc(v29, v13); /*0x996159*/
      v15 = *(_DWORD *)(a3 - 0x24); /*0x99615e*/
      *(_DWORD *)(a3 - 4) = v14; /*0x996161*/
      *(_BYTE *)(a2 + v15) = *(_BYTE *)(a3 - 0x18); /*0x996167*/
      if ( !__check_float_string( /*0x996184*/
              (void **)(a3 - 0x24),
              (unsigned int *)(a3 - 0x4C),
              ++a2,
              (void *)(a3 + 8),
              (_DWORD *)(a3 - 0x44)) )
        return _input_l_::_error_return_25524(a3); /*0x996184*/
      for ( j = *(unsigned __int8 *)(a3 - 4); isdigit(j); j = (unsigned __int8)j ) /*0x99618a*/
      {
        v17 = *(_DWORD *)(a3 - 0xC); /*0x996190*/
        *(_DWORD *)(a3 - 0xC) = v17 - 1; /*0x996193*/
        if ( !v17 ) /*0x996198*/
          break; /*0x996198*/
        v18 = *(_DWORD *)(a3 - 0x24); /*0x99619a*/
        v19 = *(_BYTE *)(a3 - 4); /*0x99619d*/
        ++*(_DWORD *)(a3 - 0x1C); /*0x9961a0*/
        *(_BYTE *)(a2 + v18) = v19; /*0x9961a3*/
        if ( !__check_float_string( /*0x9961c0*/
                (void **)(a3 - 0x24),
                (unsigned int *)(a3 - 0x4C),
                ++a2,
                (void *)(a3 + 8),
                (_DWORD *)(a3 - 0x44)) )
          return _input_l_::_error_return_25524(a3); /*0x9961c0*/
        v21 = *(FILE **)(a3 - 0x14); /*0x9961c6*/
        ++*(_DWORD *)(a3 + 4); /*0x9961c9*/
        j = _inc(v20, v21); /*0x9961cc*/
        *(_DWORD *)(a3 - 4) = j; /*0x9961d1*/
      }
    }
  }
  if ( !*(_DWORD *)(a3 - 0x1C) /*0x996204*/
    || *(_DWORD *)(a3 - 4) != 0x65 && *(_DWORD *)(a3 - 4) != 0x45
    || (v22 = *(_DWORD *)(a3 - 0xC), *(_DWORD *)(a3 - 0xC) = v22 - 1, !v22) )
  {
    JUMPOUT(0x9962E2); /*0x9962e2*/
  }
  *(_BYTE *)(a2 + *(_DWORD *)(a3 - 0x24)) = 0x65; /*0x99620d*/
  v23 = a2 + 1; /*0x996219*/
  if ( __check_float_string( /*0x996221*/
         (void **)(a3 - 0x24),
         (unsigned int *)(a3 - 0x4C),
         v23,
         (void *)(a3 + 8),
         (_DWORD *)(a3 - 0x44)) )
  {
    v25 = *(FILE **)(a3 - 0x14); /*0x996231*/
    ++*(_DWORD *)(a3 + 4); /*0x996234*/
    v26 = _inc(v24, v25); /*0x996237*/
    *(_DWORD *)(a3 - 4) = v26; /*0x99623f*/
    if ( v26 != 0x2D ) /*0x996242*/
    {
      if ( *(_DWORD *)(a3 - 4) != 0x2B ) /*0x99626b*/
        JUMPOUT(0x99628A); /*0x99628a*/
      return _input_l_::_f_incwidth2_25725(v27, v23, a3); /*0x99626b*/
    }
    *(_BYTE *)(v23 + *(_DWORD *)(a3 - 0x24)) = 0x2D; /*0x996247*/
    if ( __check_float_string( /*0x996255*/
           (void **)(a3 - 0x24),
           (unsigned int *)(a3 - 0x4C),
           ++v23,
           (void *)(a3 + 8),
           (_DWORD *)(a3 - 0x44)) )
    {
      return _input_l_::_f_incwidth2_25725(v27, v23, a3); /*0x996265*/
    }
  }
  return _input_l_::_error_return_25524(a3);
}
