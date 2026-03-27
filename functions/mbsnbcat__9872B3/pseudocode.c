unsigned __int8 *__cdecl _mbsnbcat(unsigned __int8 *Dest, const unsigned __int8 *Source, size_t Count)
{
  int v3; // edi

  return (unsigned __int8 *)_mbsnbcat_l(v3, (char *)Dest, (char *)Source, (unsigned int)Count);
}
