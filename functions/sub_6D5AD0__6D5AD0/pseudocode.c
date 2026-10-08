void __thiscall sub_6D5AD0(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = *(this + 0xB); /*0x6d5ad4*/
  if ( v3 != a2 ) /*0x6d5ade*/
  {
    if ( v3 ) /*0x6d5ae2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x6d5ae8*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x6d5afe*/
    }
    *(this + 0xB) = a2; /*0x6d5b02*/
    if ( a2 ) /*0x6d5b05*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x6d5b0b*/
  }
}
