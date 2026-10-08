// Installs only form type 0x22 (AMMO) into ActorSkinInfo AmmoForm at +0x10C after clearing prior state; AmmoModel at +0x110 points to the form's embedded TESModel at form+0x30.
void __thiscall ActorSkinInfo_SetAmmoSlotForm(ActorSkinInfo *this, TESForm *ammoForm)
{
  TESForm **p_AmmoForm; // edi

  if ( ammoForm ) /*0x478d7a*/
  {
    if ( ammoForm->member.type == kFormType_Ammo ) /*0x478d80*/
    {
      p_AmmoForm = &this->AmmoForm; /*0x478d87*/
      ActorSkinInfo_ClearOrReplaceEquipmentSlot(this, (ActorSkinInfoEquipmentSlot *)&this->AmmoForm, 1, 0); /*0x478d8e*/
      *p_AmmoForm = ammoForm; /*0x478d93*/
      this->AmmoModel = (TESModel *)&ammoForm[2]; /*0x478d98*/
    }
  }
}
