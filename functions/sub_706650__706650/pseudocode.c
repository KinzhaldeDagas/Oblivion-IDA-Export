void sub_706650()
{
  int v0; // esi

  v0 = dword_B3F980;
  if ( dword_B3F980 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v0 + 4)) )
    {
      if ( v0 )
        (**(void (__thiscall ***)(int, int))v0)(v0, 1);
    }
    dword_B3F980 = 0;
  }
}
