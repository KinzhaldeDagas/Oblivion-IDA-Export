char __thiscall TESObjectREFR_GetQuestItem(TESObjectREFR *this)
{
  TESForm *v2; // eax

  if ( !this->vtbl->GetBaseForm((TESChildCELL *)this) )
    return 0;
  v2 = this->vtbl->GetBaseForm(this);
  return ((char (__thiscall *)(TESForm *))v2->vtbl->Unk_1E)(v2);
}
