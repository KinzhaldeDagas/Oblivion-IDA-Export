TESObjectCELL *__thiscall TESWorldSpace_GetCellAtWorldPosition(TESWorldSpace *this, float *worldXY)
{
  return TESWorldSpace::GetCellAtCellCoord(this, (int)*worldXY >> 0xC, (int)worldXY[1] >> 0xC); /*0x4f1ab7*/
}
