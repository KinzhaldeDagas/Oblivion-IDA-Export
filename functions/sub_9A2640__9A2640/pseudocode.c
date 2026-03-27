char *__cdecl sub_9A2640(char *Str1)
{
  int v1; // esi
  unsigned __int8 **i; // edi

  v1 = 0;
  if ( !dword_B3245C )
    return 0;
  for ( i = (unsigned __int8 **)&unk_B32460; _strcmp((unsigned __int8 *)Str1, i[1]); i += 2 )
  {
    if ( ++v1 >= (unsigned int)dword_B3245C )
      return 0;
  }
  return (char *)*i;
}
