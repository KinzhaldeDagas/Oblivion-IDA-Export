void __thiscall sub_6FFFD0(_DWORD *this)
{
  int v2; // esi

  v2 = *(this + 3); /*0x6fffd4*/
  if ( v2 ) /*0x6fffd9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x6fffdf*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6ffff5*/
    *(this + 3) = 0; /*0x6ffff7*/
  }
}
