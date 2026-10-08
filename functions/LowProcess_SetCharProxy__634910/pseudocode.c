void __thiscall LowProcess_SetCharProxy(HighProcess *this, volatile LONG *a2)
{
  volatile LONG *charProxy; // esi
  LONG (__stdcall *v4)(volatile LONG *); // ebp

  charProxy = (volatile LONG *)this->charProxy; /*0x634936*/
  v4 = InterlockedDecrement; /*0x634942*/
  if ( charProxy != a2 ) /*0x634950*/
  {
    if ( charProxy ) /*0x634954*/
    {
      if ( !v4(charProxy + 1) ) /*0x63495a*/
        (**(void (__thiscall ***)(volatile LONG *, int))charProxy)(charProxy, 1); /*0x63496c*/
    }
    this->charProxy = (bhkCharacterProxy *)a2; /*0x634970*/
    if ( a2 ) /*0x634976*/
      InterlockedIncrement(a2 + 1); /*0x63497c*/
  }
  if ( a2 ) /*0x63498c*/
  {
    if ( !v4(a2 + 1) ) /*0x634992*/
      (**(void (__thiscall ***)(volatile LONG *, int))a2)(a2, 1); /*0x6349a0*/
  }
}
