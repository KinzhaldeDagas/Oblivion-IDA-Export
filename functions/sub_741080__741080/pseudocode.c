void sub_741080()
{
  int v0; // esi

  v0 = dword_B401FC;
  if ( dword_B401FC )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v0 + 4)) )
    {
      if ( v0 )
        (**(void (__thiscall ***)(int, int))v0)(v0, 1);
    }
    dword_B401FC = 0;
  }
}
