void __cdecl sub_A16550()
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
  }
}
