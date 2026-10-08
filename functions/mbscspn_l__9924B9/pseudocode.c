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

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v9, a4); /*0x9924c7*/
  v4 = v10; /*0x9924cc*/
  if ( !*(_DWORD *)(v10 + 8) ) /*0x9924d1*/
  {
    result = strpbrk(Str, Control); /*0x9924dc*/
LABEL_23:
    if ( v12 ) /*0x992576*/
      *(_DWORD *)(v11 + 0x70) &= ~2u; /*0x99257b*/
    return result; /*0x99257b*/
  }
  v6 = Str; /*0x9924e8*/
  if ( Str && Control )
  {
    if ( *Str ) /*0x99251c*/
    {
      do /*0x992566*/
      {
        for ( i = Control; *i; ++i ) /*0x992521*/
        {
          v8 = *i; /*0x992526*/
          if ( (*(_BYTE *)((unsigned __int8)*i + v10 + 0x1D) & 4) != 0 ) /*0x992530*/
          {
            if ( v8 == *v6 && i[1] == v6[1] || !i[1] ) /*0x992541*/
              break; /*0x992543*/
            ++i; /*0x992545*/
          }
          else if ( v8 == *v6 ) /*0x99254b*/
          {
            break; /*0x99254b*/
          }
        }
        if ( *i ) /*0x992552*/
          break; /*0x992554*/
        if ( (*(_BYTE *)((unsigned __int8)*v6 + v10 + 0x1D) & 4) != 0 && !*++v6 ) /*0x992561*/
          break; /*0x992563*/
        ++v6; /*0x992565*/
      }
      while ( *v6 ); /*0x992566*/
    }
    result = *v6 != 0 ? v6 : 0;
    goto LABEL_23; /*0x992571*/
  }
  *_errno() = 0x16; /*0x9924f9*/
  _invalid_parameter(0, a1, v4); /*0x9924ff*/
  if ( v12 ) /*0x99250a*/
    *(_DWORD *)(v11 + 0x70) &= ~2u; /*0x99250f*/
  return 0; /*0x99257f*/
}
