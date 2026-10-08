void __thiscall sub_591A80(_DWORD *this, int a2)
{
  int v3; // edi
  LONG (__stdcall *v4)(volatile LONG *); // ebp

  Tile_SetString(this, (_DWORD *)0xFE6, EmptyString); /*0x591ab8*/
  v3 = *(this + 0x11); /*0x591abd*/
  v4 = InterlockedDecrement; /*0x591ac6*/
  if ( v3 != a2 ) /*0x591acc*/
  {
    if ( v3 ) /*0x591ad0*/
    {
      if ( !v4((volatile LONG *)(v3 + 4)) ) /*0x591ad6*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x591ae8*/
    }
    *(this + 0x11) = a2; /*0x591aec*/
    if ( a2 ) /*0x591aef*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x591af5*/
  }
  *(this + 0xB) |= 0x30u; /*0x591afb*/
  if ( a2 ) /*0x591b09*/
  {
    if ( !v4((volatile LONG *)(a2 + 4)) ) /*0x591b0f*/
      (**(void (__thiscall ***)(int, int))a2)(a2, 1); /*0x591b1d*/
  }
}
