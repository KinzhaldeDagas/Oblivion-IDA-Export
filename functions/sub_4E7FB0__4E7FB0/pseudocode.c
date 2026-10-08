// Verified removes reciprocal PathGrid adjacency at a neighbor position: searches this point's connection list by each neighbor's NiPoint3 within fConstant_2 tolerance, removes this point from that neighbor's list, then removes/frees the local connection entry.
void __thiscall TESPathGridPoint_RemoveNeighborAtPosition(TESPathGridPoint *this, const NiPoint3 *position)
{
  BSSimpleList_VoidPtr *p_connections; // esi
  int *v4; // ebx
  int data; // edi
  BSSimpleList_VoidPtr::NodeVoid *next; // eax

  p_connections = &this->connections; /*0x4e7fb5*/
  v4 = 0; /*0x4e7fb8*/
  if ( this != (TESPathGridPoint *)0xFFFFFFE0 ) /*0x4e7fbc*/
  {
    do /*0x4e8031*/
    {
      if ( !p_connections->firstNode.next && !p_connections->firstNode.data ) /*0x4e7fc6*/
        break; /*0x4e7fc9*/
      data = (int)p_connections->firstNode.data; /*0x4e7fcb*/
      if ( sub_47D810((float *)p_connections->firstNode.data + 5, &position->x, fConstant_2) ) /*0x4e7fe0*/
      {
        BSSimpleList_Remove((int *)(data + 0x20), (int)this); /*0x4e7ff0*/
        if ( v4 ) /*0x4e7ff7*/
        {
          BSSimpleList_Remove(v4, data); /*0x4e7ffc*/
          p_connections = (BSSimpleList_VoidPtr *)v4[1]; /*0x4e8001*/
        }
        else
        {
          next = p_connections->firstNode.next; /*0x4e8006*/
          if ( next ) /*0x4e800b*/
          {
            p_connections->firstNode.next = next->next; /*0x4e8010*/
            p_connections->firstNode.data = next->data; /*0x4e8016*/
            FormHeapFree((unsigned int)next); /*0x4e8018*/
          }
          else
          {
            p_connections->firstNode.data = 0; /*0x4e8022*/
          }
        }
      }
      else
      {
        v4 = (int *)p_connections; /*0x4e802a*/
        p_connections = (BSSimpleList_VoidPtr *)p_connections->firstNode.next; /*0x4e802c*/
      }
    }
    while ( p_connections ); /*0x4e8031*/
  }
}
