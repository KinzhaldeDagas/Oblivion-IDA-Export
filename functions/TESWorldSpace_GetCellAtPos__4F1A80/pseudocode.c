void __thiscall TESWorldSpace::GetCellAtPos(TESWorldSpace *this, float *a2)
{
  TESWorldSpace::GetCellAtCellCoord(this, (int)*a2 >> 0xC, (int)a2[1] >> 0xC);
}
