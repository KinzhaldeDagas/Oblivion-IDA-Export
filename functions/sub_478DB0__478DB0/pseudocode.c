// Clears ActorSkinInfo ammo form/model/3D state at +0x10C/+0x110/+0x114.
void __thiscall ActorSkinInfo_ClearAmmoSlot(ActorSkinInfo *this)
{
  ActorSkinInfo_ClearOrReplaceEquipmentSlot(this, (ActorSkinInfoEquipmentSlot *)&this->AmmoForm, 1, 0); /*0x478dbb*/
}
