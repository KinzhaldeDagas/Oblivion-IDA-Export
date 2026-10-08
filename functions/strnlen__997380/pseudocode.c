size_t __cdecl strnlen(const char *Str, size_t MaxCount)
{
  size_t result; // rax

  LODWORD(result) = 0; /*0x997380*/
  if ( (_DWORD)MaxCount ) /*0x997386*/
  {
    do /*0x997397*/
    {
      if ( !*Str ) /*0x99738c*/
        break; /*0x99738f*/
      LODWORD(result) = result + 1; /*0x997391*/
      ++Str; /*0x997392*/
    }
    while ( (unsigned int)result < (unsigned int)MaxCount ); /*0x997397*/
  }
  return result; /*0x997399*/
}
