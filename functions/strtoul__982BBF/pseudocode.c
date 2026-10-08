unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  int v3; // ebx

  if ( dword_BA9E10[0] ) /*0x982bc2*/
    return strtoxl(v3, 0, Str, (const char **)EndPtr, Radix, 1); /*0x982bdf*/
  else
    return strtoxl(v3, (struct localeinfo_struct *)&off_B319A0, Str, (const char **)EndPtr, Radix, 1); /*0x982bdb*/
}
