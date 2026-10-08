// Verified: removes the existing link item from AStarWorldNodeList and reinserts it according to its updated fitness, allowing the sorted open list to reflect an improved score.
void __thiscall AStarWorldNodeList_ReinsertByFitness(AStarWorldNodeList *this, TravelPathSpaceDoorLink *node)
{
  TravelPathSpaceDoorLink *v2; // edi

  v2 = node; /*0x680c62*/
  if ( node ) /*0x680c6a*/
  {
    NiTPointerList_RemoveByData(this, (void **)&node); /*0x680c71*/
    AStarWorldNodeList_InsertByFitness(this, v2); /*0x680c79*/
  }
}
