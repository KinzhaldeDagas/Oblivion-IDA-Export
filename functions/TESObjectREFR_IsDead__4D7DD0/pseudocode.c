char __thiscall TESObjectREFR_IsDead(TESObjectREFR *this, int unk)
{
  TESForm *v3; // eax
  double v4; // st7
  char result; // al
  int HealthForForm; // [esp+8h] [ebp-4h]

  if ( !this->vtbl->IsActor(this) )
    return 0;
  if ( this->member.super.refID == 7 )
    return 0;
  v3 = this->vtbl->GetBaseForm(this);
  HealthForForm = TESHealthForm_GetHealthForForm(v3);
  v4 = (double)HealthForForm;
  if ( HealthForForm < 0 )
    v4 = v4 + flt_A2FC78;
  result = 1;
  if ( v4 > *(float *)&SrcStr )
    return 0;
  return result;
}
