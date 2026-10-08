double __thiscall TESObjectREFR_GetScale(TESObjectREFR *this)
{
  float scale; // [esp+4h] [ebp-4h]

  scale = this->member.scale; /*0x4d726f*/
  if ( this->vtbl->GetBaseForm((TESChildCELL *)this) ) /*0x4d7273*/
  {
    if ( this->vtbl->GetBaseForm(this)->member.type == kFormType_Creature ) /*0x4d7289*/
      return (float)(*(float *)&this->vtbl->GetBaseForm(this)[0xB].member.refID * scale); /*0x4d72a1*/
  }
  return scale; /*0x4d72a9*/
}
