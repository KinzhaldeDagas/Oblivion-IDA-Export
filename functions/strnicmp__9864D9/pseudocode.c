int __cdecl _strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  __int16 v3; // dx
  int v4; // ebx
  int v5; // edi
  localeinfo_struct_0 *v7; // [esp+0h] [ebp-4h]

  if ( dword_BA9E10[0] ) /*0x9864df*/
    return _strnicmp_l(Str1, Str2, (unsigned int)MaxCount, v7); /*0x98652a*/
  if ( Str1 && Str2 && (unsigned int)MaxCount <= 0x7FFFFFFF ) /*0x986517*/
    return __ascii_strnicmp(v3, Str1, Str2, MaxCount); /*0x98651b*/
  *_errno() = 0x16; /*0x9864f6*/
  _invalid_parameter(v4, v5, 0); /*0x9864fc*/
  return 0x7FFFFFFF; /*0x986519*/
}
