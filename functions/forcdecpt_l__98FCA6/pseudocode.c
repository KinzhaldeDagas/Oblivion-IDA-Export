char __cdecl _forcdecpt_l(char *a1, struct localeinfo_struct *a2)
{
  char *v2; // esi
  bool i; // zf
  char result; // al
  char *v5; // esi
  char v6; // cl
  int v8; // [esp+4h] [ebp-10h] BYREF
  int v9; // [esp+Ch] [ebp-8h]
  char v10; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v8, a2); /*0x98fcb3*/
  v2 = a1; /*0x98fcb8*/
  for ( i = tolower(*a1) == 0x65; !i; i = isdigit((unsigned __int8)*v2) == 0 ) /*0x98fcc4*/
    ++v2; /*0x98fcc9*/
  if ( tolower(*v2) == 0x78 ) /*0x98fce5*/
    v2 += 2; /*0x98fce8*/
  result = *v2; /*0x98fcf4*/
  *v2 = ***(_BYTE ***)(v8 + 0xBC); /*0x98fcf8*/
  v5 = v2 + 1; /*0x98fcfa*/
  do /*0x98fd06*/
  {
    v6 = *v5; /*0x98fcfb*/
    *v5 = result; /*0x98fcfd*/
    result = v6; /*0x98fcff*/
  }
  while ( *v5++ ); /*0x98fd06*/
  if ( v10 ) /*0x98fd0c*/
  {
    result = v9; /*0x98fd0e*/
    *(_DWORD *)(v9 + 0x70) &= ~2u; /*0x98fd11*/
  }
  return result; /*0x98fd0b*/
}
