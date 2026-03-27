int __cdecl _mbstok_l(char *Str, char *Delim, struct localeinfo_struct *a3)
{
  int v3; // eax

  v3 = _getptd();
  return _mbstok_s_l(Str, Delim, (char **)(v3 + 0x20), a3);
}
