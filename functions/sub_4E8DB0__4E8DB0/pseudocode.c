// Verified: scans one TESConnectedPoint list, computes Euclidean distance from each node's NiPoint3 at +0x14, returns the nearest node, and writes the distance. TESRoad_FindNearestConnectedPointInNearbyCells performs the separate cross-cell search/cutoff.
TESConnectedPoint *__stdcall TESRoad_FindNearestConnectedPoint(
        const NiPoint3 *position,
        BSSimpleList_VoidPtr *points,
        float *outDistance)
{
  BSSimpleList_VoidPtr *next; // esi
  TESConnectedPoint *i; // ebp
  TESConnectedPoint *data; // edi
  NiPoint3 *v6; // eax
  float v8; // [esp+8h] [ebp-10h]
  float v9; // [esp+Ch] [ebp-Ch]
  float v10; // [esp+10h] [ebp-8h]
  float v11; // [esp+14h] [ebp-4h]
  float pointsb; // [esp+20h] [ebp+8h]
  float pointsa; // [esp+20h] [ebp+8h]

  v8 = flt_A32048; /*0x4e8dbb*/
  next = points; /*0x4e8dbf*/
  for ( i = 0; next; next = (BSSimpleList_VoidPtr *)next->firstNode.next ) /*0x4e8dc7*/
  {
    if ( !next->firstNode.next && !next->firstNode.data ) /*0x4e8dd9*/
      break; /*0x4e8ddc*/
    data = (TESConnectedPoint *)next->firstNode.data; /*0x4e8de2*/
    v6 = TESConnectedPoint_GetPosition((TESConnectedPoint *)next->firstNode.data); /*0x4e8de6*/
    v9 = v6->x - position->x; /*0x4e8def*/
    v10 = v6->y - position->y; /*0x4e8df9*/
    v11 = v6->z - position->z; /*0x4e8e03*/
    pointsb = v9 * v9 + v10 * v10 + v11 * v11; /*0x4e8e23*/
    pointsa = sqrt(pointsb); /*0x4e8e30*/
    if ( v8 > (double)pointsa ) /*0x4e8e4b*/
    {
      v8 = pointsa; /*0x4e8e4d*/
      i = data; /*0x4e8e51*/
    }
  }
  *outDistance = v8; /*0x4e8e6c*/
  return i; /*0x4e8e6e*/
}
