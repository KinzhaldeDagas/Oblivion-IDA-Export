// Verified Oblivion AStarNodeList pop scans from start through each node's next link, compares F cost at graph-node+0, unlinks the lowest-F entry, and returns the generic graph-node pointer. Fallout's inspected NavMesh AStarQueue instead selects the first nonempty F bucket among 20.
void *__thiscall AStarNodeList_PopLowestTotalEstimateCost(AStarNodeList *this)
{
  AStarNodeListEntry *start; // edx
  NiTPointerList_Node_void *v2; // ebx
  void *v3; // edi
  float *data; // esi
  float v6; // [esp+4h] [ebp-8h]
  NiTPointerList_Node_void *v7; // [esp+8h] [ebp-4h] BYREF

  start = this->list.start; /*0x67f033*/
  v6 = flt_A32048; /*0x67f03d*/
  v2 = 0; /*0x67f042*/
  v3 = 0; /*0x67f044*/
  v7 = 0; /*0x67f048*/
  if ( start ) /*0x67f04c*/
  {
    do /*0x67f074*/
    {
      data = (float *)start->data; /*0x67f050*/
      if ( data ) /*0x67f055*/
      {
        if ( v6 > (double)*data ) /*0x67f064*/
        {
          v3 = start->data; /*0x67f068*/
          v6 = *data; /*0x67f06a*/
          v2 = (NiTPointerList_Node_void *)start; /*0x67f06e*/
        }
      }
      start = start->next; /*0x67f070*/
    }
    while ( start ); /*0x67f074*/
    v7 = v2; /*0x67f078*/
    if ( v3 ) /*0x67f07d*/
    {
      if ( v2 ) /*0x67f081*/
        sub_7AA860((BSTextureManager *)this, &v7); /*0x67f088*/
    }
  }
  return v3; /*0x67f090*/
}
