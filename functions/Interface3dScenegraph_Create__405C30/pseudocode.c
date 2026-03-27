LONG Interface3dScenegraph_Create()
{
  SceneGraph *v0; // eax
  SceneGraph *v1; // esi
  LONG result; // eax
  int (__thiscall ***v3)(_DWORD, int); // edi

  v0 = (SceneGraph *)FormHeapAlloc(0xF0u);
  if ( v0 )
    v1 = SceneGraph::SceneGraph(v0, "3DMenu", 0, 0);
  else
    v1 = 0;
  result = g_Interface3DScenegraph;
  if ( (SceneGraph *)g_Interface3DScenegraph != v1 )
  {
    if ( g_Interface3DScenegraph )
    {
      v3 = (int (__thiscall ***)(_DWORD, int))g_Interface3DScenegraph;
      result = InterlockedDecrement((volatile LONG *)(g_Interface3DScenegraph + 4));
      if ( !result )
      {
        if ( v3 )
          result = (**v3)(v3, 1);
      }
    }
    g_Interface3DScenegraph = (int)v1;
    if ( v1 )
      return InterlockedIncrement((volatile LONG *)&v1->super);
  }
  return result;
}
