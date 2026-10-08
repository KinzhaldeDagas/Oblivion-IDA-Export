// Verified clears TravelPath.nodes at +4: frees owned kind-1 position payloads, frees every TravelPathNode record and BSSimpleList link, but leaves kind-0 TESObjectREFR payloads unowned/unreleased.
void __thiscall TravelPath_ClearNodes(TravelPath *this)
{
  BSSimpleList_VoidPtr *p_nodes; // esi
  TravelPathNode *data; // edi
  BSSimpleList_VoidPtr::NodeVoid *next; // eax

  p_nodes = &this->nodes; /*0x689a01*/
  if ( this != (TravelPath *)0xFFFFFFFC ) /*0x689a06*/
  {
    while ( !BSSimpleList_IsEmpty(p_nodes) ) /*0x689a19*/
    {
      data = (TravelPathNode *)p_nodes->firstNode.data; /*0x689a1b*/
      if ( p_nodes->firstNode.data ) /*0x689a1b*/
      {
        TravelPathNode_FreeOwnedPosition((TravelPathNode *)p_nodes->firstNode.data); /*0x689a23*/
        FormHeapFree((unsigned int)data); /*0x689a29*/
      }
      next = p_nodes->firstNode.next; /*0x689a31*/
      if ( next ) /*0x689a36*/
      {
        p_nodes->firstNode.next = next->next; /*0x689a3b*/
        p_nodes->firstNode.data = next->data; /*0x689a41*/
        FormHeapFree((unsigned int)next); /*0x689a43*/
      }
      else
      {
        p_nodes->firstNode.data = 0; /*0x689a4d*/
      }
    }
  }
}
