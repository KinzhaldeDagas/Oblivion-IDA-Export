int __thiscall TESWorldSpace::GetIndexForCellCoord(TESWorldSpace *this, int a2, int a3)
{
  int v4; // esi
  int v5; // ebp
  int v6; // edi

  v4 = Double_To_SInt32(this->unk0AC[0]) >> 0xC;
  v5 = Double_To_SInt32(this->unk0AC[1]) >> 0xC;
  v6 = Double_To_SInt32(this->unk0AC[2]) >> 0xC;
  if ( a2 > v6 || a2 < v4 || a3 > Double_To_SInt32(this->unk0AC[3]) >> 0xC || a3 < v5 )
    return 0xFFFFFFFF;
  else
    return a2 + (a3 - v5) * (v6 - v4 + 1) - v4;
}
