// Verified appends the final destination as a kind-1 TravelPathNode with its own copied NiPoint3 payload, even if low-path A* produced no reference nodes.
void __thiscall TravelPath_AppendDestinationPosition(TravelPath *this, const NiPoint3 *position)
{
  TravelPathNode *v3; // eax
  TravelPathNode *v4; // esi

  v3 = (TravelPathNode *)FormHeapAlloc(8u); /*0x68a2a7*/
  v4 = 0; /*0x68a2b3*/
  if ( v3 ) /*0x68a2bb*/
    v4 = TravelPathNode_Init(v3); /*0x68a2c4*/
  TravelPathNode_SetKind(v4, TravelPathNodeKind_Position); /*0x68a2d2*/
  TravelPathNode_SetOwnedPosition(v4, position); /*0x68a2de*/
  BSSimpleList_PushBack(&this->nodes.firstNode.data, (int)v4); /*0x68a2e7*/
}
