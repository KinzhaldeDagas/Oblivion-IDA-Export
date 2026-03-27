void sub_891010()
{
  UInt32 v0; // esi

  v0 = dword_BA7A64;
  if ( dword_BA7A64 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v0 + 4)) )
    {
      if ( v0 )
        (**(void (__thiscall ***)(UInt32, int))v0)(v0, 1);
    }
    dword_BA7A64 = 0;
  }
}
