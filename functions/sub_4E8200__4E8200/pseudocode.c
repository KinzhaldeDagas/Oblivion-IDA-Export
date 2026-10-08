// Verified point cleanup called before freeing persistent or temporary TESPathGridPoint nodes: frees adjacency-list chain at +0x24, clears the per-point renderNode at +0x28, decrements g_PathGridPointLiveCount, and on the last node releases both shared marker-template references. It does not free the point allocation itself.
void __thiscall TESPathGridPoint_Cleanup(TESPathGridPoint *this)
{
  BSSimpleList_VoidPtr::NodeVoid *next; // edi
  NiAVObject *v4; // edi
  LONG (__stdcall *v5)(volatile LONG *); // ebx
  NiAVObject *v6; // edi

  if ( this->connections.firstNode.next ) /*0x4e822d*/
  {
    do /*0x4e824a*/
    {
      next = this->connections.firstNode.next->next; /*0x4e8239*/
      FormHeapFree((unsigned int)this->connections.firstNode.next); /*0x4e823d*/
      this->connections.firstNode.next = next; /*0x4e8247*/
    }
    while ( next ); /*0x4e824a*/
  }
  this->connections.firstNode.data = 0; /*0x4e824e*/
  TESPathGridPoint_ClearRenderNode(this); /*0x4e8251*/
  if ( g_PathGridPointLiveCount-- == 1 ) /*0x4e8256*/
  {
    v4 = g_PathGridPointMarkerTemplateEvenZ; /*0x4e825f*/
    v5 = InterlockedDecrement; /*0x4e8267*/
    if ( g_PathGridPointMarkerTemplateEvenZ ) /*0x4e825f*/
    {
      if ( !v5((volatile LONG *)&v4->members) ) /*0x4e8273*/
      {
        if ( v4 ) /*0x4e827b*/
          v4->vtbl->super.super.Destructor((NiRefObject *)v4, 1); /*0x4e8285*/
      }
      g_PathGridPointMarkerTemplateEvenZ = 0; /*0x4e8287*/
    }
    v6 = g_PathGridPointMarkerTemplateOddZ; /*0x4e828d*/
    if ( g_PathGridPointMarkerTemplateOddZ ) /*0x4e828d*/
    {
      if ( !v5((volatile LONG *)&v6->members) ) /*0x4e829b*/
      {
        if ( v6 ) /*0x4e82a3*/
          v6->vtbl->super.super.Destructor((NiRefObject *)v6, 1); /*0x4e82ad*/
      }
      g_PathGridPointMarkerTemplateOddZ = 0; /*0x4e82af*/
    }
  }
  Shared_NoOpVirtual_60D0A0(this); /*0x4e82bf*/
}
