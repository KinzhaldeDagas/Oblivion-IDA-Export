int __thiscall BSStringT_StrCmp__(char **this, char *Str2, char a3)
{
  char *v3; // eax

  if ( !Str2 )
    return 2 * (Str2 == 0) - 1;
  v3 = *this;
  if ( !*this )
    return 2 * (Str2 == 0) - 1;
  if ( a3 )
    return _strcmp(v3, Str2);
  return strcmp(v3, Str2);
}
