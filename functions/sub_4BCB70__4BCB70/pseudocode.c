int *__thiscall sub_4BCB70(int *this, int a2)
{
  int v3; // esi

  v3 = *this; /*0x4bcb79*/
  if ( *this != a2 ) /*0x4bcb7d*/
  {
    if ( v3 ) /*0x4bcb81*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 8)) ) /*0x4bcb87*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x4bcb9d*/
    }
    *this = a2; /*0x4bcba1*/
    if ( a2 ) /*0x4bcba3*/
      InterlockedIncrement((volatile LONG *)(a2 + 8)); /*0x4bcba9*/
  }
  return this; /*0x4bcbb1*/
}
