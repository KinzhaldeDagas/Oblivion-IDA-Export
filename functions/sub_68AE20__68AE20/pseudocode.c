void __thiscall sub_68AE20(TravelPath *this, NiPoint3 *position)
{
  BSSimpleList_VoidPtr *p_nodes; // eax
  TravelPathNode *data; // esi

  p_nodes = &this->nodes; /*0x68ae24*/
  if ( this == (TravelPath *)0xFFFFFFFC ) /*0x68ae29*/
  {
    data = 0; /*0x68ae45*/
  }
  else
  {
    while ( p_nodes->firstNode.next ) /*0x68ae35*/
      p_nodes = (BSSimpleList_VoidPtr *)p_nodes->firstNode.next; /*0x68ae3f*/
    data = (TravelPathNode *)p_nodes->firstNode.data; /*0x68ae68*/
  }
  if ( data && DName::status((char *)data) == 1 ) /*0x68ae55*/
    TravelPathNode_SetOwnedPosition(data, position); /*0x68ae5e*/
  else
    TravelPath_AppendDestinationPosition(this, position); /*0x68ae73*/
}
