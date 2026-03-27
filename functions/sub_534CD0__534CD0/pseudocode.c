char *__stdcall sub_534CD0(char *Str)
{
  char *result; // eax
  int i; // esi

  result = Str;
  for ( i = 0; i < 2; ++i )
  {
    result = j__strrchr(result, byte_A56278[i]);
    if ( result )
      ++result;
  }
  return result;
}
