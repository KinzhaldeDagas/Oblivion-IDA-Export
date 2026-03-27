int __cdecl strcmp(const char *Str1, const char *Str2)
{
  if ( ((unsigned __int8)Str1 & 3) != 0 )
    return strcmp_::dopartial(Str1, Str2);
  else
    return strcmp_::dodwords(Str1, Str2);
}
