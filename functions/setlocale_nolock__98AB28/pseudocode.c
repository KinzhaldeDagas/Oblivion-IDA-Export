char *__usercall _setlocale_nolock@<eax>(char *Str@<ecx>, UINT *a2@<edx>, const char *a3@<edi>, int a4)
{
  int v4; // ebx
  UINT *v5; // esi
  char *result; // eax
  char *v7; // eax
  char *v8; // ebx
  int v9; // eax
  const char **v10; // esi
  const char *v11; // ebx
  int v12; // edi
  errno_t v13; // eax
  int v14; // edx
  int v15; // ecx
  rsize_t v16; // [esp-Ch] [ebp-3Ch]
  _BYTE v17[12]; // [esp-4h] [ebp-34h]
  int v19; // [esp+10h] [ebp-20h]
  int v20; // [esp+14h] [ebp-1Ch]
  int v21; // [esp+14h] [ebp-1Ch]
  int v22; // [esp+18h] [ebp-18h]
  char Dst[132]; // [esp+1Ch] [ebp-14h] BYREF

  v4 = 0; /*0x98ab42*/
  v5 = a2; /*0x98ab46*/
  if ( a4 ) /*0x98ab4c*/
  {
    if ( Str ) /*0x98ab50*/
      return (char *)_setlocale_set_cat(Str, a2, a4); /*0x98ab53*/
    else
      return (char *)a2[4 * a4 + 0x12]; /*0x98ab61*/
  }
  v20 = 1; /*0x98ab6c*/
  v22 = 0; /*0x98ab73*/
  if ( !Str ) /*0x98ab76*/
    return _setlocale_get_all(a3, (int)v5); /*0x98ab76*/
  if ( *Str == 0x4C && Str[1] == 0x43 && Str[2] == 0x5F ) /*0x98ab93*/
  {
    a3 = Str; /*0x98ab99*/
    do /*0x98ac6a*/
    {
      v7 = strpbrk(a3, "=;"); /*0x98aba1*/
      v8 = v7; /*0x98aba6*/
      if ( !v7 ) /*0x98abac*/
        return 0; /*0x98abac*/
      v9 = v7 - a3; /*0x98abb2*/
      v21 = v9; /*0x98abb4*/
      if ( !v9 ) /*0x98abb7*/
        return 0; /*0x98abb7*/
      if ( *v8 == 0x3B ) /*0x98abc0*/
        return 0; /*0x98abc0*/
      v19 = 1; /*0x98abc6*/
      v10 = (const char **)&off_AA486C; /*0x98abcd*/
      while ( 1 ) /*0x98abd7*/
      {
        *(_DWORD *)v17 = v9; /*0x98abd7*/
        if ( !strncmp(*v10, a3, *(size_t *)v17) && v21 == (unsigned int)strlen(*v10) ) /*0x98abf2*/
          break; /*0x98abf2*/
        ++v19; /*0x98abf4*/
        v10 += 3; /*0x98abf7*/
        if ( (int)v10 > (int)off_AA489C ) /*0x98ac00*/
          break; /*0x98ac00*/
        v9 = v21; /*0x98abd4*/
      }
      v11 = v8 + 1; /*0x98ac02*/
      v12 = strcspn(v11, ";"); /*0x98ac0e*/
      if ( !v12 && *v11 != 0x3B ) /*0x98ac1b*/
        return 0; /*0x98ac81*/
      if ( v19 <= 5 ) /*0x98ac21*/
      {
        HIDWORD(v16) = v11; /*0x98ac24*/
        LODWORD(v16) = 0x83; /*0x98ac28*/
        v13 = strncpy_s(Dst, v16, (const char *)v12, *(rsize_t *)&v17[4]); /*0x98ac2e*/
        if ( v13 ) /*0x98ac38*/
          _invoke_watson(v13, v14, v15, (int)v11, v12, 0); /*0x98ac3f*/
        Dst[v12] = 0; /*0x98ac50*/
        if ( _setlocale_set_cat(Dst, a2, v19) ) /*0x98ac55*/
          ++v22; /*0x98ac5f*/
      }
      a3 = &v11[v12]; /*0x98ac62*/
      if ( !*a3 ) /*0x98ac64*/
        break; /*0x98ac67*/
      ++a3; /*0x98ac69*/
    }
    while ( *a3 ); /*0x98ac6a*/
    result = 0; /*0x98ac73*/
    if ( !v22 ) /*0x98ac78*/
      return result; /*0x98ac78*/
    v5 = a2; /*0x98ac7a*/
    return _setlocale_get_all(a3, (int)v5); /*0x98ac7d*/
  }
  result = _expandlocale(Str, Dst, 0x83u, 0); /*0x98ac90*/
  if ( result ) /*0x98ac9a*/
  {
    a3 = (const char *)(v5 + 0x12); /*0x98ac9c*/
    do /*0x98acd1*/
    {
      if ( v4 ) /*0x98aca1*/
      {
        if ( !strcmp(Dst, *(const char **)a3) || _setlocale_set_cat(Dst, v5, v4) ) /*0x98acb8*/
          ++v22; /*0x98acc7*/
        else
          v20 = 0; /*0x98acc2*/
      }
      ++v4; /*0x98acca*/
      a3 += 0x10; /*0x98accb*/
    }
    while ( v4 <= 5 ); /*0x98acd1*/
    result = 0; /*0x98acd3*/
    if ( v20 || v22 ) /*0x98acdd*/
      return _setlocale_get_all(a3, (int)v5); /*0x98acdf*/
  }
  return result; /*0x98ace4*/
}
