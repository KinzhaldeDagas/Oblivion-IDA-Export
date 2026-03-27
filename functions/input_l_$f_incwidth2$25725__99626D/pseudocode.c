int __usercall _input_l_::_f_incwidth2_25725@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>)
{
  int v3; // eax
  FILE *v4; // edx
  int i; // eax
  int v6; // eax
  int v7; // eax
  char v8; // cl
  int v9; // ecx
  FILE *v11; // edx
  int v12; // eax
  void (__cdecl *v13)(int, int, int, int); // eax
  int v14; // [esp-10h] [ebp-10h]
  int v15; // [esp-Ch] [ebp-Ch]
  int v16; // [esp-8h] [ebp-8h]

  v3 = *(_DWORD *)(a3 - 0xC);
  *(_DWORD *)(a3 - 0xC) = v3 - 1;
  if ( v3 )
  {
    v4 = *(FILE **)(a3 - 0x14);
    ++*(_DWORD *)(a3 + 4);
    *(_DWORD *)(a3 - 4) = _inc(a1, v4);
  }
  else
  {
    *(_DWORD *)(a3 - 0xC) = 0;
  }
  for ( i = *(unsigned __int8 *)(a3 - 4); isdigit(i); i = (unsigned __int8)i )
  {
    v6 = *(_DWORD *)(a3 - 0xC);
    *(_DWORD *)(a3 - 0xC) = v6 - 1;
    if ( !v6 )
      break;
    v7 = *(_DWORD *)(a3 - 0x24);
    v8 = *(_BYTE *)(a3 - 4);
    ++*(_DWORD *)(a3 - 0x1C);
    *(_BYTE *)(a2 + v7) = v8;
    if ( !__check_float_string(++a2, (void *)(a3 + 8), a3 - 0x44) )
      return _input_l_::_error_return_25524();
    v11 = *(FILE **)(a3 - 0x14);
    ++*(_DWORD *)(a3 + 4);
    i = _inc(v9, v11);
    *(_DWORD *)(a3 - 4) = i;
  }
  --*(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a3 - 4) != 0xFFFFFFFF )
    _ungetc_nolock(*(_DWORD *)(a3 - 4), *(FILE **)(a3 - 0x14));
  if ( *(_DWORD *)(a3 - 0x1C) )
  {
    if ( !*(_BYTE *)(a3 - 0xD) )
    {
      v12 = *(_DWORD *)(a3 - 0x24);
      ++*(_DWORD *)(a3 - 0x3C);
      v16 = v12;
      v15 = *(_DWORD *)(a3 - 0x38);
      *(_BYTE *)(a2 + v12) = 0;
      v14 = *(char *)(a3 - 0xE) - 1;
      v13 = (void (__cdecl *)(int, int, int, int))_decode_pointer(off_B312BC[0]);
      v13(v14, v15, v16, a3 - 0x6C);
    }
    JUMPOUT(0x99688D);
  }
  return _input_l_::_error_return_25524();
}
