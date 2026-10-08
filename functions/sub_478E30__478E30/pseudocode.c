// Clear ActorSkinInfo light equipment slot at +0x12C; called by native UnequipLight handling.
void __thiscall ActorSkinInfo_ClearLightSlot(ActorSkinInfo *this)
{
  TESObjectLIGH *LightForm; // ecx
  char v3; // al

  LightForm = this->LightForm; /*0x478e33*/
  if ( LightForm ) /*0x478e41*/
  {
    if ( *((_BYTE *)LightForm + 4) == 0x1A ) /*0x478e47*/
      ActorSkinInfo_ClearOrReplaceEquipmentSlot(this, (ActorSkinInfoEquipmentSlot *)&this->LightForm, 1, 0); /*0x478e50*/
  }
  if ( (PlayerCharacter *)this->owner == reference ) /*0x478e61*/
  {
    v3 = sub_65D770(reference, (int)this); /*0x478e64*/
    sub_663870((Ni2DBuffer **)reference, 0, v3); /*0x478e72*/
  }
}
