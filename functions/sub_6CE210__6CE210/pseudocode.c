void __thiscall sub_6CE210(_DWORD *this, int a2, int a3)
{
  int v4; // esi

  v4 = *(this + 0xF); /*0x6ce214*/
  if ( v4 != a2 ) /*0x6ce21e*/
  {
    if ( v4 ) /*0x6ce222*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x6ce228*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6ce23e*/
    }
    *(this + 0xF) = a2; /*0x6ce242*/
    if ( a2 ) /*0x6ce245*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x6ce24b*/
  }
}
