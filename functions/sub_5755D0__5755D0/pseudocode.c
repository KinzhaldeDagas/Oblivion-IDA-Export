bool __thiscall sub_5755D0(char **this, char *Str2)
{
  if ( Str2 && *this )
    return _strcmp(*this, Str2) == 0;
  else
    return 2 * (Str2 == 0) == 1;
}
