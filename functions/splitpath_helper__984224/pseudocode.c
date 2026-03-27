int __usercall _splitpath_helper@<eax>(
        char *a1@<eax>,
        char *a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        char *a6,
        unsigned int a7,
        char *a8,
        unsigned int a9)
{
  char *v9; // edi
  char *v10; // ebx
  int v11; // eax
  char *v12; // esi
  char *v14; // esi
  char v15; // al
  unsigned int v16; // esi
  char *v17; // [esp+10h] [ebp-4h]

  v9 = 0;
  v10 = a1;
  if ( !a1 )
    return _splitpath_helper_::_error_einval_25424();
  if ( a2 )
  {
    if ( !a3 )
      return _splitpath_helper_::_error_einval_25424();
  }
  else if ( a3 )
  {
    return _splitpath_helper_::_error_einval_25424();
  }
  if ( a4 )
  {
    if ( !a5 )
      return _splitpath_helper_::_error_einval_25424();
  }
  else if ( a5 )
  {
    return _splitpath_helper_::_error_einval_25424();
  }
  if ( a6 )
  {
    if ( !a7 )
      return _splitpath_helper_::_error_einval_25424();
  }
  else if ( a7 )
  {
    return _splitpath_helper_::_error_einval_25424();
  }
  if ( !a8 )
  {
    if ( !a9 )
      goto LABEL_16;
    return _splitpath_helper_::_error_einval_25424();
  }
  if ( !a9 )
    return _splitpath_helper_::_error_einval_25424();
LABEL_16:
  if ( *a1 == 0x5C && a1[1] == 0x5C && a1[2] == 0x3F && a1[3] == 0x5C )
    v10 = a1 + 4;
  v11 = 1;
  v12 = v10;
  do
  {
    if ( !*v12 )
      break;
    --v11;
    ++v12;
  }
  while ( v11 );
  if ( *v12 == 0x3A )
  {
    if ( a2 )
    {
      if ( a3 < 3 )
        return _splitpath_helper_::_error_erange_25455();
      _mbsnbcpy_s(a2, 0xFFFFFFFF, v10, 2);
    }
    v10 = v12 + 1;
  }
  else if ( a2 )
  {
    *a2 = 0;
  }
  v17 = 0;
  v14 = v10;
  if ( !*v10 )
    goto LABEL_47;
  do
  {
    if ( _ismbblead(*v14) )
    {
      ++v14;
    }
    else
    {
      v15 = *v14;
      if ( *v14 == 0x2F || v15 == 0x5C )
      {
        v9 = v14 + 1;
      }
      else if ( v15 == 0x2E )
      {
        v17 = v14;
      }
    }
    ++v14;
  }
  while ( *v14 );
  if ( v9 )
  {
    if ( a4 )
    {
      if ( a5 <= v9 - v10 )
        return _splitpath_helper_::_error_erange_25455();
      _mbsnbcpy_s(a4, 0xFFFFFFFF, v10, v9 - v10);
    }
    v10 = v9;
  }
  else
  {
LABEL_47:
    if ( a4 )
      *a4 = 0;
  }
  if ( v17 && v17 >= v10 )
  {
    if ( !a6 )
    {
LABEL_54:
      if ( !a8 )
        goto LABEL_69;
      v16 = v14 - v17;
      if ( a9 > v16 )
      {
        _mbsnbcpy_s(a8, 0xFFFFFFFF, v17, v16);
LABEL_69:
        JUMPOUT(0x984435);
      }
      return _splitpath_helper_::_error_erange_25455();
    }
    if ( a7 > v17 - v10 )
    {
      _mbsnbcpy_s(a6, 0xFFFFFFFF, v10, v17 - v10);
      goto LABEL_54;
    }
  }
  else
  {
    if ( !a6 )
      JUMPOUT(0x98442B);
    if ( a7 > v14 - v10 )
      JUMPOUT(0x98441C);
  }
  return _splitpath_helper_::_error_erange_25455();
}
