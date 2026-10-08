void __thiscall sub_4CA340(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = *(this + 0x30); /*0x4ca344*/
  if ( v3 != a2 ) /*0x4ca351*/
  {
    if ( v3 ) /*0x4ca355*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x4ca35b*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x4ca371*/
    }
    *(this + 0x30) = a2; /*0x4ca375*/
    if ( a2 ) /*0x4ca37b*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x4ca381*/
  }
}
