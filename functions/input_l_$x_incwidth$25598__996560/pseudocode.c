int __usercall _input_l_::_x_incwidth_25598@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>)
{
  bool v3; // zf
  FILE *v4; // edx
  FILE *v5; // edx
  int v6; // eax
  int v7; // ecx
  FILE *v9; // edx
  signed int v10; // eax

  v3 = (*(_DWORD *)(a3 - 0xC))-- == 1; /*0x996560*/
  if ( v3 && a1 ) /*0x996567*/
  {
    *(_BYTE *)(a3 + 3) = 1; /*0x996569*/
  }
  else
  {
    v4 = *(FILE **)(a3 - 0x14); /*0x99656f*/
    ++*(_DWORD *)(a3 + 4); /*0x996572*/
    a2 = _inc(a1, v4); /*0x99657a*/
    *(_DWORD *)(a3 - 4) = a2; /*0x99657c*/
  }
  if ( a2 != 0x30 ) /*0x996582*/
    return _input_l_::_getnum_25615(a2, a3); /*0x996582*/
  v5 = *(FILE **)(a3 - 0x14); /*0x996588*/
  ++*(_DWORD *)(a3 + 4); /*0x99658b*/
  v6 = _inc(a1, v5); /*0x99658e*/
  *(_DWORD *)(a3 - 4) = v6; /*0x996598*/
  if ( (_BYTE)v6 == 0x78 || (_BYTE)v6 == 0x58 ) /*0x9965a0*/
  {
    v9 = *(FILE **)(a3 - 0x14); /*0x9965e4*/
    ++*(_DWORD *)(a3 + 4); /*0x9965e7*/
    v10 = _inc(v7, v9); /*0x9965ea*/
    v3 = *(_DWORD *)(a3 - 0x2C) == 0; /*0x9965ef*/
    *(_DWORD *)(a3 - 4) = v10; /*0x9965f5*/
    if ( !v3 ) /*0x9965f8*/
    {
      *(_DWORD *)(a3 - 0xC) -= 2; /*0x9965fa*/
      if ( *(int *)(a3 - 0xC) < 1 ) /*0x996602*/
        ++*(_BYTE *)(a3 + 3); /*0x996604*/
    }
    *(_DWORD *)(a3 - 0x20) = 0x78; /*0x996607*/
    return _input_l_::_getnum_25615(v10, a3); /*0x99660e*/
  }
  else
  {
    v3 = *(_DWORD *)(a3 - 0x20) == 0x78; /*0x9965a2*/
    *(_DWORD *)(a3 - 0x1C) = 1; /*0x9965a6*/
    if ( v3 ) /*0x9965ad*/
    {
      --*(_DWORD *)(a3 + 4); /*0x9965c9*/
      if ( v6 != 0xFFFFFFFF ) /*0x9965cf*/
        _ungetc_nolock(v6, *(FILE **)(a3 - 0x14)); /*0x9965d5*/
      JUMPOUT(0x9966A2); /*0x9966a2*/
    }
    if ( *(_DWORD *)(a3 - 0x2C) ) /*0x9965af*/
    {
      v3 = (*(_DWORD *)(a3 - 0xC))-- == 1; /*0x9965b5*/
      if ( v3 ) /*0x9965b8*/
        ++*(_BYTE *)(a3 + 3); /*0x9965ba*/
    }
    *(_DWORD *)(a3 - 0x20) = 0x6F; /*0x9965bd*/
    return _input_l_::_getnum_25615(v6, a3); /*0x9965c4*/
  }
}
