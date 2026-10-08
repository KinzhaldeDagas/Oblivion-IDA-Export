// positive sp value has been detected, the output may be wrong!
int __stdcall def_97E5FC(int a1, int a2, int a3)
{
  __asm { fstp    st; jumptable 0097E5FC default case } /*0x9801ec*/
  __asm { fstp    st }
  __asm { fstp    st }
  return 1; /*0x9801fd*/
}
