void __thiscall sub_499270(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = *(this + 0x42); /*0x499274*/
  if ( v3 != a2 ) /*0x499281*/
  {
    if ( v3 ) /*0x499285*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x49928b*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x4992a1*/
    }
    *(this + 0x42) = a2; /*0x4992a5*/
    if ( a2 ) /*0x4992ab*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x4992b1*/
  }
}
