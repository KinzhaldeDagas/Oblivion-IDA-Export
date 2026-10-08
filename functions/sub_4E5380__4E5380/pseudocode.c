// Verified insertion into TESPathGrid.pointsByCell (+0x44), which is a per-PathGrid 512-unit X/Y spatial-bucket map despite the legacy member/type spelling. It derives the packed key from the node's NiPoint3, finds or creates a BSSimpleList header, then pushes the point pointer. The graph-chunk loader calls this for each loaded point; FindPointByPositionInCell uses the same key.
void __thiscall TESPathGrid_AddPointToSpatialBucket(TESPathGrid *this, TESPathGridPoint *point)
{
  TESPathGridPoint *v2; // ebp
  NiPoint3 *Position; // eax
  unsigned int v5; // esi
  TESPathGridCellPointMap *p_pointsByCell; // edi
  TESPathGridPoint *v7; // ebx
  TESPathGridPoint *v8; // eax

  v2 = point; /*0x4e5381*/
  if ( point ) /*0x4e538a*/
  {
    Position = PathGraphNode_GetPosition(point); /*0x4e5390*/
    v5 = TESPathGrid_PackSpatialBucketKey(Position); /*0x4e539b*/
    p_pointsByCell = &this->pointsByCell; /*0x4e53a5*/
    point = 0; /*0x4e53ab*/
    NiTMap_GetAt(p_pointsByCell, v5, &point); /*0x4e53b3*/
    v7 = point; /*0x4e53b8*/
    if ( !point ) /*0x4e53be*/
    {
      v8 = (TESPathGridPoint *)FormHeapAlloc(8u); /*0x4e53c2*/
      if ( v8 ) /*0x4e53cc*/
      {
        v8->totalEstimateCost = 0.0; /*0x4e53ce*/
        v8->pathCost = 0.0; /*0x4e53d0*/
      }
      else
      {
        v8 = 0; /*0x4e53d5*/
      }
      v7 = v8; /*0x4e53db*/
      NiTMap_SetAt(p_pointsByCell, v5, (int)v8); /*0x4e53dd*/
    }
    BSSimpleList_PushFront(v7, (int)v2); /*0x4e53e5*/
  }
}
