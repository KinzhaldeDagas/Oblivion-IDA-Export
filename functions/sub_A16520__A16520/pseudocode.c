void __cdecl sub_A16520()
{
  SceneGraph *v0; // esi

  v0 = g_worldScenegraph;
  if ( g_worldScenegraph )
  {
    if ( !InterlockedDecrement((volatile LONG *)&g_worldScenegraph->super) )
    {
      if ( v0 )
        (*(void (__thiscall **)(SceneGraph *, int))v0->vftable)(v0, 1);
    }
  }
}
