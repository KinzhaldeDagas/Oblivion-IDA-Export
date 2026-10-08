// Verified: Inserts a search-node index into the single AStarWorldNodeList. Reads that index's fitness from the 0x10-byte transient state table and keeps the list in ascending fitness order (before first >=, otherwise tail). This differs from Fallout's TeleportDoorSearch AStarQueue: Fallout AddNode selects one of 20 buckets from normalized fitness, then sorts within that bucket.
void __thiscall AStarWorldNodeList_InsertByFitness(AStarWorldNodeList *this, TravelPathSpaceDoorLink *node)
{
  TravelPathSearchState *states; // ebx
  float *p_fitness; // eax
  _DWORD *start; // esi
  unsigned __int16 *v5; // edx
  unsigned __int16 v6; // dx
  float *v7; // eax
  float v8; // [esp+0h] [ebp-4h]

  if ( node ) /*0x680bb7*/
  {
    if ( this->count ) /*0x680bbd*/
    {
      states = MEMORY[0xB3BE00].states; /*0x680bd5*/
      p_fitness = 0; /*0x680be3*/
      if ( node->searchNodeIndex < MEMORY[0xB3BE00].stateCapacity ) /*0x680be8*/
        p_fitness = &states[node->searchNodeIndex].fitness; /*0x680bf0*/
      start = this->start; /*0x680bf5*/
      v8 = *p_fitness; /*0x680bf8*/
      if ( start ) /*0x680bfe*/
      {
        while ( 1 ) /*0x680c04*/
        {
          v5 = (unsigned __int16 *)start[2]; /*0x680c04*/
          if ( !v5 ) /*0x680c09*/
            break; /*0x680c09*/
          v6 = *v5; /*0x680c0b*/
          v7 = 0; /*0x680c0e*/
          if ( v6 < MEMORY[0xB3BE00].stateCapacity ) /*0x680c13*/
            v7 = &states[v6].fitness; /*0x680c1b*/
          if ( *v7 >= (double)v8 ) /*0x680c26*/
            break; /*0x680c26*/
          start = (_DWORD *)*start; /*0x680c28*/
          if ( !start ) /*0x680c2c*/
            goto LABEL_12; /*0x680c2c*/
        }
        NiTPointerList__InsertBeforePosition(this, (int)start, &node); /*0x680c49*/
      }
      else
      {
LABEL_12:
        NiTPointerList__AddTail((BSTextureManager *)this, (void **)&node); /*0x680c30*/
      }
    }
    else
    {
      NiTList_AddHead(this, &node); /*0x680bc8*/
    }
  }
}
