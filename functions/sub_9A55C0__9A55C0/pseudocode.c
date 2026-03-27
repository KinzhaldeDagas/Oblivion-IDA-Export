char __cdecl sub_9A55C0(char *Str1, unsigned __int8 **a2)
{
  int v2; // esi
  unsigned __int8 **i; // edi

  v2 = 0;
  if ( !dword_B32588 )
    return 0;
  for ( i = (unsigned __int8 **)&unk_B328F0; _strcmp((unsigned __int8 *)Str1, i[1]); i += 2 )
  {
    if ( ++v2 >= (unsigned int)dword_B32588 )
      return 0;
  }
  *a2 = *i;
  return 1;
}
