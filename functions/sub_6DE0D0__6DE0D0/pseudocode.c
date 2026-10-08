void __thiscall sub_6DE0D0(unsigned int *this)
{
  int v2; // esi

  FormHeapFree(*this); /*0x6de0d6*/
  FormHeapFree(*(this + 1)); /*0x6de0df*/
  v2 = *(this + 2); /*0x6de0e4*/
  if ( v2 ) /*0x6de0ec*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x6de0f2*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6de108*/
  }
}
