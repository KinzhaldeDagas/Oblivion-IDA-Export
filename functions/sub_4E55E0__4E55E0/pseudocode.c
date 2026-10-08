// Verified PGRI index use: the record's first u16 selects the TESPathGridPoint in pointArray, while its indexedPosition at +4 is used to select the nearest eligible point in the owning cell.
TESPathGridPoint *__thiscall TESPathGrid_FindClosestPointByPosition(TESPathGrid *this, const NiPoint3 *position)
{
  TESPathGridPoint *v2; // edi
  int XCoordinate; // esi
  int YCoordinate; // eax
  BSSimpleList_VoidPtr *p_PGRIRecords; // esi
  float *data; // edi
  int v8; // eax
  TESPathGridPoint **v9; // edx
  TESPathGridPoint *v10; // ebx
  TESPathGridPoint *v12; // [esp+8h] [ebp-1Ch]
  int x; // [esp+Ch] [ebp-18h]
  int y; // [esp+10h] [ebp-14h]
  float v15; // [esp+10h] [ebp-14h]
  float v16; // [esp+14h] [ebp-10h]
  float v17; // [esp+18h] [ebp-Ch]
  float v18; // [esp+1Ch] [ebp-8h]
  float v19; // [esp+20h] [ebp-4h]

  v2 = 0; /*0x4e55e5*/
  v12 = 0; /*0x4e55ec*/
  if ( !this->pointArray ) /*0x4e55e9*/
    return 0; /*0x4e571e*/
  x = (int)position->x; /*0x4e5605*/
  y = (int)position->y; /*0x4e5614*/
  XCoordinate = TESObjectCELL_GetXCoordinate(this->parentCell); /*0x4e5623*/
  YCoordinate = TESObjectCELL_GetYCoordinate(this->parentCell); /*0x4e5625*/
  if ( x >> 0xC == XCoordinate && y >> 0xC == YCoordinate ) /*0x4e563e*/
    return 0; /*0x4e563e*/
  p_PGRIRecords = &this->PGRIRecords; /*0x4e564a*/
  v15 = flt_A32048; /*0x4e564f*/
  if ( this == (TESPathGrid *)0xFFFFFFD8 ) /*0x4e5653*/
    return 0; /*0x4e5714*/
  while ( p_PGRIRecords->firstNode.next || p_PGRIRecords->firstNode.data ) /*0x4e566d*/
  {
    data = (float *)p_PGRIRecords->firstNode.data; /*0x4e5673*/
    v8 = *(unsigned __int16 *)p_PGRIRecords->firstNode.data; /*0x4e5675*/
    v9 = this->pointArray->data; /*0x4e567b*/
    v10 = v9[v8]; /*0x4e567e*/
    if ( v10 ) /*0x4e5683*/
    {
      if ( !PathGraphNode_IsLinkedPointsDisabled(v9[v8]) ) /*0x4e5687*/
      {
        v17 = data[1] - position->x; /*0x4e5699*/
        v18 = data[2] - position->y; /*0x4e56a3*/
        v19 = data[3] - position->z; /*0x4e56ad*/
        v16 = v17 * v17 + v18 * v18 + v19 * v19; /*0x4e56cd*/
        if ( v15 > (double)v16 ) /*0x4e56e0*/
        {
          v15 = v17 * v17 + v18 * v18 + v19 * v19; /*0x4e56e2*/
          v12 = v10; /*0x4e56e6*/
        }
      }
    }
    p_PGRIRecords = (BSSimpleList_VoidPtr *)p_PGRIRecords->firstNode.next; /*0x4e56ee*/
    if ( !p_PGRIRecords ) /*0x4e56f3*/
      return v12; /*0x4e5704*/
    v2 = v12; /*0x4e5660*/
  }
  return v2; /*0x4e56ff*/
}
