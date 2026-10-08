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
  int v10; // [esp+Ch] [ebp-8h]
  char v11; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v9, a2); /*0x98fd24*/
  v2 = a1; /*0x98fd29*/
  for ( i = *a1; *v2; i = *++v2 ) /*0x98fd2c*/
  {
    if ( i == ***(_BYTE ***)(v9 + 0xBC) ) /*0x98fd41*/
      break; /*0x98fd41*/
  }
  v4 = *v2; /*0x98fd4a*/
  result = v2 + 1; /*0x98fd4c*/
  if ( v4 ) /*0x98fd4f*/
  {
    while ( 1 ) /*0x98fd5e*/
    {
      v6 = *result; /*0x98fd5e*/
      if ( !*result || v6 == 0x65 || v6 == 0x45 ) /*0x98fd5b*/
        break; /*0x98fd5b*/
      ++result; /*0x98fd5d*/
    }
    v7 = result; /*0x98fd64*/
    do /*0x98fd6a*/
      --result; /*0x98fd66*/
    while ( *result == 0x30 ); /*0x98fd6a*/
    if ( *result == ***(_BYTE ***)(v9 + 0xBC) ) /*0x98fd7a*/
      --result; /*0x98fd7c*/
    do /*0x98fd85*/
    {
      v8 = *v7; /*0x98fd7d*/
      ++result; /*0x98fd7f*/
      ++v7; /*0x98fd80*/
      *result = v8; /*0x98fd83*/
    }
    while ( v8 ); /*0x98fd85*/
  }
  if ( v11 ) /*0x98fd8c*/
  {
    result = (char *)v10; /*0x98fd8e*/
    *(_DWORD *)(v10 + 0x70) &= ~2u; /*0x98fd91*/
  }
  return result; /*0x98fd8b*/
}
