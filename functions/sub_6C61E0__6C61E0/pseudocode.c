void __thiscall sub_6C61E0(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = *(this + 0xD); /*0x6c61e4*/
  if ( v3 != a2 ) /*0x6c61ee*/
  {
    if ( v3 ) /*0x6c61f2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x6c61f8*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x6c620e*/
    }
    *(this + 0xD) = a2; /*0x6c6212*/
    if ( a2 ) /*0x6c6215*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x6c621b*/
  }
}
