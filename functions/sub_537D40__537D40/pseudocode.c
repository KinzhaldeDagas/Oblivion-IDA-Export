char sub_537D40()
{
  float *v0; // edi
  int v1; // ebp
  int i; // ebx
  int j; // esi
  ExtraDataList *cell; // ecx
  double v5; // st7
  GridEntry *GridEntry; // eax
  TESObjectCELL *v7; // esi
  float WaterHeight; // [esp+10h] [ebp-4h]
  float v10; // [esp+10h] [ebp-4h]

  v0 = sub_537CC0();
  v1 = *((_DWORD *)v0 + 8);
  v0[7] = flt_A3B888;
  for ( i = 0; i < v1; ++i )
  {
    for ( j = 0; j < v1; ++j )
    {
      WaterHeight = flt_A3B888;
      cell = (ExtraDataList *)GetGridEntry(TES->gridCellArray, i, j)->cell;
      if ( cell )
      {
        if ( (cell[1].members.m_presenceBitfield[8] & 2) != 0 )
          WaterHeight = TESObjectCELL_GetWaterHeight(cell);
      }
      v5 = WaterHeight;
      v10 = hkFactor * WaterHeight;
      *(float *)(*((_DWORD *)v0 + 6) + 4 * (i + j * *((_DWORD *)v0 + 8))) = v10;
      if ( v0[7] < v5 )
        v0[7] = v5;
    }
  }
  GridEntry = GetGridEntry(TES->gridCellArray, 0, 0);
  v7 = GridEntry->cell;
  if ( GridEntry->cell )
  {
    *((_DWORD *)v0 + 9) = TESObjectCELL_GetXCoordinate(GridEntry->cell);
    *((_DWORD *)v0 + 0xA) = TESObjectCELL_GetYCoordinate(v7);
  }
  if ( v0[7] == dbl_A40398 )
  {
    *((_BYTE *)v0 + 8) = 0;
    return 0;
  }
  else
  {
    *((_BYTE *)v0 + 8) = 1;
    return 1;
  }
}
