int __cdecl _mbsicmp(const unsigned __int8 *Str1, const unsigned __int8 *Str2)
{
  int v2; // ebx
  int v3; // edi

  return _mbsicmp_l(v2, v3, (char *)Str1, (char *)Str2, 0); /*0x9836db*/
}
