char *__usercall _mbscspn_l@<eax>(int a1@<edi>, char *Str, char *Control, struct localeinfo_struct *a4)
{
  int v4; // esi
  char *result; // eax
  char *v6; // ecx
  char *i; // eax
  char v8; // dl
  _BYTE v9[4]; // [esp+8h] [ebp-10h] BYREF
  int v10; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+10h] [ebp-8h]
  char v12; // [esp+14h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v9, a4);
  v4 = v10;
  if ( !*(_DWORD *)(v10 + 8) )
  {
    result = strpbrk(Str, Control);
LABEL_23:
    if ( v12 )
      *(_DWORD *)(v11 + 0x70) &= ~2u;
    return result;
  }
  v6 = Str;
  if ( Str && Control )
  {
    if ( *Str )
    {
      do
      {
        for ( i = Control; *i; ++i )
        {
          v8 = *i;
          if ( (*(_BYTE *)((unsigned __int8)*i + v10 + 0x1D) & 4) != 0 )
          {
            if ( v8 == *v6 && i[1] == v6[1] || !i[1] )
              break;
            ++i;
          }
          else if ( v8 == *v6 )
          {
            break;
          }
        }
        if ( *i )
          break;
        if ( (*(_BYTE *)((unsigned __int8)*v6 + v10 + 0x1D) & 4) != 0 && !*++v6 )
          break;
        ++v6;
      }
      while ( *v6 );
    }
    result = *v6 != 0 ? v6 : 0;
    goto LABEL_23;
  }
  *_errno() = 0x16;
  _invalid_parameter(0, a1, v4);
  if ( v12 )
    *(_DWORD *)(v11 + 0x70) &= ~2u;
  return 0;
}
