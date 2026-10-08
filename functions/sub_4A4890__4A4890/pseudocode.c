// Verified (Oblivion): dispatches RDAT/RDMD/RDNL/RDWT/RDSD/RDSG/RDGS chunks to factory-created region data and virtual loaders. Fallout has additional data IDs/layouts; those are not assumed here.
char __thiscall TESRegionDataManager_LoadRegionDataRecord(TESRegionDataManager *this, Data *file, TESRegion *region)
{
  signed int ChunkType; // eax
  int v5; // eax
  int (__thiscall *filterDataID6)(TESRegionDataManager *, TESRegionData *); // edx
  int v7; // eax
  TESRegionData *v9; // eax
  char Dst[4]; // [esp+Ch] [ebp-8h] BYREF
  int v11; // [esp+10h] [ebp-4h]

  if ( file && region ) /*0x4a48aa*/
  {
    this->currentRegion = region;               // Verified: each record-dispatch call assigns TESRegionDataManager.currentRegion before reading the next region chunk. /*0x4a48b2*/
    ChunkType = TESFile_GetChunkType(file); /*0x4a48b5*/
    if ( ChunkType > 0x504D4452 ) /*0x4a48bf*/
    {
      if ( ChunkType != 0x53474452 ) /*0x4a4913*/
      {
        if ( ChunkType == 0x54414452 ) /*0x4a491e*/
        {
          *(_DWORD *)Dst = 0; /*0x4a4963*/
          v11 = 0; /*0x4a4967*/
          TESFile_GetChunkData(file, Dst, 8u);  // Verified: RDAT base header reads exactly 8 bytes; first dword selects the Oblivion region-data factory ID, second dword is consumed by TESRegionData_LoadHeader. /*0x4a496b*/
          v9 = (TESRegionData *)((int (__thiscall *)(TESRegionDataManager *, _DWORD))this->vtable->constructRegionData)( /*0x4a497c*/
                                  this,
                                  *(_DWORD *)Dst);// Verified: factory creates type from RDAT ID; returned object receives the 8-byte base RDAT header, then is linked into TESRegion's data list.
          g_CurrentTESRegionDataChunk = v9; /*0x4a4980*/
          if ( v9 ) /*0x4a4985*/
          {
            ((void (__thiscall *)(TESRegionData *, char *))v9->vtable->loadRegionDataHeader)(v9, Dst); /*0x4a4993*/
            BSSimpleList_PushFront(*((_DWORD **)region + 6), (int)g_CurrentTESRegionDataChunk); /*0x4a499e*/
            return 1; /*0x4a49ab*/
          }
        }
        else if ( ChunkType == 0x54574452 ) /*0x4a4925*/
        {
          v7 = ((int (__thiscall *)(TESRegionDataManager *, TESRegionData *))this->vtable->filterDataID3)( /*0x4a4938*/
                 this,
                 g_CurrentTESRegionDataChunk);
          if ( v7 ) /*0x4a493c*/
          {
            (*(void (__thiscall **)(int, Data *, TESRegion *))(*(_DWORD *)v7 + 0x20))(v7, file, region); /*0x4a494b*/
            return 1; /*0x4a4955*/
          }
        }
        return 1; /*0x4a493c*/
      }
      filterDataID6 = (int (__thiscall *)(TESRegionDataManager *, TESRegionData *))this->vtable->filterDataID6; /*0x4a49b0*/
    }
    else if ( ChunkType == 0x504D4452 ) /*0x4a48c1*/
    {
      filterDataID6 = (int (__thiscall *)(TESRegionDataManager *, TESRegionData *))this->vtable->filterDataID4; /*0x4a4906*/
    }
    else
    {
      if ( ChunkType > 0x4E4C4452 ) /*0x4a48c8*/
      {
        if ( ChunkType != 0x4E4F4349 ) /*0x4a48f4*/
          return 1; /*0x4a49d3*/
      }
      else if ( ChunkType != 0x4E4C4452 ) /*0x4a48ca*/
      {
        if ( ChunkType != 0x444D4452 && ChunkType != 0x44534452 ) /*0x4a48d8*/
          return 1; /*0x4a48d8*/
        v5 = ((int (__thiscall *)(TESRegionDataManager *, TESRegionData *))this->vtable->filterDataID7)( /*0x4a48ea*/
               this,
               g_CurrentTESRegionDataChunk);
        goto LABEL_22; /*0x4a48ea*/
      }
      filterDataID6 = (int (__thiscall *)(TESRegionDataManager *, TESRegionData *))this->vtable->filterDataID5; /*0x4a48fc*/
    }
    v5 = filterDataID6(this, g_CurrentTESRegionDataChunk); /*0x4a49bb*/
LABEL_22:
    if ( v5 ) /*0x4a49bf*/
      (*(void (__thiscall **)(int, Data *))(*(_DWORD *)v5 + 0x20))(v5, file); /*0x4a49c9*/
    return 1; /*0x4a49c9*/
  }
  return 0; /*0x4a494d*/
}
