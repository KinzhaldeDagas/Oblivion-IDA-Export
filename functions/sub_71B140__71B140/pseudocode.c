void __thiscall sub_71B140(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = *(this + 0x13); /*0x71b144*/
  if ( v3 != a2 ) /*0x71b14e*/
  {
    if ( v3 ) /*0x71b152*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x71b158*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x71b16e*/
    }
    *(this + 0x13) = a2; /*0x71b172*/
    if ( a2 ) /*0x71b175*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x71b17b*/
  }
}
