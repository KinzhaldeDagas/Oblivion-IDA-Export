void __thiscall sub_55CF00(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = *(this + 0x37); /*0x55cf04*/
  if ( v3 != a2 ) /*0x55cf11*/
  {
    if ( v3 ) /*0x55cf15*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x55cf1b*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x55cf31*/
    }
    *(this + 0x37) = a2; /*0x55cf35*/
    if ( a2 ) /*0x55cf3b*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x55cf41*/
  }
}
