// positive sp value has been detected, the output may be wrong!
char __cdecl def_9A673D(int a1, unsigned int a2)
{
  __asm { fstp    st } /*0x9a7325*/
  _memset(a1, 0, a2); /*0x9a7332*/
  return 0; /*0x9a7344*/
}
