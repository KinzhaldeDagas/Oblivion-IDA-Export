// Verified called from TravelPath_AddRoadSegmentsForPath. It tests the candidate segment against nearby TESRoad connected points and surface geometry; when surface samples are available, inserts their xyz values as owned kind-1 TravelPathNode nodes. The direct caller and TravelPath_ComputeDistance establish that these samples contribute to fast-travel distance.
bool __thiscall TESRoad_AddTravelSurfaceSegment(
        TESRoad *this,
        BSSimpleList_VoidPtr *pathNodes,
        int currentNodeKey,
        const NiPoint3 *start,
        const NiPoint3 *end)
{
  BSSimpleList_VoidPtr *v6; // ebp
  double v7; // st6
  char *SurfaceData; // edi
  BSSimpleList_VoidPtr *v9; // eax
  BSSimpleList_VoidPtr::NodeVoid *next; // ecx
  _BYTE *v11; // eax
  int *v12; // esi
  char *Head; // eax
  BSSimpleList_VoidPtr::NodeVoid *v14; // ebx
  _BYTE *v15; // eax
  int *v16; // esi
  char *v17; // eax
  int **v18; // eax
  NiSurfaceData *v19; // eax
  bool v20; // bl
  BSExtraData geometryContext; // [esp+18h] [ebp-14h] BYREF
  unsigned int v23; // [esp+28h] [ebp-4h]

  v6 = pathNodes; /*0x4e9819*/
  if ( !pathNodes ) /*0x4e9825*/
    return 0; /*0x4e9825*/
  v7 = dbl_A3A5B0; /*0x4e9831*/
  if ( v7 == start->x || end->x == v7 ) /*0x4e9853*/
    return 0; /*0x4e99b9*/
  sub_68C040(&geometryContext); /*0x4e985d*/
  v23 = 0; /*0x4e986b*/
  if ( !TESRoad_TestTravelSurfaceSegment(this, start, end, &geometryContext) ) /*0x4e9873*/
    sub_68C6E0((NiDX92DBufferData **)&geometryContext); /*0x4e9880*/
  SurfaceData = (char *)TeleportData_GetLinkedDoor(&geometryContext); /*0x4e988e*/
  if ( !SurfaceData ) /*0x4e9892*/
    goto LABEL_31; /*0x4e9892*/
  if ( currentNodeKey )
  {
    v9 = pathNodes; /*0x4e98a0*/
    do /*0x4e98a2*/
    {
      next = v9->firstNode.next; /*0x4e98a2*/
      if ( !next && !v9->firstNode.data ) /*0x4e98a9*/
        break; /*0x4e98a9*/
      if ( v9->firstNode.data == (void *)currentNodeKey ) /*0x4e98af*/
      {
        v6 = v9; /*0x4e98b9*/
        break; /*0x4e98bb*/
      }
      v9 = (BSSimpleList_VoidPtr *)v9->firstNode.next; /*0x4e98b1*/
    }
    while ( next ); /*0x4e98a2*/
  }
  else
  {
    v11 = (_BYTE *)FormHeapAlloc(8u); /*0x4e98bf*/
    LOBYTE(v23) = 1; /*0x4e98cd*/
    v12 = v11 ? (int *)TravelPathNode_Init(v11) : 0;
    LOBYTE(v23) = 0; /*0x4e98e5*/
    TravelPathNode_SetKind((int)v12, 1); /*0x4e98ea*/
    Head = EmbeddedList_GetHead(SurfaceData); /*0x4e98f1*/
    TravelPathNode_SetOwnedPosition(v12, Head); /*0x4e98f9*/
    BSSimpleList_PushFront(pathNodes, (int)v12); /*0x4e9901*/
    SurfaceData = (char *)NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)SurfaceData); /*0x4e990d*/
  }
  if ( v6 ) /*0x4e9911*/
  {
    v14 = v6->firstNode.next; /*0x4e9919*/
    if ( SurfaceData ) /*0x4e991c*/
    {
      do /*0x4e9998*/
      {
        v15 = (_BYTE *)FormHeapAlloc(8u); /*0x4e9920*/
        LOBYTE(v23) = 2; /*0x4e992e*/
        if ( v15 ) /*0x4e9933*/
          v16 = (int *)TravelPathNode_Init(v15); /*0x4e993c*/
        else
          v16 = 0; /*0x4e9940*/
        LOBYTE(v23) = 0; /*0x4e9946*/
        TravelPathNode_SetKind((int)v16, 1); /*0x4e994b*/
        v17 = EmbeddedList_GetHead(SurfaceData); /*0x4e9952*/
        TravelPathNode_SetOwnedPosition(v16, v17); /*0x4e995a*/
        v18 = (int **)FormHeapAlloc(8u); /*0x4e9961*/
        if ( v18 ) /*0x4e996b*/
        {
          *v18 = 0; /*0x4e996d*/
          v18[1] = 0; /*0x4e9973*/
        }
        else
        {
          v18 = 0; /*0x4e997c*/
        }
        if ( v16 ) /*0x4e9980*/
          *v18 = v16; /*0x4e9982*/
        v18[1] = (int *)v14; /*0x4e9984*/
        v6->firstNode.next = (BSSimpleList_VoidPtr::NodeVoid *)v18; /*0x4e9989*/
        v19 = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)SurfaceData); /*0x4e998c*/
        v6 = (BSSimpleList_VoidPtr *)v6->firstNode.next; /*0x4e9991*/
        SurfaceData = (char *)v19; /*0x4e9994*/
      }
      while ( v19 ); /*0x4e9998*/
    }
    v20 = 1; /*0x4e999a*/
  }
  else
  {
LABEL_31:
    v20 = 0; /*0x4e999e*/
  }
  v23 = 0xFFFFFFFF; /*0x4e99a6*/
  sub_68C9B0((NiDX92DBufferData **)&geometryContext); /*0x4e99ae*/
  return v20; /*0x4e99bb*/
}
