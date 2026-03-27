char *__cdecl _cropzeros_l(char *a1, struct localeinfo_struct *a2)
{
  char *v2; // eax
  char i; // cl
  char v4; // cl
  char *result; // eax
  char v6; // cl
  char *v7; // edx
  char v8; // cl
  int v9; // [esp+4h] [ebp-10h] BYREF
  char *v10; // [esp+Ch] [ebp-8h]
  char v11; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v9, a2);
  v2 = a1;
  for ( i = *a1; *v2; i = *++v2 )
  {
    if ( i == ***(_BYTE ***)(v9 + 0xBC) )
      break;
  }
  v4 = *v2;
  result = v2 + 1;
  if ( v4 )
  {
    while ( 1 )
    {
      v6 = *result;
      if ( !*result || v6 == 0x65 || v6 == 0x45 )
        break;
      ++result;
    }
    v7 = result;
    do
      --result;
    while ( *result == 0x30 );
    if ( *result == ***(_BYTE ***)(v9 + 0xBC) )
      --result;
    do
    {
      v8 = *v7;
      ++result;
      ++v7;
      *result = v8;
    }
    while ( v8 );
  }
  if ( v11 )
  {
    result = v10;
    *((_DWORD *)v10 + 0x1C) &= ~2u;
  }
  return result;
}
