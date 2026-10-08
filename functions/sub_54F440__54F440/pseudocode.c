int __cdecl sub_54F440(char *Str2)
{
  int v1; // esi
  const char *v2; // eax

  if ( !Str2 ) /*0x54f447*/
    return 0xFFFFFFFF; /*0x54f47c*/
  v1 = 0; /*0x54f44a*/
  while ( 1 ) /*0x54f450*/
  {
    v2 = *(const char **)(4 * v1 + 0xB11FE0); /*0x54f450*/
    if ( v2 ) /*0x54f459*/
    {
      if ( CRT_StricmpLocaleDispatch(v2, Str2) ) /*0x54f45d*/
        break; /*0x54f45d*/
    }
    if ( ++v1 >= 4 ) /*0x54f46f*/
      return 0xFFFFFFFF; /*0x54f476*/
  }
  return v1; /*0x54f475*/
}
