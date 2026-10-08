// Verified debug-render root setter. Updates g_PathGridDebugRenderingEnabled. Enabling creates a shared NiNode, attaches DebugRender_GetOrCreateVertexColorProperty, and adds the root to TES/ObjectLODRoot; disabling removes the root, clears its child objects, releases it, and nulls g_PathGridDebugRenderRoot. Called by TESPathGrid_ToggleDebugRendering before per-cell render rebuild/clear.
// local variable allocation has failed, the output may be wrong!
void __cdecl TESPathGrid_SetDebugRenderingEnabled(bool enabled)
{
  bool v1; // al
  NiNode *v2; // eax
  NiNode *v3; // eax
  NiNode *v4; // esi
  BSShaderProperty *DebugVertexColorProperty; // eax
  LONG (__stdcall *v6)(volatile LONG *); // edi
  void (__thiscall ***v7)(_DWORD, int); // esi
  NiNode *v8; // esi

  v1 = enabled; /*0x4e76f2*/
  if ( g_PathGridDebugRenderingEnabled != enabled ) /*0x4e76fc*/
  {
    g_PathGridDebugRenderingEnabled = enabled; /*0x4e7704*/
    if ( v1 ) /*0x4e7709*/
    {
      v2 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4e7710*/
      *(_DWORD *)&enabled = v2; /*0x4e7718*/
      if ( v2 ) /*0x4e7726*/
        v3 = NiNode::NiNode(v2, 0); /*0x4e772c*/
      else
        v3 = 0; /*0x4e7733*/
      NiSmartPointer_Set__((Ni2DBuffer **)&g_PathGridDebugRenderRoot, (Ni2DBuffer *)v3); /*0x4e7743*/
      v4 = g_PathGridDebugRenderRoot; /*0x4e7748*/
      DebugVertexColorProperty = (BSShaderProperty *)DebugRender_GetOrCreateVertexColorProperty(); /*0x4e774e*/
      sub_405680(v4, DebugVertexColorProperty); /*0x4e7756*/
      ((void (__thiscall *)(NiNode *, NiNode *, int))MEMORY[0xB333A0]->ObjectLODRoot->vtbl->AddObject)( /*0x4e7773*/
        MEMORY[0xB333A0]->ObjectLODRoot,
        g_PathGridDebugRenderRoot,
        1);
    }
    else
    {
      MEMORY[0xB333A0]->ObjectLODRoot->vtbl->RemoveObject( /*0x4e77a2*/
        MEMORY[0xB333A0]->ObjectLODRoot,
        (NiAVObject **)&enabled,
        (NiAVObject *)g_PathGridDebugRenderRoot);
      v6 = InterlockedDecrement; /*0x4e77aa*/
      if ( enabled ) /*0x4e77b0*/
      {
        v7 = (void (__thiscall ***)(_DWORD, int))enabled; /*0x4e77b2*/
        if ( !v6((volatile LONG *)(enabled + 4)) ) /*0x4e77b8*/
          (**v7)(v7, 1); /*0x4e77ca*/
      }
      NiTObjectArray_ClearAndRelease(&g_PathGridDebugRenderRoot->members.children); /*0x4e77d8*/
      v8 = g_PathGridDebugRenderRoot; /*0x4e77dd*/
      if ( g_PathGridDebugRenderRoot ) /*0x4e77dd*/
      {
        if ( !v6((volatile LONG *)&v8->members) ) /*0x4e77eb*/
        {
          if ( v8 ) /*0x4e77f3*/
            v8->vtbl->super.super.super.Destructor((NiRefObject *)v8, 1); /*0x4e77fd*/
        }
        g_PathGridDebugRenderRoot = 0; /*0x4e77ff*/
      }
    }
  }
}
