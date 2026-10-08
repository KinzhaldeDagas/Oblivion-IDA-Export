// Verified state layout now typed: TravelPathSpaceDoorLink is 0x14 bytes (16-bit table index, two ref/space endpoint pairs); TravelPathSearchState is 0x10 bytes (fitness, predecessor link, current space, flags). The 0x01 discovered interpretation remains Probable; 0x02 expanded is Verified.
bool __cdecl TravelPath_FindLowLevelRoute(
        TESForm *sourceSpace,
        const NiPoint3 *sourcePosition,
        TESForm *destinationSpace,
        const NiPoint3 *destinationPosition,
        BSSimpleList_VoidPtr *outRouteNodes,
        TESObjectREFR *sourceRef)
{
  float z; // eax
  float *i; // esi
  int v9; // eax
  char *v10; // eax
  float v11; // esi
  TESForm *v12; // eax
  int v13; // eax
  _WORD *v14; // eax
  bool v15; // [esp+1Fh] [ebp-1Dh]
  NiTPointerList__BSImageSpaceShader v16; // [esp+20h] [ebp-1Ch] BYREF

  if ( !LODWORD(qword_B3BB2C[0xB5]) ) /*0x680139*/
    return 0; /*0x680156*/
  v15 = 0; /*0x68015d*/
  if ( sourceSpace && destinationSpace && outRouteNodes && sourceRef ) /*0x680185*/
  {
    BSSimpleList_Clear(outRouteNodes); /*0x68018b*/
    if ( sourceSpace == destinationSpace ) /*0x680192*/
      return 1; /*0x6801a9*/
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&qword_B3BB2C[0xD5], (int)&unk_A2F830); /*0x6801b4*/
    TravelPath_ResetSearchNodeTable(); /*0x6801b9*/
    memset(&v16.start, 0, 0xC); /*0x6801c2*/
    v16.__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&AStarWorldNodeList::`vftable'; /*0x6801ca*/
    flt_B1545C = flt_A32048; /*0x6801dc*/
    LODWORD(qword_B3BB2C[0xB7]) = sourceRef; /*0x6801e2*/
    qword_B3BB2C[0xB6] = 0.0; /*0x6801e8*/
    LODWORD(qword_B3BB2C[0xB8]) = sourceSpace; /*0x6801ee*/
    LODWORD(qword_B3BB2C[0xB9]) = destinationSpace; /*0x6801f4*/
    qword_B3BB2C[0xBD] = sourcePosition->x; /*0x6801fc*/
    qword_B3BB2C[0xBE] = sourcePosition->y; /*0x680205*/
    qword_B3BB2C[0xBF] = sourcePosition->z; /*0x68020e*/
    qword_B3BB2C[0xC0] = destinationPosition->x; /*0x680219*/
    qword_B3BB2C[0xC1] = destinationPosition->y; /*0x680222*/
    z = destinationPosition->z; /*0x680228*/
    v16.unk18 = 0; /*0x680230*/
    qword_B3BB2C[0xC2] = z; /*0x680234*/
    TravelPath_SeedSpaceDoorCandidates((BSTextureManager *)&v16); /*0x680239*/
    for ( i = AStarWorldNodeList_PopMinUnderBound((int ***)&v16, flt_B1545C); /*0x680254*/
          i;
          i = AStarWorldNodeList_PopMinUnderBound((int ***)&v16, flt_B1545C) )
    {
      v9 = TravelPath_SearchState_GetArrivalSpace(i); /*0x680258*/
      v10 = (char *)TravelPathSpaceDoorLink_GetOtherSpace(i, v9); /*0x680260*/
      if ( v10 != (char *)LODWORD(qword_B3BB2C[0xB9]) ) /*0x68026b*/
        TravelPath_ExpandSpaceDoorNeighbors(v10, i, (BSTextureManager *)&v16); /*0x680274*/
      TravelPath_SetSearchNodeExpandedFlag((unsigned __int16 *)i, 1); /*0x680280*/
    }
    v11 = qword_B3BB2C[0xB6]; /*0x68029e*/
    if ( LODWORD(qword_B3BB2C[0xB6]) ) /*0x68029e*/
    {
      v15 = 1; /*0x6802a8*/
      while ( 1 ) /*0x6802b2*/
      {
        v12 = (TESForm *)TravelPath_SearchState_GetArrivalSpace((_WORD *)LODWORD(v11)); /*0x6802b2*/
        if ( !v12 ) /*0x6802b9*/
          v12 = sourceSpace; /*0x6802bb*/
        v13 = TravelPathSpaceDoorLink_GetReferenceForSpace((_DWORD *)LODWORD(v11), (int)v12); /*0x6802c0*/
        BSSimpleList_PushFront(outRouteNodes, v13); /*0x6802ca*/
        v14 = (_WORD *)TravelPath_SearchState_GetParentNode((_WORD *)LODWORD(v11)); /*0x6802d1*/
        v11 = *(float *)&v14; /*0x6802d6*/
        if ( !v14 ) /*0x6802da*/
          break; /*0x6802da*/
        if ( v14 == (_WORD *)TravelPath_SearchState_GetParentNode(v14) ) /*0x6802e5*/
        {
          PrintError("Loop found in low path. Failing."); /*0x6802ec*/
          BSSimpleList_Clear(outRouteNodes); /*0x6802f8*/
          v15 = 0; /*0x6802fd*/
          break; /*0x6802fd*/
        }
      }
    }
    NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&qword_B3BB2C[0xD5]); /*0x680301*/
    v16.unk18 = (BSShader *)0xFFFFFFFF; /*0x68030f*/
    AStarWorldNodeList::~AStarWorldNodeList(&v16); /*0x680317*/
  }
  return v15; /*0x680143*/
}
