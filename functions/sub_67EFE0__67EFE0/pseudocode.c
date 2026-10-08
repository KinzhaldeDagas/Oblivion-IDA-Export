// Verified Oblivion AStarNodeList append uses intrusive nodes and appends at the start/head pointer. Fallout's inspected AStarQueue stores each AStarNode in a sorted linked list within one of 20 F-cost buckets; the two layouts/algorithms are distinct.
void __thiscall AStarNodeList_Add(AStarNodeList *this, void *graphNode)
{
  AStarNodeListEntry *v3; // eax
  AStarNodeListEntry *start; // ecx

  if ( graphNode ) /*0x67efea*/
  {
    v3 = (AStarNodeListEntry *)(*((int (__thiscall **)(AStarNodeList *))this->list.vtable + 1))(this); /*0x67eff1*/
    v3->data = graphNode; /*0x67eff3*/
    v3->previous = 0; /*0x67eff6*/
    v3->next = this->list.start; /*0x67f000*/
    start = this->list.start; /*0x67f002*/
    if ( start ) /*0x67f007*/
    {
      start->previous = v3; /*0x67f009*/
      ++this->list.itemCount; /*0x67f00c*/
    }
    else
    {
      ++this->list.itemCount; /*0x67f018*/
      this->list.end = v3; /*0x67f01c*/
    }
    this->list.start = v3; /*0x67f011*/
  }
}
