void __thiscall sub_4BDDC0(int *this)
{
  int v1; // esi

  v1 = *this;
  if ( *this )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v1 + 8)) )
    {
      if ( v1 )
        (**(void (__thiscall ***)(int, int))v1)(v1, 1);
    }
  }
}
