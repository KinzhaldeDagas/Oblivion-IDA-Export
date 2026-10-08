// Verified this is called with TESRoad* by TESRoad_AddTravelSurfaceSegment. It resolves both endpoint positions to nearest road graph points, checks endpoint/process conditions and geometry, and resets transient node data after the surface test.
bool __thiscall TESRoad_TestTravelSurfaceSegment(
        TESRoad *this,
        const NiPoint3 *start,
        const NiPoint3 *end,
        void *geometryContext)
{
  bool result; // al
  int v7; // ebp
  int v8; // ebx
  TESObjectCELL *CellAtCellCoord; // ebx
  TESConnectedPoint *NearestConnectedPointInNearbyCells; // ebx
  TESConnectedPoint *v11; // eax
  TESConnectedPoint *v12; // ebp
  NiPoint3 *v13; // eax
  NiPoint3 *v14; // eax
  NiDX92DBufferData *v16; // eax
  char *v17; // ebx
  NiSurfaceData *SurfaceData; // ebp
  float *Head; // eax
  float *v20; // eax
  float *v21; // eax
  float *v22; // eax
  NiDX92DBufferData *v23; // eax
  bool v24; // bl
  float *v25; // [esp-4h] [ebp-7Ch]
  float v27; // [esp+1Ch] [ebp-5Ch]
  float v28; // [esp+1Ch] [ebp-5Ch]
  float v29; // [esp+1Ch] [ebp-5Ch]
  float v30; // [esp+20h] [ebp-58h]
  float v31; // [esp+24h] [ebp-54h]
  float v32; // [esp+28h] [ebp-50h] BYREF
  float v33; // [esp+2Ch] [ebp-4Ch]
  float v34; // [esp+30h] [ebp-48h]
  float v35[3]; // [esp+34h] [ebp-44h] BYREF
  _DWORD v36[11]; // [esp+40h] [ebp-38h] BYREF
  unsigned int v37; // [esp+74h] [ebp-4h]
  TESObjectCELL *a1a; // [esp+7Ch] [ebp+4h]
  float a1b; // [esp+7Ch] [ebp+4h]
  float a1c; // [esp+7Ch] [ebp+4h]
  float a1d; // [esp+7Ch] [ebp+4h]
  float a1; // [esp+7Ch] [ebp+4h]
  float a1e; // [esp+7Ch] [ebp+4h]
  float position; // [esp+80h] [ebp+8h]
  float positiona; // [esp+80h] [ebp+8h]
  float positionb; // [esp+80h] [ebp+8h]
  float geometryContexta; // [esp+84h] [ebp+Ch]

  result = 0; /*0x4e94eb*/
  if ( geometryContext ) /*0x4e94f9*/
  {
    v7 = (int)end->x >> 0xC; /*0x4e9557*/
    v8 = (int)end->y >> 0xC; /*0x4e956e*/
    a1a = TESWorldSpace::GetCellAtCellCoord(this->ownerWorldspace, (int)start->x >> 0xC, (int)start->y >> 0xC); /*0x4e9576*/
    CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(this->ownerWorldspace, v7, v8); /*0x4e9595*/
    if ( TESObjectCELL_IsProcessLevel_LowHigh(a1a, 1) && TESObjectCELL_IsProcessLevel_LowHigh(CellAtCellCoord, 1) ) /*0x4e95a9*/
      return 0; /*0x4e95a9*/
    NearestConnectedPointInNearbyCells = TESRoad_FindNearestConnectedPointInNearbyCells(this, start); /*0x4e95c5*/
    v11 = TESRoad_FindNearestConnectedPointInNearbyCells(this, end); /*0x4e95c7*/
    v12 = v11; /*0x4e95ce*/
    if ( !NearestConnectedPointInNearbyCells ) /*0x4e95d0*/
      return 0; /*0x4e95d0*/
    if ( !v11 ) /*0x4e95d8*/
      return 0; /*0x4e95d8*/
    if ( NearestConnectedPointInNearbyCells == v11 ) /*0x4e95e0*/
      return 0; /*0x4e95e0*/
    v13 = TESConnectedPoint_GetPosition(NearestConnectedPointInNearbyCells); /*0x4e95e8*/
    a1b = start->x - v13->x; /*0x4e95f5*/
    position = start->y - v13->y; /*0x4e95ff*/
    v27 = start->z - v13->z; /*0x4e960c*/
    v32 = a1b; /*0x4e9614*/
    v33 = position; /*0x4e961f*/
    v34 = v27; /*0x4e9627*/
    v30 = NiPoint3_Length(&v32); /*0x4e9632*/
    v14 = TESConnectedPoint_GetPosition(v12); /*0x4e9636*/
    a1c = end->x - v14->x; /*0x4e9643*/
    positiona = end->y - v14->y; /*0x4e964d*/
    v28 = end->z - v14->z; /*0x4e965a*/
    v32 = a1c; /*0x4e9662*/
    v33 = positiona; /*0x4e966d*/
    v34 = v28; /*0x4e9675*/
    v31 = NiPoint3_Length(&v32); /*0x4e967e*/
    a1d = start->x - end->x; /*0x4e968a*/
    positionb = start->y - end->y; /*0x4e9694*/
    v29 = start->z - end->z; /*0x4e96a1*/
    v32 = a1d; /*0x4e96a9*/
    v33 = positionb; /*0x4e96b4*/
    v34 = v29; /*0x4e96bc*/
    a1 = NiPoint3_Length(&v32); /*0x4e96c5*/
    if ( v30 < dbl_A2FC70 ) /*0x4e96d8*/
      goto LABEL_11; /*0x4e96d8*/
    if ( a1 <= v30 + v31 ) /*0x4e96e9*/
    {
      return 0; /*0x4e96eb*/
    }
    else
    {
LABEL_11:
      sub_67D760(v36); /*0x4e970b*/
      v37 = 0; /*0x4e971e*/
      if ( sub_67E610((float *)NearestConnectedPointInNearbyCells->unknown00, (char *)v12, (int *)geometryContext) ) /*0x4e9729*/
      {
        v16 = (NiDX92DBufferData *)sub_42B410((BSExtraData *)geometryContext); /*0x4e9738*/
        v17 = (char *)v16; /*0x4e973d*/
        if ( v16 ) /*0x4e9741*/
        {
          SurfaceData = NiDX92DBufferData::GetSurfaceData(v16); /*0x4e974a*/
          if ( SurfaceData ) /*0x4e974e*/
          {
            Head = (float *)EmbeddedList_GetHead(v17); /*0x4e9752*/
            v20 = sub_4121A0(&start->x, &v32, Head); /*0x4e975f*/
            geometryContexta = NiPoint3_Length(v20); /*0x4e976b*/
            v25 = (float *)EmbeddedList_GetHead((char *)SurfaceData); /*0x4e9779*/
            v21 = (float *)EmbeddedList_GetHead(v17); /*0x4e9781*/
            v22 = sub_4121A0(v21, v35, v25); /*0x4e9788*/
            a1e = NiPoint3_Length(v22); /*0x4e9794*/
            if ( a1e > (double)geometryContexta ) /*0x4e97aa*/
            {
              v23 = (NiDX92DBufferData *)sub_42B410((BSExtraData *)geometryContext); /*0x4e97ae*/
              sub_68C170((NiSurfaceData **)geometryContext, v23); /*0x4e97b6*/
            }
          }
        }
        v24 = 1; /*0x4e97bb*/
      }
      else
      {
        v24 = 0; /*0x4e97bf*/
      }
      sub_4E8E80(this); /*0x4e97c7*/
      v37 = 0xFFFFFFFF; /*0x4e97d0*/
      Shared_NoOpVirtual_60D0A0(v36); /*0x4e97d8*/
      return v24; /*0x4e97dd*/
    }
  }
  return result; /*0x4e96ef*/
}
