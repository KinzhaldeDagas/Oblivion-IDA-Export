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
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  v9 = 0; /*0x98422c*/
  v10 = a1; /*0x98422e*/
  if ( !a1 ) /*0x984235*/
    return _splitpath_helper_::_error_einval_25424((int)&savedregs); /*0x984235*/
  if ( a2 ) /*0x984240*/
  {
    if ( !a3 ) /*0x984250*/
      return _splitpath_helper_::_error_einval_25424((int)&savedregs); /*0x984250*/
  }
  else if ( a3 ) /*0x984245*/
  {
    return _splitpath_helper_::_error_einval_25424((int)&savedregs); /*0x984245*/
  }
  if ( a4 ) /*0x984259*/
  {
    if ( !a5 ) /*0x984265*/
      return _splitpath_helper_::_error_einval_25424((int)&savedregs); /*0x984265*/
  }
  else if ( a5 ) /*0x98425e*/
  {
    return _splitpath_helper_::_error_einval_25424((int)&savedregs); /*0x98425e*/
  }
  if ( a6 ) /*0x98426a*/
  {
    if ( !a7 ) /*0x984276*/
      return _splitpath_helper_::_error_einval_25424((int)&savedregs); /*0x984276*/
  }
  else if ( a7 ) /*0x98426f*/
  {
    return _splitpath_helper_::_error_einval_25424((int)&savedregs); /*0x98426f*/
  }
  if ( !a8 ) /*0x98427b*/
  {
    if ( !a9 ) /*0x984280*/
      goto LABEL_16; /*0x984280*/
    return _splitpath_helper_::_error_einval_25424((int)&savedregs); /*0x9842d6*/
  }
  if ( !a9 ) /*0x9842d5*/
    return _splitpath_helper_::_error_einval_25424((int)&savedregs); /*0x9842d5*/
LABEL_16:
  if ( *a1 == 0x5C && a1[1] == 0x5C && a1[2] == 0x3F && a1[3] == 0x5C ) /*0x984297*/
    v10 = a1 + 4; /*0x984299*/
  v11 = 1; /*0x98429e*/
  v12 = v10; /*0x98429f*/
  do /*0x9842aa*/
  {
    if ( !*v12 ) /*0x9842a1*/
      break; /*0x9842a4*/
    --v11; /*0x9842a6*/
    ++v12; /*0x9842a7*/
  }
  while ( v11 ); /*0x9842aa*/
  if ( *v12 == 0x3A ) /*0x9842af*/
  {
    if ( a2 ) /*0x9842b3*/
    {
      if ( a3 < 3 ) /*0x9842b9*/
        return _splitpath_helper_::_error_erange_25455(v10, &savedregs, 0); /*0x9842b9*/
      _mbsnbcpy_s(a2, 0xFFFFFFFF, v10, 2); /*0x9842c5*/
    }
    v10 = v12 + 1; /*0x9842cd*/
  }
  else if ( a2 ) /*0x9842e5*/
  {
    *a2 = 0; /*0x9842e7*/
  }
  v17 = 0; /*0x9842ea*/
  v14 = v10; /*0x9842f0*/
  if ( !*v10 ) /*0x9842ed*/
    goto LABEL_47; /*0x9842ed*/
  do /*0x98431c*/
  {
    if ( _ismbblead(*v14) ) /*0x9842f8*/
    {
      ++v14; /*0x984302*/
    }
    else
    {
      v15 = *v14; /*0x984305*/
      if ( *v14 == 0x2F || v15 == 0x5C ) /*0x98430d*/
      {
        v9 = v14 + 1; /*0x984318*/
      }
      else if ( v15 == 0x2E ) /*0x984311*/
      {
        v17 = v14; /*0x984313*/
      }
    }
    ++v14; /*0x98431b*/
  }
  while ( *v14 ); /*0x98431c*/
  if ( v9 ) /*0x984323*/
  {
    if ( a4 ) /*0x984329*/
    {
      if ( a5 <= v9 - v10 ) /*0x984332*/
        return _splitpath_helper_::_error_erange_25455(v10, &savedregs, 0); /*0x984332*/
      _mbsnbcpy_s(a4, 0xFFFFFFFF, v10, v9 - v10); /*0x98433b*/
    }
    v10 = v9; /*0x984343*/
  }
  else
  {
LABEL_47:
    if ( a4 ) /*0x98434c*/
      *a4 = 0; /*0x98434e*/
  }
  if ( v17 && v17 >= v10 ) /*0x98435a*/
  {
    if ( !a6 ) /*0x984360*/
    {
LABEL_54:
      if ( !a8 ) /*0x98437c*/
        goto LABEL_69; /*0x98437c*/
      v16 = v14 - v17; /*0x984382*/
      if ( a9 > v16 ) /*0x984388*/
      {
        _mbsnbcpy_s(a8, 0xFFFFFFFF, v17, v16); /*0x984393*/
LABEL_69:
        JUMPOUT(0x984435); /*0x984435*/
      }
      return _splitpath_helper_::_error_erange_25455(v10, &savedregs, 0); /*0x984388*/
    }
    if ( a7 > v17 - v10 ) /*0x984367*/
    {
      _mbsnbcpy_s(a6, 0xFFFFFFFF, v10, v17 - v10); /*0x984370*/
      goto LABEL_54; /*0x984370*/
    }
  }
  else
  {
    if ( !a6 ) /*0x9843a4*/
      JUMPOUT(0x98442B); /*0x98442b*/
    if ( a7 > v14 - v10 ) /*0x9843af*/
      JUMPOUT(0x98441C); /*0x98441c*/
  }
  return _splitpath_helper_::_error_erange_25455(v10, &savedregs, 0);
}
