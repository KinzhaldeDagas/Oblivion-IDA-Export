BSExtraData *__thiscall TESForm::GetExtraXTarget(TESObjectREFR *this)
{
  if ( this->vtbl->GetBaseForm(this) == MEMORY[0xB35EAC] || this->vtbl->GetBaseForm(this) == (TESForm *)MEMORY[0xB35EB0] ) /*0x4d7907*/
    return (BSExtraData *)ExtraDataList_GetXTarget(&this->member.baseExtraList); /*0x4d7911*/
  else
    return 0; /*0x4d7909*/
}
