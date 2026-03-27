void Interface3dScenegraph_Destructor()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))g_Interface3DScenegraph;
  if ( g_Interface3DScenegraph )
  {
    if ( !InterlockedDecrement((volatile LONG *)(g_Interface3DScenegraph + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
    g_Interface3DScenegraph = 0;
  }
}
