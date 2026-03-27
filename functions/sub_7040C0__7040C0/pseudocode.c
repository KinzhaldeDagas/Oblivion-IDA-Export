void sub_7040C0()
{
  int v0; // esi

  v0 = dword_B3F974;
  if ( dword_B3F974 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v0 + 4)) )
    {
      if ( v0 )
        (**(void (__thiscall ***)(int, int))v0)(v0, 1);
    }
    dword_B3F974 = 0;
  }
}
