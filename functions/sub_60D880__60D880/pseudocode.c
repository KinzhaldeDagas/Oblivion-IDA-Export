void __stdcall sub_60D880(int a1)
{
  if ( a1 ) /*0x60d887*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(a1 + 4)) ) /*0x60d88d*/
      (**(void (__thiscall ***)(int, int))a1)(a1, 1); /*0x60d89f*/
  }
}
