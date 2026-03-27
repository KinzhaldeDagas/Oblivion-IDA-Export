char *__cdecl sub_8B1840(char *a1, const char *a2, size_t Count)
{
  char *result; // eax

  result = (char *)Count;
  if ( (_DWORD)Count )
    return strncpy(a1, a2, Count);
  return result;
}
