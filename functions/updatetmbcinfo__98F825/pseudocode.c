int __updatetmbcinfo()
{
  int v0; // ebp
  int *v1; // edi
  volatile LONG *v3; // esi

  v1 = (int *)_getptd(v0); /*0x98f836*/
  if ( (dword_B318B0 & v1[0x1C]) != 0 && v1[0x1B] ) /*0x98f842*/
    return __updatetmbcinfo_::_LN14_7(v1[0x1A]); /*0x98f849*/
  _lock(0xD); /*0x98f861*/
  v3 = (volatile LONG *)v1[0x1A]; /*0x98f86b*/
  if ( v3 != lpAddend ) /*0x98f877*/
  {
    if ( v3 ) /*0x98f87b*/
    {
      if ( !InterlockedDecrement(v3) && v3 != &dword_B31390 ) /*0x98f88e*/
        free((void *)v3); /*0x98f891*/
    }
    v1[0x1A] = (int)lpAddend; /*0x98f89c*/
    v3 = lpAddend; /*0x98f89f*/
    InterlockedIncrement(lpAddend); /*0x98f8a9*/
  }
  _unlock(0xD); /*0x98f8c2*/
  return __updatetmbcinfo_::_LN14_7((int)v3);
}
