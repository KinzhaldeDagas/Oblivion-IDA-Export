void __thiscall sub_608AE0(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = *(this + 0x23); /*0x608ae4*/
  if ( v3 != a2 ) /*0x608af1*/
  {
    if ( v3 ) /*0x608af5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x608afb*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x608b11*/
    }
    *(this + 0x23) = a2; /*0x608b15*/
    if ( a2 ) /*0x608b1b*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x608b21*/
  }
}
