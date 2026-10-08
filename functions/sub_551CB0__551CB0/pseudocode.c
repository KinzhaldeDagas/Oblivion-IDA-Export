void __stdcall sub_551CB0(unsigned int a1)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebx
  int v2; // esi
  int v3; // esi

  v1 = InterlockedDecrement; /*0x551cb1*/
  v2 = *(_DWORD *)(a1 + 8); /*0x551cbd*/
  if ( v2 ) /*0x551cc2*/
  {
    if ( !v1((volatile LONG *)(v2 + 4)) ) /*0x551cc8*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x551cda*/
    *(_DWORD *)(a1 + 8) = 0; /*0x551cdc*/
  }
  if ( a1 ) /*0x551ce5*/
  {
    v3 = *(_DWORD *)(a1 + 8); /*0x551ce7*/
    if ( v3 ) /*0x551cec*/
    {
      if ( !v1((volatile LONG *)(v3 + 4)) ) /*0x551cf2*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x551d04*/
    }
    FormHeapFree(a1); /*0x551d07*/
  }
}
