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

  if ( !Context || !Delim )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, (int)Context, a1);
    return 0;
  }
  v6 = Str;
  if ( !Str && !*Context )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, (int)Context, 0);
    return 0;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v12, a5);
  if ( !v12.mbcinfo->ismbcodepage )
  {
    result = strtok_s(Str, Delim, Context);
    if ( v14 )
      *(_DWORD *)(v13 + 0x70) &= ~2u;
    return result;
  }
  if ( !Str )
    v6 = *Context;
LABEL_26:
  if ( *v6 )
  {
    v7 = Delim;
    if ( !*Delim )
      goto LABEL_22;
    while ( 1 )
    {
      if ( _ismbblead_l(*v7, &v12) )
      {
        v8 = v7[1];
        if ( !v8 )
        {
          ++v7;
          *_errno() = 0x2A;
LABEL_22:
          if ( *v7 )
          {
            if ( !_ismbblead_l(*v6, &v12) || (++v6, *v6) )
            {
              ++v6;
              goto LABEL_26;
            }
            *_errno() = 0x2A;
          }
          break;
        }
        if ( *v7 == *v6 && v8 == v6[1] )
          goto LABEL_22;
        ++v7;
      }
      else if ( *v7 == *v6 )
      {
        goto LABEL_22;
      }
      if ( !*++v7 )
        goto LABEL_22;
    }
  }
  v15 = v6;
LABEL_46:
  if ( *v6 )
  {
    v9 = Delim;
    v10 = *Delim == 0;
    v16 = 0;
    if ( v10 )
      goto LABEL_41;
    while ( 1 )
    {
      if ( _ismbblead_l(*v9, &v12) )
      {
        v11 = v9[1];
        if ( !v11 )
        {
          ++v9;
          goto LABEL_41;
        }
        if ( *v9 == *v6 && v11 == v6[1] )
        {
          v16 = 1;
LABEL_41:
          if ( *v9 )
          {
            *v6++ = 0;
            if ( v16 )
              *v6++ = 0;
            break;
          }
          if ( !_ismbblead_l(*v6, &v12) )
            goto LABEL_45;
          if ( !v6[1] )
          {
            *v6 = 0;
            break;
          }
          ++v6;
LABEL_45:
          ++v6;
          goto LABEL_46;
        }
        ++v9;
      }
      else if ( *v9 == *v6 )
      {
        goto LABEL_41;
      }
      if ( !*++v9 )
        goto LABEL_41;
    }
  }
  v10 = v15 == v6;
  *Context = v6;
  if ( v10 )
  {
    if ( v14 )
      *(_DWORD *)(v13 + 0x70) &= ~2u;
    return 0;
  }
  else
  {
    if ( v14 )
      *(_DWORD *)(v13 + 0x70) &= ~2u;
    return v15;
  }
}
