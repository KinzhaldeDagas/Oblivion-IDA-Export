int __cdecl _mbscmp(const unsigned __int8 *Str1, const unsigned __int8 *Str2)
{
  int v2; // edi
  int v3; // esi

  return _mbscmp_l(v2, v3, (char *)Str1, (char *)Str2, 0);
}
