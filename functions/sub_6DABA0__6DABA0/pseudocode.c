void __thiscall sub_6DABA0(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = *(this + 6); /*0x6daba4*/
  if ( v3 != a2 ) /*0x6dabae*/
  {
    if ( v3 ) /*0x6dabb2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x6dabb8*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x6dabce*/
    }
    *(this + 6) = a2; /*0x6dabd2*/
    if ( a2 ) /*0x6dabd5*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x6dabdb*/
  }
}
