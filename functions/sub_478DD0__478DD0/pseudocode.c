// Clear ActorSkinInfo shield equipment slot at +0x11C ({form, model, object3D}); this is biped slot 13 teardown.
void __thiscall ActorSkinInfo_ClearShieldSlot(ActorSkinInfo *this)
{
  ActorSkinInfo_ClearOrReplaceEquipmentSlot(this, (ActorSkinInfoEquipmentSlot *)&this->ShieldForm, 1, 0); /*0x478ddb*/
}
