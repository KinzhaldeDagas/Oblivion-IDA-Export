int __thiscall TESWorldSpace::GetCellAtCellCoord(TESWorldSpace *this, signed int a2, signed int a3)
{
  NiTMap_TESCELL *cellMap; // ecx
  char v4; // al
  int v6; // [esp-Ch] [ebp-Ch]

  if ( a2 > 0x7FFF || a3 > 0x7FFF || a2 < (int)0xFFFF8000 || a3 < (int)0xFFFF8000 )
  {
    PrintError(
      "Trying to get exterior cell for invalid cell coordinate. Values must be between %i and %i.",
      0xFFFF8000,
      0x7FFF);
    return 0;
  }
  else
  {
    cellMap = this->cellMap;
    v6 = (unsigned __int16)a3 | ((__int16)a2 << 0x10);
    a2 = 0;
    v4 = NiTMap_GetAt(cellMap, v6, &a2);
    return v4 != 0 ? a2 : 0;
  }
}
