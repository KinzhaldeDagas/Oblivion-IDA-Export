int __cdecl strcmp(const char *Str1, const char *Str2)
{
  if ( ((unsigned __int8)Str1 & 3) != 0 ) /*0x98df5e*/
    return strcmp_::dopartial((unsigned __int8 *)Str2, Str1); /*0x98df5e*/
  else
    return strcmp_::dodwords(Str2, (unsigned int *)Str1); /*0x98df5f*/
}
