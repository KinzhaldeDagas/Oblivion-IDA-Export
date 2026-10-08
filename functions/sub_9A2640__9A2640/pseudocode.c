char *__cdecl sub_9A2640(char *Str1)
{
  int v1; // esi
  unsigned __int8 **i; // edi

  v1 = 0; /*0x9a2642*/
  if ( !dword_B3245C ) /*0x9a264b*/
    return 0; /*0x9a2675*/
  for ( i = (unsigned __int8 **)&unk_B32460; CRT_StricmpLocaleDispatch((unsigned __int8 *)Str1, i[1]); i += 2 ) /*0x9a2651*/
  {
    if ( ++v1 >= (unsigned int)dword_B3245C ) /*0x9a2673*/
      return 0; /*0x9a2673*/
  }
  return (char *)*i; /*0x9a2675*/
}
