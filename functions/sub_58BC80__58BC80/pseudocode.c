int __thiscall sub_58BC80(char *this, char *Str2)
{
  char *v2; // esi
  char *v3; // eax
  int v4; // eax

  v2 = this + 4;
  if ( this != (char *)0xFFFFFFFC )
  {
    while ( *(_DWORD *)v2 )
    {
      if ( Str2 && (v3 = **(char ***)v2) != 0 )
        v4 = _strcmp(v3, Str2);
      else
        v4 = 2 * (Str2 == 0) - 1;
      if ( !v4 )
        return *(_DWORD *)v2;
      v2 = *((char **)v2 + 1);
      if ( !v2 )
        return 0;
    }
  }
  return 0;
}
