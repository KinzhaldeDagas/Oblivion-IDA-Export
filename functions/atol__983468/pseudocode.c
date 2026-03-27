int __cdecl atol(const char *Str)
{
  return strtol(Str, 0, 0xA);
}
