unsigned int __usercall _input_l_::_getnum_25615@<eax>(signed int a1@<ebx>, int a2@<ebp>)
{
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  int v5; // eax
  bool v6; // zf
  FILE *v7; // edx
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  FILE *v14; // edx
  int v16; // [esp-4h] [ebp-4h]
  int v17; // [esp-4h] [ebp-4h]
  int v18; // [esp-4h] [ebp-4h]
  int v19; // [esp-4h] [ebp-4h]

  if ( !*(_DWORD *)(a2 - 0x48) ) /*0x9966a9*/
  {
    v8 = *(_DWORD *)(a2 - 0x54); /*0x9967ae*/
    if ( !*(_BYTE *)(a2 + 3) ) /*0x9967aa*/
    {
      while ( 1 ) /*0x9967b7*/
      {
        if ( *(_DWORD *)(a2 - 0x20) == 0x78 || *(_DWORD *)(a2 - 0x20) == 0x70 ) /*0x9967c1*/
        {
          if ( !isxdigit((unsigned __int8)a1) ) /*0x9967f2*/
          {
LABEL_36:
            --*(_DWORD *)(a2 + 4); /*0x996832*/
            if ( a1 != 0xFFFFFFFF ) /*0x996838*/
              _ungetc_nolock(a1, *(FILE **)(a2 - 0x14)); /*0x99683e*/
            break; /*0x99683e*/
          }
          v12 = 0x10 * v8; /*0x9967f5*/
          v13 = isdigit((unsigned __int8)a1); /*0x9967f8*/
          v11 = v19; /*0x9967ff*/
          a1 = (char)a1; /*0x996800*/
          if ( !v13 ) /*0x996803*/
            a1 = ((char)a1 & 0xFFFFFFDF) - 7; /*0x996808*/
          *(_DWORD *)(a2 - 4) = a1; /*0x99680b*/
        }
        else
        {
          v10 = isdigit((unsigned __int8)a1); /*0x9967c7*/
          v11 = v18; /*0x9967ce*/
          if ( !v10 ) /*0x9967cf*/
            goto LABEL_36; /*0x9967cf*/
          if ( *(_DWORD *)(a2 - 0x20) == 0x6F ) /*0x9967d5*/
          {
            if ( a1 >= 0x38 ) /*0x9967da*/
              goto LABEL_36; /*0x9967da*/
            v12 = 8 * v8; /*0x9967dc*/
          }
          else
          {
            v12 = 0xA * v8; /*0x9967e1*/
          }
        }
        ++*(_DWORD *)(a2 - 0x1C); /*0x99680e*/
        v8 = v12 + a1 - 0x30; /*0x996815*/
        if ( *(_DWORD *)(a2 - 0x2C) ) /*0x996811*/
        {
          v6 = (*(_DWORD *)(a2 - 0xC))-- == 1; /*0x99681b*/
          if ( v6 ) /*0x99681e*/
            break; /*0x99681e*/
        }
        v14 = *(FILE **)(a2 - 0x14); /*0x996820*/
        ++*(_DWORD *)(a2 + 4); /*0x996823*/
        a1 = _inc(v11, v14); /*0x99682b*/
        *(_DWORD *)(a2 - 4) = a1; /*0x99682d*/
      }
    }
    if ( *(_BYTE *)(a2 - 0x17) ) /*0x996845*/
      v8 = -v8; /*0x99684b*/
    goto LABEL_40; /*0x99684b*/
  }
  if ( *(_BYTE *)(a2 + 3) ) /*0x9966af*/
    goto LABEL_19; /*0x9966b3*/
  while ( *(_DWORD *)(a2 - 0x20) != 0x78 && *(_DWORD *)(a2 - 0x20) != 0x70 ) /*0x9966c3*/
  {
    v2 = isdigit((unsigned __int8)a1); /*0x9966c9*/
    v3 = v16; /*0x9966d0*/
    if ( !v2 ) /*0x9966d1*/
      goto LABEL_17; /*0x9966d1*/
    if ( *(_DWORD *)(a2 - 0x20) == 0x6F ) /*0x9966db*/
    {
      if ( a1 >= 0x38 ) /*0x9966e0*/
        goto LABEL_17; /*0x9966e0*/
      v4 = 8 * *(_DWORD *)(a2 - 0x34); /*0x9966f0*/
      *(_DWORD *)(a2 - 0x30) = *(_QWORD *)(a2 - 0x34) >> 0x1D; /*0x9966f3*/
    }
    else
    {
      v4 = 0xA * *(_DWORD *)(a2 - 0x34); /*0x996707*/
      *(_DWORD *)(a2 - 0x30) = (unsigned __int64)(0xALL * *(_QWORD *)(a2 - 0x34)) >> 0x20; /*0x996709*/
    }
LABEL_14:
    ++*(_DWORD *)(a2 - 0x1C); /*0x996743*/
    *(_DWORD *)(a2 - 0x30) = (a1 - 0x30 + __PAIR64__(*(_DWORD *)(a2 - 0x30), v4)) >> 0x20; /*0x99674c*/
    v6 = *(_DWORD *)(a2 - 0x2C) == 0; /*0x99674f*/
    *(_DWORD *)(a2 - 0x34) = a1 - 0x30 + v4; /*0x996753*/
    if ( !v6 ) /*0x996756*/
    {
      v6 = (*(_DWORD *)(a2 - 0xC))-- == 1; /*0x996758*/
      if ( v6 ) /*0x99675b*/
        goto LABEL_19; /*0x99675b*/
    }
    v7 = *(FILE **)(a2 - 0x14); /*0x99675d*/
    ++*(_DWORD *)(a2 + 4); /*0x996760*/
    a1 = _inc(v3, v7); /*0x996768*/
    *(_DWORD *)(a2 - 4) = a1; /*0x99676a*/
  }
  if ( isxdigit((unsigned __int8)a1) ) /*0x996712*/
  {
    v4 = 0x10 * *(_DWORD *)(a2 - 0x34); /*0x996727*/
    *(_DWORD *)(a2 - 0x30) = *(_QWORD *)(a2 - 0x34) >> 0x1C; /*0x99672a*/
    v5 = isdigit((unsigned __int8)a1); /*0x99672d*/
    v3 = v17; /*0x996734*/
    a1 = (char)a1; /*0x996735*/
    if ( !v5 ) /*0x996738*/
      a1 = ((char)a1 & 0xFFFFFFDF) - 7; /*0x99673d*/
    *(_DWORD *)(a2 - 4) = a1; /*0x996740*/
    goto LABEL_14; /*0x996740*/
  }
LABEL_17:
  --*(_DWORD *)(a2 + 4); /*0x996772*/
  if ( a1 != 0xFFFFFFFF ) /*0x996778*/
    _ungetc_nolock(a1, *(FILE **)(a2 - 0x14)); /*0x99677e*/
LABEL_19:
  v8 = *(_DWORD *)(a2 - 0x54); /*0x996785*/
  if ( *(_BYTE *)(a2 - 0x17) ) /*0x996785*/
  {
    v9 = -*(_QWORD *)(a2 - 0x34) >> 0x20; /*0x99679d*/
    *(_DWORD *)(a2 - 0x34) = -*(_DWORD *)(a2 - 0x34); /*0x99679f*/
    *(_DWORD *)(a2 - 0x30) = v9; /*0x9967a2*/
  }
LABEL_40:
  if ( *(_DWORD *)(a2 - 0x20) == 0x46 ) /*0x996851*/
    *(_DWORD *)(a2 - 0x1C) = 0; /*0x996853*/
  if ( !*(_DWORD *)(a2 - 0x1C) ) /*0x996857*/
    return _input_l_::_error_return_25524(a2); /*0x99685b*/
  if ( *(_BYTE *)(a2 - 0xD) ) /*0x996861*/
    JUMPOUT(0x99688D); /*0x99688d*/
  ++*(_DWORD *)(a2 - 0x3C); /*0x996867*/
  return _input_l_::_assign_num_25677(a2, v8, *(_DWORD **)(a2 - 0x38));
}
