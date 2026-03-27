TESWaterForm *__thiscall TESObjectCELL::GetWaterForm(TESObjectCELL *this)
{
  TESWaterForm *result; // eax
  TESWorldSpace *worldSpace; // ecx

  result = ExtraDataList::GetWaterForm(&this->members.extraData);
  if ( !result )
  {
    if ( (this->members.flags0 & 1) != 0 )
      return TESDataHandler_g_DefaultWater;
    worldSpace = this->members.worldSpace;
    if ( !worldSpace )
      return TESDataHandler_g_DefaultWater;
    result = TESWorldSpace::GetWaterFormParents(worldSpace);
    if ( !result )
      return TESDataHandler_g_DefaultWater;
  }
  return result;
}
