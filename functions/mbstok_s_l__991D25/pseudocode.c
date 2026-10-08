char *__usercall _mbstok_s_l@<eax>(int a1@<esi>, char *Str, char *Delim, char **Context, struct localeinfo_struct *a5)
{
  char *result; // eax
  char *v6; // esi
  char *v7; // edi
  char v8; // cl
  char *v9; // edi
  bool v10; // zf
  char v11; // cl
  struct localeinfo_struct v12; // [esp+8h] [ebp-18h] BYREF
  int v13; // [esp+10h] [ebp-10h]
  char v14; // [esp+14h] [ebp-Ch]
  char *v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  if ( !Context || !Delim ) /*0x991d58*/
  {
    *_errno() = 0x16; /*0x991d40*/
    _invalid_parameter(0, (int)Context, a1); /*0x991d46*/
    return 0; /*0x991d50*/
  }
  v6 = Str; /*0x991d5b*/
  if ( !Str && !*Context ) /*0x991d62*/
  {
    *_errno() = 0x16; /*0x991d70*/
    _invalid_parameter(0, (int)Context, 0); /*0x991d76*/
    return 0; /*0x991d7e*/
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v12, a5); /*0x991d89*/
  if ( !v12.mbcinfo->ismbcodepage ) /*0x991d91*/
  {
    result = strtok_s(Str, Delim, Context); /*0x991d9b*/
    if ( v14 ) /*0x991da6*/
      *(_DWORD *)(v13 + 0x70) &= ~2u; /*0x991daf*/
    return result; /*0x991db3*/
  }
  if ( !Str ) /*0x991dba*/
    v6 = *Context; /*0x991dbc*/
LABEL_26:
  if ( *v6 ) /*0x991e2a*/
  {
    v7 = Delim; /*0x991dc0*/
    if ( !*Delim ) /*0x991dc7*/
      goto LABEL_22; /*0x991dc7*/
    while ( 1 ) /*0x991dc9*/
    {
      if ( _ismbblead_l(*v7, &v12) ) /*0x991dd1*/
      {
        v8 = v7[1]; /*0x991ddf*/
        if ( !v8 ) /*0x991de3*/
        {
          ++v7; /*0x991e01*/
          *_errno() = 0x2A; /*0x991e07*/
LABEL_22:
          if ( *v7 ) /*0x991e0d*/
          {
            if ( !_ismbblead_l(*v6, &v12) || (++v6, *v6) ) /*0x991e25*/
            {
              ++v6; /*0x991e29*/
              goto LABEL_26; /*0x991e29*/
            }
            *_errno() = 0x2A; /*0x991e35*/
          }
          break; /*0x991e35*/
        }
        if ( *v7 == *v6 && v8 == v6[1] ) /*0x991dee*/
          goto LABEL_22; /*0x991dee*/
        ++v7; /*0x991df0*/
      }
      else if ( *v7 == *v6 ) /*0x991df8*/
      {
        goto LABEL_22; /*0x991df8*/
      }
      if ( !*++v7 ) /*0x991dfb*/
        goto LABEL_22; /*0x991dfd*/
    }
  }
  v15 = v6; /*0x991e3b*/
LABEL_46:
  if ( *v6 ) /*0x991eaf*/
  {
    v9 = Delim; /*0x991e40*/
    v10 = *Delim == 0; /*0x991e45*/
    v16 = 0; /*0x991e47*/
    if ( v10 ) /*0x991e4a*/
      goto LABEL_41; /*0x991e4a*/
    while ( 1 ) /*0x991e4c*/
    {
      if ( _ismbblead_l(*v9, &v12) ) /*0x991e54*/
      {
        v11 = v9[1]; /*0x991e62*/
        if ( !v11 ) /*0x991e66*/
        {
          ++v9; /*0x991e84*/
          goto LABEL_41; /*0x991e85*/
        }
        if ( *v9 == *v6 && v11 == v6[1] ) /*0x991e71*/
        {
          v16 = 1; /*0x991e87*/
LABEL_41:
          if ( *v9 ) /*0x991e8e*/
          {
            *v6++ = 0; /*0x991eb5*/
            if ( v16 ) /*0x991ebb*/
              *v6++ = 0; /*0x991ebd*/
            break; /*0x991ec0*/
          }
          if ( !_ismbblead_l(*v6, &v12) ) /*0x991ea3*/
            goto LABEL_45; /*0x991ea3*/
          if ( !v6[1] ) /*0x991eaa*/
          {
            *v6 = 0; /*0x991ec2*/
            break; /*0x991ec2*/
          }
          ++v6; /*0x991eac*/
LABEL_45:
          ++v6; /*0x991eae*/
          goto LABEL_46; /*0x991eae*/
        }
        ++v9; /*0x991e73*/
      }
      else if ( *v9 == *v6 ) /*0x991e7b*/
      {
        goto LABEL_41; /*0x991e7b*/
      }
      if ( !*++v9 ) /*0x991e7e*/
        goto LABEL_41; /*0x991e80*/
    }
  }
  v10 = v15 == v6; /*0x991ec4*/
  *Context = v6; /*0x991eca*/
  if ( v10 ) /*0x991ecc*/
  {
    if ( v14 ) /*0x991ed1*/
      *(_DWORD *)(v13 + 0x70) &= ~2u; /*0x991ed6*/
    return 0; /*0x991eda*/
  }
  else
  {
    if ( v14 ) /*0x991ee1*/
      *(_DWORD *)(v13 + 0x70) &= ~2u; /*0x991ee6*/
    return v15; /*0x991eea*/
  }
}
