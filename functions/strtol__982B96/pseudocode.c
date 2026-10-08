int __cdecl strtol(const char *Str, char **EndPtr, int Radix)
{
  int v3; // ebx

  if ( dword_BA9E10[0] ) /*0x982b9b*/
    return strtoxl(v3, 0, Str, (const char **)EndPtr, Radix, 0); /*0x982bb5*/
  else
    return strtoxl(v3, (struct localeinfo_struct *)&off_B319A0, Str, (const char **)EndPtr, Radix, 0); /*0x982bb2*/
}
