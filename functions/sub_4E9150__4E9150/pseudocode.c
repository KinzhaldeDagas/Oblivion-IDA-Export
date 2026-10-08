// Verified: this is a TESRoad method; the TravelPath caller obtains it from TESWorldSpace+0x54. Searches the road's per-cell connected-point map starting at the endpoint's cell, expands through neighboring cell buckets, and returns a nearest point from the first populated ring (bounded by 20 expansion steps). dbl_A3A5B0 is only an FLT_MAX sentinel. The separate fRoadPointReachDistance setting (default 500) is not used as this search's threshold.
TESConnectedPoint *__thiscall TESRoad_FindNearestConnectedPointInNearbyCells(TESRoad *this, const NiPoint3 *position)
{
  TESConnectedPoint *result; // eax
  bool v4; // zf
  const NiPoint3 *v5; // edi
  BSSimpleList_VoidPtr *v6; // ebp
  int v7; // ebx
  int v8; // eax
  TESRoadPointCellMap *p_connectedPointsByCell; // esi
  TESConnectedPoint *NearestConnectedPoint; // ecx
  BSSimpleList_VoidPtr *v11; // eax
  int v12; // eax
  TESConnectedPoint *v13; // ecx
  int v14; // ebp
  int (__thiscall *v15)(TESRoadPointCellMap *, int); // edx
  void *v16; // edi
  TESConnectedPoint *v17; // ecx
  int v18; // ebp
  int (__thiscall *v19)(TESRoadPointCellMap *, int); // edx
  void *v20; // edi
  TESConnectedPoint *v21; // ecx
  int v22; // ebp
  int (__thiscall *v23)(TESRoadPointCellMap *, int); // edx
  void *v24; // edi
  TESConnectedPoint *v25; // ecx
  char v26; // [esp+23h] [ebp-21h]
  float outDistance; // [esp+24h] [ebp-20h] BYREF
  float v28; // [esp+28h] [ebp-1Ch]
  TESConnectedPoint *v29; // [esp+2Ch] [ebp-18h]
  BSSimpleList_VoidPtr *v30; // [esp+30h] [ebp-14h]
  __int16 group_x[2]; // [esp+34h] [ebp-10h] BYREF
  TESRoad *v32; // [esp+38h] [ebp-Ch]
  BSSimpleList_VoidPtr *points; // [esp+3Ch] [ebp-8h]
  BSSimpleList_VoidPtr *x_low; // [esp+40h] [ebp-4h]

  v28 = flt_A32048; /*0x4e915c*/
  result = 0; /*0x4e9160*/
  v4 = this->connectedPointsByCell.itemCount == 0; /*0x4e9162*/
  v32 = this; /*0x4e9165*/
  v29 = 0; /*0x4e9169*/
  if ( !v4 ) /*0x4e916d*/
  {
    v5 = position; /*0x4e9176*/
    v26 = 1; /*0x4e917c*/
    x_low = (BSSimpleList_VoidPtr *)LODWORD(position->x); /*0x4e9181*/
    v30 = 0; /*0x4e9185*/
    *(_DWORD *)group_x = (int)*(float *)&x_low; /*0x4e918d*/
    x_low = (BSSimpleList_VoidPtr *)LODWORD(position->y); /*0x4e9198*/
    v6 = (BSSimpleList_VoidPtr *)(*(int *)group_x >> 0xC); /*0x4e919c*/
    *(_DWORD *)group_x = (int)*(float *)&x_low; /*0x4e91a3*/
    outDistance = flt_A32048; /*0x4e91b1*/
    v7 = *(int *)group_x >> 0xC; /*0x4e91b5*/
    v8 = TESObjectCELL_PackExteriorGroupLabel((__int16)v6, *(int *)group_x >> 0xC); /*0x4e91ba*/
    p_connectedPointsByCell = &this->connectedPointsByCell; /*0x4e91c7*/
    *(_DWORD *)group_x = 0; /*0x4e91cd*/
    NiTMap_GetAt(p_connectedPointsByCell, v8, group_x); /*0x4e91d5*/
    NearestConnectedPoint = TESRoad_FindNearestConnectedPoint(position, *(BSSimpleList_VoidPtr **)group_x, &outDistance); /*0x4e91ee*/
    if ( NearestConnectedPoint ) /*0x4e91f2*/
    {
      if ( outDistance < dbl_A3A5B0 ) /*0x4e9203*/
      {
        v28 = outDistance; /*0x4e9205*/
        v29 = NearestConnectedPoint; /*0x4e9209*/
      }
    }
    while ( 1 ) /*0x4e9217*/
    {
      if ( !v26 ) /*0x4e9217*/
      {
        result = v29; /*0x4e9219*/
        if ( v29 ) /*0x4e921f*/
          break; /*0x4e921f*/
      }
      if ( (int)v30 >= 0x14 ) /*0x4e922c*/
        return v29; /*0x4e94aa*/
      v11 = (BSSimpleList_VoidPtr *)((char *)&v30->firstNode.data + 2); /*0x4e9232*/
      v6 = (BSSimpleList_VoidPtr *)((char *)v6 + 0xFFFFFFFF); /*0x4e9235*/
      --v7; /*0x4e9238*/
      v26 = 0; /*0x4e923d*/
      v30 = v11; /*0x4e9242*/
      if ( (int)v11 > 0 ) /*0x4e9246*/
      {
        points = v11; /*0x4e924a*/
        do /*0x4e92ae*/
        {
          v12 = TESObjectCELL_PackExteriorGroupLabel((__int16)v6, v7); /*0x4e9252*/
          *(_DWORD *)group_x = 0; /*0x4e9262*/
          NiTMap_GetAt(p_connectedPointsByCell, v12, group_x); /*0x4e926a*/
          v13 = TESRoad_FindNearestConnectedPoint(v5, *(BSSimpleList_VoidPtr **)group_x, &outDistance); /*0x4e9283*/
          if ( v13 ) /*0x4e9287*/
          {
            if ( v28 > (double)outDistance ) /*0x4e9298*/
            {
              v28 = outDistance; /*0x4e929a*/
              v29 = v13; /*0x4e929e*/
            }
          }
          v6 = (BSSimpleList_VoidPtr *)((char *)v6 + 1); /*0x4e92a6*/
          points = (BSSimpleList_VoidPtr *)((char *)points + 0xFFFFFFFF); /*0x4e92a9*/
        }
        while ( points ); /*0x4e92ae*/
        *(_DWORD *)group_x = v6; /*0x4e92b4*/
        x_low = v30; /*0x4e92b8*/
        while ( 1 ) /*0x4e92cb*/
        {
          v14 = TESObjectCELL_PackExteriorGroupLabel((__int16)v6, v7); /*0x4e92cb*/
          v15 = *((int (__thiscall **)(TESRoadPointCellMap *, int))p_connectedPointsByCell->vtable + 1); /*0x4e92cf*/
          points = 0; /*0x4e92d8*/
          v16 = p_connectedPointsByCell->buckets[v15(p_connectedPointsByCell, v14)]; /*0x4e92e5*/
          if ( v16 ) /*0x4e92ea*/
          {
            while ( !(*((unsigned __int8 (__thiscall **)(TESRoadPointCellMap *, int, _DWORD))p_connectedPointsByCell->vtable /*0x4e9300*/
                      + 2))(
                       p_connectedPointsByCell,
                       v14,
                       *((_DWORD *)v16 + 1)) )
            {
              v16 = *(void **)v16; /*0x4e9302*/
              if ( !v16 ) /*0x4e9306*/
                goto LABEL_21; /*0x4e9306*/
            }
            points = *((BSSimpleList_VoidPtr **)v16 + 2); /*0x4e930d*/
          }
LABEL_21:
          v17 = TESRoad_FindNearestConnectedPoint(position, points, &outDistance); /*0x4e9311*/
          if ( v17 ) /*0x4e932d*/
          {
            if ( v28 > (double)outDistance ) /*0x4e933e*/
            {
              v28 = outDistance; /*0x4e9340*/
              v29 = v17; /*0x4e9344*/
            }
          }
          ++v7; /*0x4e934c*/
          x_low = (BSSimpleList_VoidPtr *)((char *)x_low + 0xFFFFFFFF); /*0x4e934f*/
          if ( *(float *)&x_low == 0.0 ) /*0x4e9354*/
            break; /*0x4e9354*/
          LOWORD(v6) = group_x[0]; /*0x4e92c0*/
        }
        points = v30; /*0x4e935e*/
        do /*0x4e93f9*/
        {
          v18 = TESObjectCELL_PackExteriorGroupLabel(group_x[0], v7); /*0x4e936d*/
          v19 = *((int (__thiscall **)(TESRoadPointCellMap *, int))p_connectedPointsByCell->vtable + 1); /*0x4e9371*/
          *(float *)&x_low = 0.0; /*0x4e937a*/
          v20 = p_connectedPointsByCell->buckets[v19(p_connectedPointsByCell, v18)]; /*0x4e9387*/
          if ( v20 ) /*0x4e938c*/
          {
            while ( !(*((unsigned __int8 (__thiscall **)(TESRoadPointCellMap *, int, _DWORD))p_connectedPointsByCell->vtable /*0x4e93a0*/
                      + 2))(
                       p_connectedPointsByCell,
                       v18,
                       *((_DWORD *)v20 + 1)) )
            {
              v20 = *(void **)v20; /*0x4e93a2*/
              if ( !v20 ) /*0x4e93a6*/
                goto LABEL_31; /*0x4e93a6*/
            }
            x_low = *((BSSimpleList_VoidPtr **)v20 + 2); /*0x4e93ad*/
          }
LABEL_31:
          v21 = TESRoad_FindNearestConnectedPoint(position, x_low, &outDistance); /*0x4e93b1*/
          if ( v21 ) /*0x4e93cd*/
          {
            if ( v28 > (double)outDistance ) /*0x4e93de*/
            {
              v28 = outDistance; /*0x4e93e0*/
              v29 = v21; /*0x4e93e4*/
            }
          }
          --*(_DWORD *)group_x; /*0x4e93f1*/
          points = (BSSimpleList_VoidPtr *)((char *)points + 0xFFFFFFFF); /*0x4e93f5*/
        }
        while ( points ); /*0x4e93f9*/
        points = v30; /*0x4e9403*/
        do /*0x4e9497*/
        {
          v22 = TESObjectCELL_PackExteriorGroupLabel(group_x[0], v7); /*0x4e9412*/
          v23 = *((int (__thiscall **)(TESRoadPointCellMap *, int))p_connectedPointsByCell->vtable + 1); /*0x4e9416*/
          *(float *)&x_low = 0.0; /*0x4e941f*/
          v24 = p_connectedPointsByCell->buckets[v23(p_connectedPointsByCell, v22)]; /*0x4e942c*/
          if ( v24 ) /*0x4e9431*/
          {
            while ( !(*((unsigned __int8 (__thiscall **)(TESRoadPointCellMap *, int, _DWORD))p_connectedPointsByCell->vtable /*0x4e9443*/
                      + 2))(
                       p_connectedPointsByCell,
                       v22,
                       *((_DWORD *)v24 + 1)) )
            {
              v24 = *(void **)v24; /*0x4e9445*/
              if ( !v24 ) /*0x4e9449*/
                goto LABEL_41; /*0x4e9449*/
            }
            x_low = *((BSSimpleList_VoidPtr **)v24 + 2); /*0x4e9450*/
          }
LABEL_41:
          v25 = TESRoad_FindNearestConnectedPoint(position, x_low, &outDistance); /*0x4e9454*/
          if ( v25 ) /*0x4e9470*/
          {
            if ( v28 > (double)outDistance ) /*0x4e9481*/
            {
              v28 = outDistance; /*0x4e9483*/
              v29 = v25; /*0x4e9487*/
            }
          }
          --v7; /*0x4e948f*/
          points = (BSSimpleList_VoidPtr *)((char *)points + 0xFFFFFFFF); /*0x4e9492*/
        }
        while ( points ); /*0x4e9497*/
        v6 = *(BSSimpleList_VoidPtr **)group_x; /*0x4e949d*/
        v5 = position; /*0x4e94a1*/
      }
    }
  }
  return result; /*0x4e94b1*/
}
