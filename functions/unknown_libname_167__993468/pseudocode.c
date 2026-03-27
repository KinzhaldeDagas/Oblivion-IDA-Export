int __usercall unknown_libname_167@<eax>(
        int a1@<edi>,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7)
{
  unsigned __int8 *v7; // esi
  int v9; // edi
  unsigned __int8 *v10; // eax
  unsigned __int8 v11; // al
  unsigned __int8 *v12; // eax
  unsigned __int8 *v13; // eax

  v7 = a2;
  if ( !a2 || !a3 )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, a1, 0x16);
    return 0x16;
  }
  v9 = 0;
  if ( a4 && *a4 )
  {
    v9 = 2;
    if ( a3 <= 2 )
      return unknown_libname_167_::unknown_libname_168();
    *a2 = *a4;
    a2[1] = 0x3A;
    v7 = a2 + 2;
  }
  v10 = a5;
  if ( a5 && *a5 )
  {
    while ( ++v9 < a3 )
    {
      *v7++ = *v10;
      if ( !*++v10 )
      {
        v11 = *_mbsdec(a5, v10);
        if ( v11 != 0x2F && v11 != 0x5C )
        {
          if ( ++v9 >= a3 )
            return unknown_libname_167_::unknown_libname_168();
          *v7++ = 0x5C;
        }
        goto LABEL_16;
      }
    }
    return unknown_libname_167_::unknown_libname_168();
  }
LABEL_16:
  v12 = a6;
  if ( a6 )
  {
    while ( *v12 )
    {
      if ( ++v9 >= a3 )
        return unknown_libname_167_::unknown_libname_168();
      *v7++ = *v12++;
    }
  }
  v13 = a7;
  if ( a7 && *a7 )
  {
    if ( *a7 == 0x2E )
      goto LABEL_28;
    if ( ++v9 >= a3 )
      return unknown_libname_167_::unknown_libname_168();
    *v7++ = 0x2E;
LABEL_28:
    while ( *v13 )
    {
      if ( ++v9 >= a3 )
        return unknown_libname_167_::unknown_libname_168();
      *v7++ = *v13++;
    }
  }
  if ( v9 + 1 > a3 )
    return unknown_libname_167_::unknown_libname_168();
  *v7 = 0;
  return 0;
}
