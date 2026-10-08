unsigned int __usercall _input_l_::_f_incwidth2_25725@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>)
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

  v3 = *(_DWORD *)(a3 - 0xC); /*0x99626d*/
  *(_DWORD *)(a3 - 0xC) = v3 - 1; /*0x996270*/
  if ( v3 ) /*0x996275*/
  {
    v4 = *(FILE **)(a3 - 0x14); /*0x99627c*/
    ++*(_DWORD *)(a3 + 4); /*0x99627f*/
    *(_DWORD *)(a3 - 4) = _inc(a1, v4); /*0x996287*/
  }
  else
  {
    *(_DWORD *)(a3 - 0xC) = 0; /*0x996277*/
  }
  for ( i = *(unsigned __int8 *)(a3 - 4); isdigit(i); i = (unsigned __int8)i ) /*0x99628a*/
  {
    v6 = *(_DWORD *)(a3 - 0xC); /*0x996290*/
    *(_DWORD *)(a3 - 0xC) = v6 - 1; /*0x996293*/
    if ( !v6 ) /*0x996298*/
      break; /*0x996298*/
    v7 = *(_DWORD *)(a3 - 0x24); /*0x99629a*/
    v8 = *(_BYTE *)(a3 - 4); /*0x99629d*/
    ++*(_DWORD *)(a3 - 0x1C); /*0x9962a0*/
    *(_BYTE *)(a2 + v7) = v8; /*0x9962a3*/
    if ( !__check_float_string( /*0x9962c0*/
            (void **)(a3 - 0x24),
            (unsigned int *)(a3 - 0x4C),
            ++a2,
            (void *)(a3 + 8),
            (_DWORD *)(a3 - 0x44)) )
      return _input_l_::_error_return_25524(a3); /*0x9962c0*/
    v11 = *(FILE **)(a3 - 0x14); /*0x9962c6*/
    ++*(_DWORD *)(a3 + 4); /*0x9962c9*/
    i = _inc(v9, v11); /*0x9962cc*/
    *(_DWORD *)(a3 - 4) = i; /*0x9962d1*/
  }
  --*(_DWORD *)(a3 + 4); /*0x9962e2*/
  if ( *(_DWORD *)(a3 - 4) != 0xFFFFFFFF ) /*0x9962e9*/
    _ungetc_nolock(*(_DWORD *)(a3 - 4), *(FILE **)(a3 - 0x14)); /*0x9962f1*/
  if ( *(_DWORD *)(a3 - 0x1C) ) /*0x9962f8*/
  {
    if ( !*(_BYTE *)(a3 - 0xD) ) /*0x996302*/
    {
      v12 = *(_DWORD *)(a3 - 0x24); /*0x99630c*/
      ++*(_DWORD *)(a3 - 0x3C); /*0x99630f*/
      v16 = v12; /*0x996316*/
      v15 = *(_DWORD *)(a3 - 0x38); /*0x996317*/
      *(_BYTE *)(a2 + v12) = 0; /*0x99631a*/
      v14 = *(char *)(a3 - 0xE) - 1; /*0x996323*/
      v13 = (void (__cdecl *)(int, int, int, int))_decode_pointer(off_B312BC[0]); /*0x99632a*/
      v13(v14, v15, v16, a3 - 0x6C); /*0x996330*/
    }
    JUMPOUT(0x99688D); /*0x99688d*/
  }
  return _input_l_::_error_return_25524(a3);
}
