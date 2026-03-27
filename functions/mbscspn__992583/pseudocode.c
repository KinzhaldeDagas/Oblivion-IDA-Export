size_t __cdecl _mbscspn(const unsigned __int8 *Str, const unsigned __int8 *Control)
{
  int v2; // edi
  size_t result; // rax

  LODWORD(result) = _mbscspn_l(v2, (char *)Str, (char *)Control, 0);
  return result;
}
