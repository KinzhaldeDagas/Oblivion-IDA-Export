double __thiscall TESObjectREFR_GetScale(TESObjectREFR *this)
{
  float scale; // [esp+4h] [ebp-4h]

  scale = this->member.scale;
  if ( this->vtbl->GetBaseForm((TESChildCELL *)this) )
  {
    if ( this->vtbl->GetBaseForm(this)->member.type == kFormType_Creature )
      return (float)(*(float *)&this->vtbl->GetBaseForm(this)[0xB].member.refID * scale);
  }
  return scale;
}
