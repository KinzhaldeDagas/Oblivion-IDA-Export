int *__thiscall sub_8C6880(int *this, int *a2)
{
  int v3; // esi
  int v4; // eax
  bool v5; // zf

  v3 = *this; /*0x8c6889*/
  if ( *this != *a2 ) /*0x8c688d*/
  {
    if ( v3 ) /*0x8c6891*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x8c6897*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x8c68ad*/
    }
    v4 = *a2; /*0x8c68af*/
    v5 = *a2 == 0; /*0x8c68b1*/
    *this = *a2; /*0x8c68b3*/
    if ( !v5 ) /*0x8c68b5*/
      InterlockedIncrement((volatile LONG *)(v4 + 4)); /*0x8c68bb*/
  }
  *(this + 1) = a2[1]; /*0x8c68c4*/
  return this; /*0x8c68c9*/
}
