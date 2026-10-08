// EngineFix trace 2026-05-11: GetIndexForCellCoord validates coordinates against worldspace [0xAC..0xB8] bounds. DoPostFixups offset-table allocation is based on [0x98..0xA4], so callers that write into rebuilt tables must separately check index against the allocation rectangle.
int __thiscall TESWorldSpace::GetIndexForCellCoord(TESWorldSpace *this, int a2, int a3)
{
  int v4; // esi
  int v5; // ebp
  int v6; // edi

  v4 = Double_To_SInt32(this->unknown0AC[0]) >> 0xC; /*0x4eef09*/
  v5 = Double_To_SInt32(this->unknown0AC[1]) >> 0xC; /*0x4eef19*/
  v6 = Double_To_SInt32(this->unknown0AC[2]) >> 0xC; /*0x4eef27*/
  if ( a2 > v6 || a2 < v4 || a3 > Double_To_SInt32(this->unknown0AC[3]) >> 0xC || a3 < v5 ) /*0x4eef4a*/
    return 0xFFFFFFFF; /*0x4eef68*/
  else
    return a2 + (a3 - v5) * (v6 - v4 + 1) - v4; /*0x4eef5b*/
}
