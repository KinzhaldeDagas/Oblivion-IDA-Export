// Installs only form type 0x21 (WEAP) into ActorSkinInfo WeaponForm at +0xDC after clearing prior state; WeaponModel at +0xE0 points to the form's embedded TESModel at form+0x30.
void __thiscall ActorSkinInfo_SetWeaponSlotForm(ActorSkinInfo *this, TESForm *weaponForm)
{
  TESObjectWEAP **p_WeaponForm; // edi

  if ( weaponForm ) /*0x478caa*/
  {
    if ( weaponForm->member.type == kFormType_Weapon ) /*0x478cb0*/
    {
      p_WeaponForm = &this->WeaponForm; /*0x478cb7*/
      ActorSkinInfo_ClearOrReplaceEquipmentSlot(this, (ActorSkinInfoEquipmentSlot *)&this->WeaponForm, 1, 0); /*0x478cbe*/
      *p_WeaponForm = (TESObjectWEAP *)weaponForm; /*0x478cc3*/
      this->WeaponModel = (TESModel *)&weaponForm[2]; /*0x478cc8*/
    }
  }
}
