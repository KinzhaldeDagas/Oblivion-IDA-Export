bool __thiscall TESObjectCELL::FindInFileFast(TESObjectCELL *this, Data *a2)
{
  TESCELL_CoordOrLight v3; // eax
  char *unk028; // eax
  TESWorldSpace *worldSpace; // ecx
  CellCoordinates *coords; // eax
  SInt32 y; // edx
  SInt32 x; // eax

  if ( !a2 )
    return 0;
  if ( !TESFile_GetIsMaster(a2) )
    return 0;
  if ( (this->members.flags0 & kFlags0_Interior) != 0 )
  {
    v3.lighting = (LightingData *)this->members.coordOrLight;
    if ( v3.coords )
    {
      unk028 = (char *)v3.lighting->unk028;
      if ( unk028 )
        TESFIle_JumpToRecord(a2, unk028);
    }
  }
  else
  {
    worldSpace = this->members.worldSpace;
    if ( worldSpace )
    {
      coords = this->members.coordOrLight.coords;
      if ( coords )
        y = coords->y;
      else
        y = 0;
      if ( coords )
        x = coords->x;
      else
        x = 0;
      TESWorldSpace::FindCellInFile(worldSpace, a2, x, y);
    }
  }
  return TESFile_GetRecordType(a2) == kFormType_Cell && a2->currentRecord.formID == this->members.super.refID;
}
