void __thiscall sub_6EC7C0(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = *(this + 0x10); /*0x6ec7c4*/
  if ( v3 != a2 ) /*0x6ec7ce*/
  {
    if ( v3 ) /*0x6ec7d2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x6ec7d8*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x6ec7ee*/
    }
    *(this + 0x10) = a2; /*0x6ec7f2*/
    if ( a2 ) /*0x6ec7f5*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x6ec7fb*/
  }
}
