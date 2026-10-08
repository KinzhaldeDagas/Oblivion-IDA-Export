// Renderer visible-array submission helper. AddRefs the installed accumulator and calls its +0x54 submit entry; without an accumulator, directly renders each visible NiGeometry.
//
// CULLING audit 2026-09-27 (observed Oblivion behavior): Array submission endpoint: retains current accumulator and calls its array entry +0x54; without accumulator, iterates UInt32 count at array+4 over geometry pointers from +0 and directly calls each geometry Render(+0x84). No six-plane testing occurs here. Individual draw and array-queue observation must distinguish these branches.
//
// CULLING documentation correction 2026-09-27: bounded direct-xref query currently reports caller 0x70C064 in array submit/flush helper. This is static direct-call evidence only, not proof against indirect or plugin calls. Keep pass/array ownership explicit in any observer.
void __cdecl NiRenderer_SubmitVisibleGeometryArray(CullingVisibleGeometryArray *visibleArray)
{
  NiRenderer *v1; // ebp
  volatile LONG *accumulator; // esi
  unsigned int size; // edi
  unsigned int i; // esi
  volatile LONG *v5; // [esp+14h] [ebp-10h]

  v1 = (NiRenderer *)renderer; /*0x70bf55*/
  if ( renderer ) /*0x70bf55*/
  {
    accumulator = (volatile LONG *)v1->members.accumulator; /*0x70bf63*/
    v5 = accumulator; /*0x70bf68*/
    if ( accumulator ) /*0x70bf6c*/
    {
      InterlockedIncrement(accumulator + 1); /*0x70bf72*/
      (*(void (__thiscall **)(volatile LONG *, CullingVisibleGeometryArray *))(*accumulator + 0x54))( /*0x70bf90*/
        accumulator,
        visibleArray);
    }
    else
    {
      size = visibleArray->size; /*0x70bf98*/
      for ( i = 0; i < size; ++i ) /*0x70bf9f*/
        visibleArray->data[i]->__vftable->Render(visibleArray->data[i], v1); /*0x70bfaf*/
      accumulator = v5; /*0x70bfb8*/
    }
    if ( accumulator ) /*0x70bfc6*/
    {
      if ( !InterlockedDecrement(accumulator + 1) ) /*0x70bfcc*/
        (**(void (__thiscall ***)(volatile LONG *, int))accumulator)(accumulator, 1); /*0x70bfde*/
    }
  }
}
