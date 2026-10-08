char __thiscall TESObjectREFR_IsDead(TESObjectREFR *this, int unk)
{
  TESForm *v3; // eax
  double v4; // st7
  char result; // al
  int HealthForForm; // [esp+8h] [ebp-4h]

  if ( !this->vtbl->IsActor(this) ) /*0x4d7ddf*/
    return 0; /*0x4d7ddf*/
  if ( this->member.super.refID == 7 ) /*0x4d7de9*/
    return 0; /*0x4d7de9*/
  v3 = this->vtbl->GetBaseForm(this); /*0x4d7df5*/
  HealthForForm = TESHealthForm_GetHealthForForm(v3); /*0x4d7e02*/
  v4 = (double)HealthForForm; /*0x4d7e06*/
  if ( HealthForForm < 0 ) /*0x4d7e0a*/
    v4 = v4 + flt_A2FC78; /*0x4d7e0c*/
  result = 1; /*0x4d7e1a*/
  if ( v4 > *(float *)&SrcStr ) /*0x4d7e1f*/
    return 0; /*0x4d7e21*/
  return result; /*0x4d7e23*/
}
