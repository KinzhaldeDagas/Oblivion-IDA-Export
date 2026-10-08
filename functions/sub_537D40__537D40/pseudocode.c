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

  v0 = sub_537CC0(); /*0x537d50*/
  v1 = *((_DWORD *)v0 + 8); /*0x537d52*/
  v0[7] = flt_A3B888; /*0x537d55*/
  for ( i = 0; i < v1; ++i ) /*0x537d5c*/
  {
    for ( j = 0; j < v1; ++j ) /*0x537d62*/
    {
      WaterHeight = flt_A3B888; /*0x537d7e*/
      cell = (ExtraDataList *)GetGridEntry(MEMORY[0xB333A0]->gridCellArray, i, j)->cell; /*0x537d89*/
      if ( cell ) /*0x537d8d*/
      {
        if ( (cell[1].members.m_presenceBitfield[8] & 2) != 0 ) /*0x537d98*/
          WaterHeight = TESObjectCELL_GetWaterHeight(cell); /*0x537d9f*/
      }
      v5 = WaterHeight; /*0x537da6*/
      v10 = hkFactor * WaterHeight; /*0x537db8*/
      *(float *)(*((_DWORD *)v0 + 6) + 4 * (i + j * *((_DWORD *)v0 + 8))) = v10; /*0x537dc2*/
      if ( v0[7] < v5 ) /*0x537dcf*/
        v0[7] = v5; /*0x537dd1*/
    }
  }
  GridEntry = GetGridEntry(MEMORY[0xB333A0]->gridCellArray, 0, 0); /*0x537df7*/
  v7 = GridEntry->cell; /*0x537dfc*/
  if ( GridEntry->cell ) /*0x537dfc*/
  {
    *((_DWORD *)v0 + 9) = TESObjectCELL_GetXCoordinate(GridEntry->cell); /*0x537e0b*/
    *((_DWORD *)v0 + 0xA) = TESObjectCELL_GetYCoordinate(v7); /*0x537e13*/
  }
  if ( v0[7] == dbl_A40398 ) /*0x537e24*/
  {
    *((_BYTE *)v0 + 8) = 0; /*0x537e33*/
    return 0; /*0x537e31*/
  }
  else
  {
    *((_BYTE *)v0 + 8) = 1; /*0x537e28*/
    return 1; /*0x537e26*/
  }
}
