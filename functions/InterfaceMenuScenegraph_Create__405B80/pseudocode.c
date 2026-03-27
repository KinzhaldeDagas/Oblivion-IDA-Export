SceneGraph *InterfaceMenuScenegraph_Create()
{
  SceneGraph *result; // eax
  SceneGraph *v1; // esi
  int (__thiscall ***v2)(_DWORD, int); // edi

  result = (SceneGraph *)FormHeapAlloc(0xF0u);
  if ( result )
  {
    result = SceneGraph::SceneGraph(result, "Menu", 1u, 0);
    v1 = result;
  }
  else
  {
    v1 = 0;
  }
  v2 = (int (__thiscall ***)(_DWORD, int))g_InterfaceScenegraph;
  if ( (SceneGraph *)g_InterfaceScenegraph != v1 )
  {
    if ( g_InterfaceScenegraph )
    {
      result = (SceneGraph *)InterlockedDecrement((volatile LONG *)(g_InterfaceScenegraph + 4));
      if ( !result )
      {
        if ( v2 )
          result = (SceneGraph *)(**v2)(v2, 1);
      }
    }
    g_InterfaceScenegraph = (int)v1;
    if ( v1 )
      return (SceneGraph *)InterlockedIncrement((volatile LONG *)&v1->super);
  }
  return result;
}
