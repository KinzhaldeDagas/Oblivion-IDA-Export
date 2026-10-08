// Set ActorSkinInfo light slot form at +0x12C after validating Oblivion form type 0x1A (LIGH).
void __thiscall ActorSkinInfo_SetLightSlotForm(ActorSkinInfo *this, TESForm *form)
{
  TESObjectLIGH **p_LightForm; // edi

  if ( form ) /*0x478dfa*/
  {
    if ( form->member.type == kFormType_Light ) /*0x478e00*/
    {
      p_LightForm = &this->LightForm; /*0x478e07*/
      ActorSkinInfo_ClearOrReplaceEquipmentSlot(this, (ActorSkinInfoEquipmentSlot *)&this->LightForm, 1, 0); /*0x478e0e*/
      *p_LightForm = (TESObjectLIGH *)form; /*0x478e13*/
      this->LightModel = (TESModel *)&form[2]; /*0x478e18*/
    }
  }
}
