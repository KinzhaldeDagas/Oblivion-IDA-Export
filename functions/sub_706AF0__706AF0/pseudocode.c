void sub_706AF0()
{
  int v0; // esi

  v0 = dword_B3F984;
  if ( dword_B3F984 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v0 + 4)) )
    {
      if ( v0 )
        (**(void (__thiscall ***)(int, int))v0)(v0, 1);
    }
    dword_B3F984 = 0;
  }
}
