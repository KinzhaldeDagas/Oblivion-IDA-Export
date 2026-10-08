void __thiscall sub_4BDDC0(int *this)
{
  int v1; // esi

  v1 = *this; /*0x4bddc1*/
  if ( *this ) /*0x4bddc1*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v1 + 8)) ) /*0x4bddcb*/
    {
      if ( v1 ) /*0x4bddd7*/
        (**(void (__thiscall ***)(int, int))v1)(v1, 1); /*0x4bdde1*/
    }
  }
}
