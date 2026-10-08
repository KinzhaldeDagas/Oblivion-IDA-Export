void __thiscall sub_499360(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = *(this + 0x44); /*0x499364*/
  if ( v3 != a2 ) /*0x499371*/
  {
    if ( v3 ) /*0x499375*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x49937b*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x499391*/
    }
    *(this + 0x44) = a2; /*0x499395*/
    if ( a2 ) /*0x49939b*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x4993a1*/
  }
}
