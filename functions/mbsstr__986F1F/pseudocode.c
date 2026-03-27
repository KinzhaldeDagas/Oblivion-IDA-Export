unsigned __int8 *__cdecl _mbsstr(const unsigned __int8 *Str, const unsigned __int8 *SubStr)
{
  int v2; // edi
  int v3; // esi

  return (unsigned __int8 *)_mbsstr_l(v2, v3, (char *)Str, (char *)SubStr, 0);
}
