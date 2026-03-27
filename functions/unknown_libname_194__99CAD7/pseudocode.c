int unknown_libname_194()
{
  unsigned int v0; // kr00_4
  unsigned int v2; // kr04_4

  v0 = __readeflags();
  _ECX = v0;
  __writeeflags(v0 ^ 0x200000);
  v2 = __readeflags();
  _EDX = v2 - v0;
  if ( v2 != v0 )
  {
    __writeeflags(v0);
    _EAX = 0;
    __asm { cpuid }
    _EAX = 1;
    __asm { cpuid }
  }
  return unknown_libname_194_::unknown_libname_195(_ECX, _EDX);
}
