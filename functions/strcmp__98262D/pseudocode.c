int __cdecl _strcmp(unsigned __int8 *Str1, unsigned __int8 *Str2)
{
  if ( dword_BA9E10 )
    return _stricmp_l((const char *)Str1, (const char *)Str2, 0);
  if ( Str1 && Str2 )
    return __ascii_stricmp(Str1, Str2);
  *_errno() = 0x16;
  _invalid_parameter(0, 0, 0, 0, 0);
  return 0x7FFFFFFF;
}
