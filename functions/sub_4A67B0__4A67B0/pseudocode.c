// Verified: converts world XYZ input to a 2D point and delegates region-data selection for that location.
TESRegionData *__thiscall TESRegionList_SelectDataAtWorldPosition(
        TESRegionList *this,
        int dataID,
        float worldX,
        float worldY,
        float worldZ,
        TESWorldSpace *worldspace)
{
  float worldXY[2]; // [esp+4h] [ebp-8h] BYREF

  sub_4A6920(worldXY); /*0x4a67ba*/
  worldXY[0] = worldX; /*0x4a67c7*/
  worldXY[1] = worldY; /*0x4a67d4*/
  return TESRegionList_SelectDataForLocation(this, dataID, worldXY, worldspace); /*0x4a67e5*/
}
