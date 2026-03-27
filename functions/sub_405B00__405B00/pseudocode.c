void sub_405B00()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))g_InterfaceScenegraph;
  if ( g_InterfaceScenegraph )
  {
    if ( !InterlockedDecrement((volatile LONG *)(g_InterfaceScenegraph + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
    g_InterfaceScenegraph = 0;
  }
}
