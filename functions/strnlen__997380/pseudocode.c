size_t __cdecl strnlen(const char *Str, size_t MaxCount)
{
  size_t result; // rax

  LODWORD(result) = 0;
  if ( (_DWORD)MaxCount )
  {
    do
    {
      if ( !*Str )
        break;
      LODWORD(result) = result + 1;
      ++Str;
    }
    while ( (unsigned int)result < (unsigned int)MaxCount );
  }
  return result;
}
