FILE *__cdecl fopen(const char *Filename, const char *Mode)
{
  return _fsopen(Filename, Mode, 0x40);
}
