void sub_7F3BA0()
{
  int v0; // esi

  v0 = dword_B4690C;
  if ( dword_B4690C )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v0 + 4)) )
    {
      if ( v0 )
        (**(void (__thiscall ***)(int, int))v0)(v0, 1);
    }
    dword_B4690C = 0;
  }
}
