BOOL unknown_libname_194()
{
  unsigned int v0; // kr00_4
  unsigned int v1; // kr04_4
  int savedregs; // [esp+1Ch] [ebp+0h] BYREF

  v0 = __readeflags(); /*0x99caea*/
  __writeeflags(v0 ^ 0x200000); /*0x99caf4*/
  v1 = __readeflags(); /*0x99caf5*/
  if ( v1 != v0 ) /*0x99caf9*/
  {
    __writeeflags(v0); /*0x99cafc*/
    _EAX = 0; /*0x99cafd*/
    __asm { cpuid } /*0x99caff*/
    _EAX = 1; /*0x99cb0d*/
    __asm { cpuid } /*0x99cb12*/
  }
  return unknown_libname_194_::unknown_libname_195((int)&savedregs);
}
