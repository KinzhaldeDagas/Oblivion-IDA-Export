bool __thiscall TESObjectCELL_HasMiddleLowProcess(TESObjectCELL *this)
{
  return BaseExtraList_GetExtraData(&this->members.extraData, kExtraData_ProcessMiddleLow) != 0; /*0x4c9fbf*/
}
