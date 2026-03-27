void __cdecl sub_A270A0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))RenderWindowNiNode;
  if ( RenderWindowNiNode )
  {
    if ( !InterlockedDecrement((volatile LONG *)(RenderWindowNiNode + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
