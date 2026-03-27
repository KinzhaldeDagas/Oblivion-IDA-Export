int __cdecl _mbsnbicoll(const unsigned __int8 *Str1, const unsigned __int8 *Str2, size_t MaxCount)
{
  int v3; // edi
  localeinfo_struct_0 *v4; // esi

  return _mbsnbicoll_l(v3, v4, (char *)Str1, (char *)Str2, (unsigned int)MaxCount);
}
