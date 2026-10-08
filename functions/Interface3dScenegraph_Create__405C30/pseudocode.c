LONG Interface3dScenegraph_Create()
{
  SceneGraph *v0; // eax
  SceneGraph *v1; // esi
  LONG result; // eax
  int (__thiscall ***v3)(_DWORD, int); // edi

  v0 = (SceneGraph *)FormHeapAlloc(0xF0u); /*0x405c58*/
  if ( v0 ) /*0x405c6e*/
    v1 = SceneGraph::SceneGraph(v0, "3DMenu", 0, 0); /*0x405c80*/
  else
    v1 = 0; /*0x405c84*/
  result = MEMORY[0xB333D4]; /*0x405c86*/
  if ( (SceneGraph *)MEMORY[0xB333D4] != v1 ) /*0x405c95*/
  {
    if ( MEMORY[0xB333D4] ) /*0x405c99*/
    {
      v3 = (int (__thiscall ***)(_DWORD, int))MEMORY[0xB333D4]; /*0x405c9b*/
      result = InterlockedDecrement((volatile LONG *)(MEMORY[0xB333D4] + 4)); /*0x405ca1*/
      if ( !result ) /*0x405ca9*/
      {
        if ( v3 ) /*0x405cad*/
          result = (**v3)(v3, 1); /*0x405cb7*/
      }
    }
    MEMORY[0xB333D4] = (int)v1; /*0x405cbb*/
    if ( v1 ) /*0x405cc1*/
      return InterlockedIncrement((volatile LONG *)&v1->super); /*0x405cc7*/
  }
  return result; /*0x405ccd*/
}
