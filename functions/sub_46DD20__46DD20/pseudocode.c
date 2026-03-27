char __thiscall sub_46DD20(char **this, char *Str2)
{
  char **v2; // esi

  v2 = this + 1;
  if ( !*(this + 2) && !*v2 || !Str2 || this == (char **)0xFFFFFFFC )
    return 0;
  while ( !*v2 || _strcmp(*v2, Str2) )
  {
    v2 = (char **)v2[1];
    if ( !v2 )
      return 0;
  }
  return 1;
}
