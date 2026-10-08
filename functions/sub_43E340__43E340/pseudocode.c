char *__stdcall sub_43E340(const char *a1)
{
  char *result; // eax

  result = (char *)FormHeapAlloc(strlen(a1) + 1); /*0x43e35f*/
  strcpy(result, a1); /*0x43e369*/
  return result; /*0x43e37c*/
}
