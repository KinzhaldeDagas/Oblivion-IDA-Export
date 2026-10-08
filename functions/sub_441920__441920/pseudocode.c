void __thiscall sub_441920(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = *(this + 5); /*0x441924*/
  if ( v3 != a2 ) /*0x44192e*/
  {
    if ( v3 ) /*0x441932*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x441938*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x44194e*/
    }
    *(this + 5) = a2; /*0x441952*/
    if ( a2 ) /*0x441955*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x44195b*/
  }
}
