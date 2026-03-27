void sub_73DC60()
{
  int v0; // esi

  v0 = dword_B401AC;
  if ( dword_B401AC )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v0 + 4)) )
    {
      if ( v0 )
        (**(void (__thiscall ***)(int, int))v0)(v0, 1);
    }
    dword_B401AC = 0;
  }
}
