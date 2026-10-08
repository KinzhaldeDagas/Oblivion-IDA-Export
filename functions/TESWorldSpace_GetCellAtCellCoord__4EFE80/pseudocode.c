TESObjectCELL *__thiscall TESWorldSpace::GetCellAtCellCoord(TESWorldSpace *this, int cellX, int cellY)
{
  NiTMap_TESCELL *cellMap; // ecx
  char v4; // al
  int v6; // [esp-Ch] [ebp-Ch]

  if ( cellX > 0x7FFF || cellY > 0x7FFF || cellX < (int)0xFFFF8000 || cellY < (int)0xFFFF8000 )
  {
    PrintError( /*0x4efee3*/
      "Trying to get exterior cell for invalid cell coordinate. Values must be between %i and %i.",
      0xFFFF8000,
      0x7FFF);
    return 0; /*0x4efeeb*/
  }
  else
  {
    cellMap = this->cellMap; /*0x4efea6*/
    v6 = (unsigned __int16)cellY | ((__int16)cellX << 0x10); /*0x4efeba*/
    cellX = 0; /*0x4efebb*/
    v4 = NiTMap_GetAt(cellMap, v6, &cellX); /*0x4efec3*/
    return v4 != 0 ? (TESObjectCELL *)cellX : 0;
  }
}
