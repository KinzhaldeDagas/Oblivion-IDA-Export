// TESObjectREFR_GetQuestItem delegates to base form IsQuestItem. For inventory base forms, checking TESForm::IsQuestItem is sufficient.
char __thiscall TESObjectREFR_GetQuestItem(TESObjectREFR *this)
{
  TESForm *v2; // eax

  if ( !this->vtbl->GetBaseForm((TESChildCELL *)this) ) /*0x4d9b1b*/
    return 0; /*0x4d9b37*/
  v2 = this->vtbl->GetBaseForm(this); /*0x4d9b2b*/
  return ((char (__thiscall *)(TESForm *))v2->vtbl->Unk_1E)(v2); /*0x4d9b39*/
}
