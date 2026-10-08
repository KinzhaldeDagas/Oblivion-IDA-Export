// Verified cleanup of TESPathGrid.renderNode (+0x1C): resets point render helpers, detaches the generated root from shared path-grid visual state, updates the root node, releases it, and clears the field.
void __thiscall TESPathGrid_ClearRenderedPointGeometry(TESPathGrid *this)
{
  int v2; // esi
  TESPathGridPoint *v3; // ecx
  LONG (__stdcall *v4)(volatile LONG *); // ebx
  void (__thiscall ***v5)(_DWORD, int); // esi
  NiNode *renderNode; // esi
  int v7; // [esp+20h] [ebp-4h] BYREF

  if ( this->renderNode ) /*0x4e5404*/
  {
    v2 = 0; /*0x4e540f*/
    if ( this->pointCount ) /*0x4e5411*/
    {
      do /*0x4e5432*/
      {
        v3 = this->pointArray->data[v2]; /*0x4e541d*/
        if ( v3 ) /*0x4e5422*/
          TESPathGridPoint_ClearRenderNode(v3); // Verified rendered-graph teardown calls TESPathGridPoint_ClearRenderNode for every non-null point before detaching and releasing the pathgrid root NiNode. /*0x4e5424*/
        ++v2; /*0x4e542d*/
      }
      while ( v2 < this->pointCount ); /*0x4e5432*/
    }
    v4 = InterlockedDecrement; /*0x4e543d*/
    if ( unk_B35F88 ) /*0x4e5434*/
    {
      (*(void (__thiscall **)(UInt32, int *, NiNode *))(*(_DWORD *)unk_B35F88 + 0x88))( /*0x4e5456*/
        unk_B35F88,
        &v7,
        this->renderNode);
      if ( v7 ) /*0x4e545e*/
      {
        v5 = (void (__thiscall ***)(_DWORD, int))v7; /*0x4e5460*/
        if ( !v4((volatile LONG *)(v7 + 4)) ) /*0x4e5466*/
          (**v5)(v5, 1); /*0x4e5478*/
      }
      NiAVObject_InitializePropertyState((NiAVObject *)unk_B35F88); /*0x4e5480*/
      NiNode_UpdateDynamicEffectState((NiNode *)unk_B35F88); /*0x4e548b*/
      NiAVObject_UpdateNiAVObject((NiAVObject *)unk_B35F88, 0.0, 0); /*0x4e549e*/
    }
    renderNode = this->renderNode; /*0x4e54a3*/
    if ( renderNode ) /*0x4e54a8*/
    {
      if ( !v4((volatile LONG *)&renderNode->members) ) /*0x4e54ae*/
        renderNode->vtbl->super.super.super.Destructor((NiRefObject *)renderNode, 1); /*0x4e54c0*/
      this->renderNode = 0; /*0x4e54c2*/
    }
  }
}
