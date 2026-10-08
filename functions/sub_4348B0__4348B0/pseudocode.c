int *__thiscall sub_4348B0(int *this, int *a2)
{
  int v3; // esi
  int v4; // eax
  bool v5; // zf

  v3 = *this; /*0x4348b9*/
  if ( *this != *a2 ) /*0x4348bd*/
  {
    if ( v3 ) /*0x4348c1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 8)) ) /*0x4348c7*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x4348dd*/
    }
    v4 = *a2; /*0x4348df*/
    v5 = *a2 == 0; /*0x4348e1*/
    *this = *a2; /*0x4348e3*/
    if ( !v5 ) /*0x4348e5*/
      InterlockedIncrement((volatile LONG *)(v4 + 8)); /*0x4348eb*/
  }
  return this; /*0x4348f3*/
}
