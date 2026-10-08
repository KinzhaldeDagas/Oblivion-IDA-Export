_DWORD *__thiscall sub_405070(_DWORD *this, int a2)
{
  *this = a2; /*0x405079*/
  if ( a2 ) /*0x40507b*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x405081*/
  return this; /*0x405089*/
}
