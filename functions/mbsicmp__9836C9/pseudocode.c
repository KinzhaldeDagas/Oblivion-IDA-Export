int __cdecl _mbsicmp(const unsigned __int8 *Str1, const unsigned __int8 *Str2)
{
  return _mbsicmp_l((char *)Str1, (char *)Str2, 0);
}
