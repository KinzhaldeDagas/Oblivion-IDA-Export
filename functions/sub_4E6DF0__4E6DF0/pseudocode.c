// Verified cross-cell endpoint lookup: compute cellX/cellY by arithmetic-shifting world X/Y by 12, search that WorldSpace's pathgrids, and also test the preceding X and/or Y cell when the point lies exactly on a 4096-unit boundary. Excludes the source PathGrid, returns the matching point, and outputs its owning PathGrid.
TESPathGridPoint *__cdecl TESPathGrid_FindPointInNeighborCell(
        const NiPoint3 *position,
        TESWorldSpace *worldspace,
        TESPathGrid **outOwningGrid,
        TESPathGrid *excludedGrid)
{
  int v4; // eax
  int v5; // ebp
  int v6; // ebx
  int v7; // edi
  TESObjectCELL *CellAtCellCoord; // eax
  TESPathGrid *v9; // eax
  TESPathGrid *v10; // esi
  int v12; // [esp+4h] [ebp-14h]
  int v13; // [esp+8h] [ebp-10h]
  signed int cellYa; // [esp+Ch] [ebp-Ch]
  signed int cellY; // [esp+Ch] [ebp-Ch]
  int y; // [esp+10h] [ebp-8h]
  int v17; // [esp+10h] [ebp-8h]
  TESPathGridPoint *PointByPositionInCell; // [esp+14h] [ebp-4h]

  PointByPositionInCell = 0; /*0x4e6dfe*/
  *outOwningGrid = 0; /*0x4e6e02*/
  if ( !worldspace ) /*0x4e6e04*/
    worldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x4e6e11*/
  cellYa = (int)position->x; /*0x4e6e23*/
  y = (int)position->y; /*0x4e6e32*/
  v13 = cellYa % 0x1000 == 0; /*0x4e6e56*/
  v12 = y % 0x1000 == 0; /*0x4e6e76*/
  v4 = cellYa >> 0xC; /*0x4e6e81*/
  cellY = y >> 0xC; /*0x4e6e88*/
  v17 = 0; /*0x4e6e8c*/
  v5 = v4; /*0x4e6e98*/
  do /*0x4e6f14*/
  {
    v6 = 0; /*0x4e6ea0*/
    v7 = cellY; /*0x4e6ea8*/
    while ( 1 ) /*0x4e6eb6*/
    {
      CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(worldspace, v5, v7); /*0x4e6eb6*/
      if ( CellAtCellCoord ) /*0x4e6ebd*/
      {
        v9 = (TESPathGrid *)sub_4AF170(CellAtCellCoord); /*0x4e6ec1*/
        v10 = v9; /*0x4e6ec6*/
        if ( v9 ) /*0x4e6eca*/
        {
          if ( v9 != excludedGrid ) /*0x4e6ed0*/
          {
            PointByPositionInCell = TESPathGrid_FindPointByPositionInCell(v9, position); /*0x4e6ee0*/
            if ( PointByPositionInCell ) /*0x4e6ee4*/
              break; /*0x4e6ee4*/
          }
        }
      }
      ++v6; /*0x4e6ee6*/
      --v7; /*0x4e6ee9*/
      if ( v6 > v12 ) /*0x4e6ef0*/
        goto LABEL_12; /*0x4e6ef0*/
    }
    *outOwningGrid = v10; /*0x4e6ef8*/
LABEL_12:
    if ( PointByPositionInCell ) /*0x4e6f00*/
      break; /*0x4e6f00*/
    --v5; /*0x4e6f09*/
    ++v17; /*0x4e6f10*/
  }
  while ( v17 <= v13 ); /*0x4e6f14*/
  return PointByPositionInCell; /*0x4e6f1b*/
}
