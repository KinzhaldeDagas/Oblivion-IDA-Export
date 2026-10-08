_DWORD *__thiscall sub_532DF0(_DWORD *this, int a2)
{
  *this = 0; /*0x532e15*/
  if ( a2 ) /*0x532e21*/
  {
    *this = a2; /*0x532e27*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x532e29*/
  }
  *(this + 1) = 0; /*0x532e31*/
  if ( a2 ) /*0x532e40*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) ) /*0x532e46*/
      (**(void (__thiscall ***)(int, int))a2)(a2, 1); /*0x532e58*/
  }
  return this; /*0x532e5c*/
}
