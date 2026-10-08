char *__thiscall TESContainer_MultiplyContents(char *this, int a2)
{
  char *result; // eax

  result = this + 8; /*0x469990*/
  if ( this != (char *)0xFFFFFFF8 ) /*0x469995*/
  {
    do /*0x4699b2*/
    {
      if ( *(_DWORD *)result ) /*0x4699a0*/
        **(_DWORD **)result *= a2; /*0x4699ab*/
      result = *((char **)result + 1); /*0x4699ad*/
    }
    while ( result ); /*0x4699b2*/
  }
  return result; /*0x4699b5*/
}
