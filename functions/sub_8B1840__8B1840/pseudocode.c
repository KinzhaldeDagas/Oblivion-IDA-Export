char *__cdecl sub_8B1840(char *a1, const char *a2, size_t Count)
{
  char *result; // eax

  result = (char *)Count; /*0x8b1840*/
  if ( (_DWORD)Count ) /*0x8b1846*/
    return strncpy(a1, a2, Count); /*0x8b184c*/
  return result; /*0x8b1851*/
}
