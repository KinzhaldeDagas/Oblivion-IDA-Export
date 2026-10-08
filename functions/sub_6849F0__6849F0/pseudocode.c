char __thiscall sub_6849F0(NiPoint3 *this, NiPoint3 *worldXY, TESObjectREFR *a3)
{
  TESPathGrid *v4; // ebx
  TESObjectCELL *DwordAtOffset40; // ebp
  TESWorldSpace *WorldSpace; // edi
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  TESPathGrid *v10; // esi
  TESObjectCELL *CellAtWorldPosition; // eax
  TESObjectCELL *v12; // eax
  TESPathGridPoint *PointByPositionInCell; // edi
  TESPathGridPoint *v14; // eax
  int v15; // esi
  BSSimpleList_VoidPtr *Connections; // eax
  TESPathGridPoint **v17; // eax
  char v19; // [esp+Bh] [ebp-5h]
  TESChildCELL *v21; // [esp+18h] [ebp+8h]

  v4 = 0; /*0x6849f9*/
  v19 = 0; /*0x684a01*/
  if ( a3 && *((float *)this + 0xF) != dbl_A3A5B0 ) /*0x684a1d*/
  {
    v21 = 0; /*0x684a27*/
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a3); /*0x684a32*/
    WorldSpace = TESObjectREFR_GetWorldSpace(a3); /*0x684a3b*/
    if ( DwordAtOffset40 && TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x684a41*/
    {
      v8 = (_DWORD *)Shared_GetDwordAtOffset40(a3); /*0x684a4c*/
      v4 = (TESPathGrid *)sub_4AF170(v8); /*0x684a5a*/
      v9 = (_DWORD *)Shared_GetDwordAtOffset40(a3); /*0x684a5c*/
      v10 = (TESPathGrid *)sub_4AF170(v9); /*0x684a68*/
    }
    else
    {
      if ( !WorldSpace ) /*0x684a6e*/
        return v19; /*0x684a6e*/
      CellAtWorldPosition = TESWorldSpace_GetCellAtWorldPosition(WorldSpace, (float *)this + 0xF); /*0x684a7e*/
      if ( CellAtWorldPosition ) /*0x684a85*/
        v4 = (TESPathGrid *)sub_4AF170(CellAtWorldPosition); /*0x684a8e*/
      v12 = TESWorldSpace_GetCellAtWorldPosition(WorldSpace, &worldXY->x); /*0x684a97*/
      if ( v12 ) /*0x684a9e*/
        v21 = (TESChildCELL *)sub_4AF170(v12); /*0x684aa7*/
      v10 = (TESPathGrid *)v21; /*0x684aab*/
    }
    if ( v4 ) /*0x684ab1*/
    {
      if ( v10 ) /*0x684ab5*/
      {
        PointByPositionInCell = TESPathGrid_FindPointByPositionInCell(v4, this + 5); /*0x684ac6*/
        if ( PointByPositionInCell ) /*0x684aca*/
        {
          v14 = TESPathGrid_FindPointByPositionInCell(v10, worldXY); /*0x684ad3*/
          v15 = (int)v14; /*0x684ad8*/
          if ( v14 ) /*0x684adc*/
          {
            Connections = PathGraphNode_GetConnections(v14); /*0x684ae1*/
            if ( BSSimpleList::Contains(Connections, PointByPositionInCell) /*0x684af9*/
              && !sub_683C70(this, (int)PointByPositionInCell, v15) )
            {
              v17 = (TESPathGridPoint **)FormHeapAlloc(8u); /*0x684b04*/
              *v17 = PointByPositionInCell; /*0x684b10*/
              v17[1] = (TESPathGridPoint *)v15; /*0x684b12*/
              BSSimpleList_PushFront((_DWORD *)this + 0xD, (int)v17); /*0x684b15*/
              return 1; /*0x684b1a*/
            }
          }
        }
      }
    }
  }
  return v19; /*0x684b25*/
}
