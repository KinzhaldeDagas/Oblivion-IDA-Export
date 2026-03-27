unsigned __int8 *__cdecl _mbschr(const unsigned __int8 *Str, unsigned int a2)
{
  int v2; // edi
  int v3; // esi

  return (unsigned __int8 *)_mbschr_l(v2, v3, (char *)Str, a2, 0);
}
