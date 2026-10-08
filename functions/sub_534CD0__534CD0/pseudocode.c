char *__stdcall sub_534CD0(char *Str)
{
  char *result; // eax
  int i; // esi

  result = Str; /*0x534cd0*/
  for ( i = 0; i < 2; ++i ) /*0x534cd5*/
  {
    result = j__strrchr(result, byte_A56278[i]); /*0x534ce0*/
    if ( result ) /*0x534cea*/
      ++result; /*0x534cec*/
  }
  return result; /*0x534cf7*/
}
