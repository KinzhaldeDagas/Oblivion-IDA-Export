char *__stdcall sub_43E340(const char *a1)
{
  char *result; // eax

  result = (char *)FormHeapAlloc(strlen(a1) + 1);
  strcpy(result, a1);
  return result;
}
