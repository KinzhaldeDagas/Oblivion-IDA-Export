// Verified: walks TESRegionDataList and returns the element whose virtual GetDataID (+0x0C) equals the requested ID.
TESRegionData *__thiscall TESRegion_FindDataByID(TESRegionDataList *dataList, int dataID)
{
  TESRegionDataList *v2; // edi
  TESRegionData *firstData; // esi

  v2 = dataList; /*0x4a4463*/
  if ( !dataList ) /*0x4a4467*/
    return 0; /*0x4a448a*/
  while ( 1 ) /*0x4a4470*/
  {
    firstData = v2->firstData; /*0x4a4470*/
    if ( v2->firstData ) /*0x4a4470*/
    {
      if ( ((int (__thiscall *)(TESRegionData *))firstData->vtable->unknown0C)(v2->firstData) == dataID ) /*0x4a4481*/
        break; /*0x4a4481*/
    }
    v2 = (TESRegionDataList *)v2->overflowNodes; /*0x4a4483*/
    if ( !v2 ) /*0x4a4488*/
      return 0; /*0x4a4488*/
  }
  return firstData; /*0x4a448a*/
}
