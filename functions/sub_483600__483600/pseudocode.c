void __thiscall sub_483600(_DWORD *this)
{
  int v1; // esi

  v1 = *(this + 1);
  if ( v1 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v1 + 4)) )
      (**(void (__thiscall ***)(int, int))v1)(v1, 1);
  }
}
