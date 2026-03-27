char __thiscall TESAnimation_HasAnimation(char **this, char *Str2)
{
  char **v2; // esi

  v2 = this + 1;
  if ( !*(this + 2) && !*v2 )
    return 0;
  if ( this == (char **)0xFFFFFFFC )
    return 0;
  while ( _strcmp(*v2, Str2) )
  {
    v2 = (char **)v2[1];
    if ( !v2 )
      return 0;
  }
  return 1;
}
