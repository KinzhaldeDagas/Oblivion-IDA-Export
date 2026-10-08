TESWaterForm *__thiscall TESObjectCELL::GetWaterForm(TESObjectCELL *this)
{
  TESWaterForm *result; // eax
  TESWorldSpace *worldSpace; // ecx

  result = ExtraDataList::GetWaterForm(&this->members.extraData); /*0x4cafc6*/
  if ( !result ) /*0x4cafcd*/
  {
    if ( (this->members.flags0 & 1) != 0 ) /*0x4cafd3*/
      return MEMORY[0xB360AC]; /*0x4cafd3*/
    worldSpace = this->members.worldSpace; /*0x4cafd5*/
    if ( !worldSpace ) /*0x4cafda*/
      return MEMORY[0xB360AC]; /*0x4cafda*/
    result = TESWorldSpace::GetWaterFormParents(worldSpace); /*0x4cafdc*/
    if ( !result ) /*0x4cafe3*/
      return MEMORY[0xB360AC]; /*0x4cafe5*/
  }
  return result; /*0x4cafea*/
}
