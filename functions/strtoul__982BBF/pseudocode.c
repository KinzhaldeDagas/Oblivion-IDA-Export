unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  if ( dword_BA9E10 )
    return strtoxl(0, Str, (const char **)EndPtr, Radix, 1);
  else
    return strtoxl((struct localeinfo_struct *)&off_B319A0, Str, (const char **)EndPtr, Radix, 1);
}
