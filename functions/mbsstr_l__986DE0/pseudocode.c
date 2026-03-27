char *__usercall _mbsstr_l@<eax>(int a1@<edi>, int a2@<esi>, char *Str, char *SubStr, struct localeinfo_struct *a5)
{
  char *result; // eax
  char *v6; // edi
  char *v7; // eax
  int v8; // esi
  bool v9; // zf
  char *v10; // ecx
  _BYTE v11[4]; // [esp+4h] [ebp-18h] BYREF
  int v12; // [esp+8h] [ebp-14h]
  int v13; // [esp+Ch] [ebp-10h]
  char v14; // [esp+10h] [ebp-Ch]
  char *v15; // [esp+14h] [ebp-8h]
  unsigned __int8 v16; // [esp+1Bh] [ebp-1h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v11, a5);
  if ( *(_DWORD *)(v12 + 8) )
  {
    if ( SubStr )
    {
      if ( *SubStr )
      {
        if ( Str )
        {
          v6 = Str;
          v15 = &Str[-strlen(SubStr)];
          v7 = &v15[strlen(Str)];
          if ( *Str )
          {
            v8 = Str - SubStr;
            while ( v6 <= v7 )
            {
              v9 = *v6 == 0;
              v10 = SubStr;
              v16 = *v6;
              if ( !v9 )
              {
                while ( *v10 )
                {
                  if ( v10[v8] == *v10 )
                  {
                    ++v10;
                    if ( v10[v8] )
                      continue;
                  }
                  goto LABEL_23;
                }
LABEL_32:
                if ( v14 )
                  *(_DWORD *)(v13 + 0x70) &= ~2u;
                return v6;
              }
LABEL_23:
              if ( !*v10 )
                goto LABEL_32;
              ++v6;
              ++v8;
              if ( (*(_BYTE *)(v16 + v12 + 0x1D) & 4) != 0 )
              {
                if ( !*v6 )
                  break;
                ++v6;
                ++v8;
              }
              if ( !*v6 )
                break;
            }
          }
          if ( v14 )
            *(_DWORD *)(v13 + 0x70) &= ~2u;
          return 0;
        }
        else
        {
          *_errno() = 0x16;
          _invalid_parameter(0, a1, 0);
          if ( v14 )
            *(_DWORD *)(v13 + 0x70) &= ~2u;
          return 0;
        }
      }
      else
      {
        if ( v14 )
          *(_DWORD *)(v13 + 0x70) &= ~2u;
        return Str;
      }
    }
    else
    {
      *_errno() = 0x16;
      _invalid_parameter(0, a1, a2);
      if ( v14 )
        *(_DWORD *)(v13 + 0x70) &= ~2u;
      return 0;
    }
  }
  else
  {
    result = strstr(Str, SubStr);
    if ( v14 )
      *(_DWORD *)(v13 + 0x70) &= ~2u;
  }
  return result;
}
