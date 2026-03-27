// positive sp value has been detected, the output may be wrong!
BOOL __usercall unknown_libname_194_::unknown_libname_195@<eax>(int a1@<ebp>)
{
  return (*(_DWORD *)(a1 - 4) & 0x4000000) != 0 && has_osfxsr_set();
}
