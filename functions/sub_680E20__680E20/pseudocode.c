void __thiscall sub_680E20(int *this, int a2)
{
  int v3; // esi

  v3 = *this; /*0x680e24*/
  if ( *this != a2 ) /*0x680e2d*/
  {
    if ( v3 ) /*0x680e31*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x680e37*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x680e4d*/
    }
    *this = a2; /*0x680e51*/
    if ( a2 ) /*0x680e53*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x680e59*/
  }
}
