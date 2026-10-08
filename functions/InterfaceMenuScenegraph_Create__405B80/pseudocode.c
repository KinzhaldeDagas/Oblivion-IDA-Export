SceneGraph *InterfaceMenuScenegraph_Create()
{
  SceneGraph *result; // eax
  SceneGraph *v1; // esi
  int (__thiscall ***v2)(_DWORD, int); // edi

  result = (SceneGraph *)FormHeapAlloc(0xF0u); /*0x405ba8*/
  if ( result ) /*0x405bbe*/
  {
    result = SceneGraph::SceneGraph(result, "Menu", 1u, 0); /*0x405bcb*/
    v1 = result; /*0x405bd0*/
  }
  else
  {
    v1 = 0; /*0x405bd4*/
  }
  v2 = (int (__thiscall ***)(_DWORD, int))MEMORY[0xB333D0]; /*0x405bd6*/
  if ( (SceneGraph *)MEMORY[0xB333D0] != v1 ) /*0x405be6*/
  {
    if ( MEMORY[0xB333D0] ) /*0x405bea*/
    {
      result = (SceneGraph *)InterlockedDecrement((volatile LONG *)(MEMORY[0xB333D0] + 4)); /*0x405bf0*/
      if ( !result ) /*0x405bf8*/
      {
        if ( v2 ) /*0x405bfc*/
          result = (SceneGraph *)(**v2)(v2, 1); /*0x405c06*/
      }
    }
    MEMORY[0xB333D0] = (int)v1; /*0x405c0a*/
    if ( v1 ) /*0x405c10*/
      return (SceneGraph *)InterlockedIncrement((volatile LONG *)&v1->super); /*0x405c16*/
  }
  return result; /*0x405c1c*/
}
