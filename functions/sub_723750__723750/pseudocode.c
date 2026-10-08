void __thiscall sub_723750(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = *(this + 0x3F); /*0x723754*/
  if ( v3 != a2 ) /*0x723761*/
  {
    if ( v3 ) /*0x723765*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x72376b*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x723781*/
    }
    *(this + 0x3F) = a2; /*0x723785*/
    if ( a2 ) /*0x72378b*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x723791*/
  }
}
