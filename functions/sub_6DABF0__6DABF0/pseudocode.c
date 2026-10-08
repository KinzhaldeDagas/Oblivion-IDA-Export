void __thiscall sub_6DABF0(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = *(this + 7); /*0x6dabf4*/
  if ( v3 != a2 ) /*0x6dabfe*/
  {
    if ( v3 ) /*0x6dac02*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x6dac08*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x6dac1e*/
    }
    *(this + 7) = a2; /*0x6dac22*/
    if ( a2 ) /*0x6dac25*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x6dac2b*/
  }
}
