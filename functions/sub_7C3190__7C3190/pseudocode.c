void __stdcall sub_7C3190(_DWORD *a1)
{
  int v1; // esi

  v1 = a1[2]; /*0x7c3197*/
  if ( v1 ) /*0x7c319e*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v1 + 4)) ) /*0x7c31a4*/
      (**(void (__thiscall ***)(int, int))v1)(v1, 1); /*0x7c31ba*/
    a1[2] = 0; /*0x7c31bc*/
  }
  NiTListNodePool_Release(a1); /*0x7c31c7*/
}
