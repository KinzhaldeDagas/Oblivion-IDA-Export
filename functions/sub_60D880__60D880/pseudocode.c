void __stdcall sub_60D880(int a1)
{
  if ( a1 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(a1 + 4)) )
      (**(void (__thiscall ***)(int, int))a1)(a1, 1);
  }
}
