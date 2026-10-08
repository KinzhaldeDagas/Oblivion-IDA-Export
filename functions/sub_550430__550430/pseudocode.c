void __thiscall sub_550430(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = *(this + 0x35); /*0x550434*/
  if ( v3 != a2 ) /*0x550441*/
  {
    if ( v3 ) /*0x550445*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x55044b*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x550461*/
    }
    *(this + 0x35) = a2; /*0x550465*/
    if ( a2 ) /*0x55046b*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x550471*/
  }
}
