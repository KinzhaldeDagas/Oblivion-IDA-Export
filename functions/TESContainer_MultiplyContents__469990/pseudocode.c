char *__thiscall TESContainer_MultiplyContents(char *this, int a2)
{
  char *result; // eax

  result = this + 8;
  if ( this != (char *)0xFFFFFFF8 )
  {
    do
    {
      if ( *(_DWORD *)result )
        **(_DWORD **)result *= a2;
      result = *((char **)result + 1);
    }
    while ( result );
  }
  return result;
}
