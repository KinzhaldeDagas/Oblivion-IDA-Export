int __usercall _input_l_::_x_incwidth_25598@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>)
{
  bool v3; // zf
  FILE *v4; // edx
  FILE *v5; // edx
  int v6; // eax
  int v7; // ecx
  FILE *v9; // edx
  int v10; // eax

  v3 = (*(_DWORD *)(a3 - 0xC))-- == 1;
  if ( v3 && a1 )
  {
    *(_BYTE *)(a3 + 3) = 1;
  }
  else
  {
    v4 = *(FILE **)(a3 - 0x14);
    ++*(_DWORD *)(a3 + 4);
    a2 = _inc(a1, v4);
    *(_DWORD *)(a3 - 4) = a2;
  }
  if ( a2 != 0x30 )
    return _input_l_::_getnum_25615();
  v5 = *(FILE **)(a3 - 0x14);
  ++*(_DWORD *)(a3 + 4);
  v6 = _inc(a1, v5);
  *(_DWORD *)(a3 - 4) = v6;
  if ( (_BYTE)v6 == 0x78 || (_BYTE)v6 == 0x58 )
  {
    v9 = *(FILE **)(a3 - 0x14);
    ++*(_DWORD *)(a3 + 4);
    v10 = _inc(v7, v9);
    v3 = *(_DWORD *)(a3 - 0x2C) == 0;
    *(_DWORD *)(a3 - 4) = v10;
    if ( !v3 )
    {
      *(_DWORD *)(a3 - 0xC) -= 2;
      if ( *(int *)(a3 - 0xC) < 1 )
        ++*(_BYTE *)(a3 + 3);
    }
    *(_DWORD *)(a3 - 0x20) = 0x78;
    return _input_l_::_getnum_25615();
  }
  else
  {
    v3 = *(_DWORD *)(a3 - 0x20) == 0x78;
    *(_DWORD *)(a3 - 0x1C) = 1;
    if ( v3 )
    {
      --*(_DWORD *)(a3 + 4);
      if ( v6 != 0xFFFFFFFF )
        _ungetc_nolock(v6, *(FILE **)(a3 - 0x14));
      JUMPOUT(0x9966A2);
    }
    if ( *(_DWORD *)(a3 - 0x2C) )
    {
      v3 = (*(_DWORD *)(a3 - 0xC))-- == 1;
      if ( v3 )
        ++*(_BYTE *)(a3 + 3);
    }
    *(_DWORD *)(a3 - 0x20) = 0x6F;
    return _input_l_::_getnum_25615();
  }
}
