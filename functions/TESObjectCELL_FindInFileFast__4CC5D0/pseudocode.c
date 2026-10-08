bool __thiscall TESObjectCELL::FindInFileFast(TESObjectCELL *this, Data *a2)
{
  TESCELL_CoordOrLight v3; // eax
  char *unk028; // eax
  TESWorldSpace *worldSpace; // ecx
  CellCoordinates *coords; // eax
  SInt32 y; // edx
  SInt32 x; // eax

  if ( !a2 ) /*0x4cc5da*/
    return 0; /*0x4cc5da*/
  if ( !TESFile_GetIsMaster(a2) ) /*0x4cc5de*/
    return 0; /*0x4cc5de*/
  if ( (this->members.flags0 & kFlags0_Interior) != 0 ) /*0x4cc5eb*/
  {
    v3.lighting = (LightingData *)this->members.coordOrLight; /*0x4cc5ed*/
    if ( v3.coords ) /*0x4cc5f2*/
    {
      unk028 = (char *)v3.lighting->unk028; /*0x4cc5f4*/
      if ( unk028 ) /*0x4cc5f9*/
        TESFIle_JumpToRecord(a2, unk028); /*0x4cc5fe*/
    }
  }
  else
  {
    worldSpace = this->members.worldSpace; /*0x4cc605*/
    if ( worldSpace ) /*0x4cc60a*/
    {
      coords = this->members.coordOrLight.coords; /*0x4cc60c*/
      if ( coords ) /*0x4cc611*/
        y = coords->y; /*0x4cc613*/
      else
        y = 0; /*0x4cc618*/
      if ( coords ) /*0x4cc61c*/
        x = coords->x; /*0x4cc61e*/
      else
        x = 0; /*0x4cc622*/
      TESWorldSpace::FindCellInFile(worldSpace, a2, x, y); /*0x4cc627*/
    }
  }
  return TESFile_GetRecordType(a2) == kFormType_Cell && a2->currentRecord.formID == this->members.super.refID; /*0x4cc644*/
}
