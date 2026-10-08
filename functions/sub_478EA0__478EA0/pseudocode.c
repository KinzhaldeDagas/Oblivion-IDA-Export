// Clear ActorSkinInfo amulet equipment slot at +0xCC; this is biped slot 8 teardown.
void __thiscall ActorSkinInfo_ClearAmuletSlot(ActorSkinInfo *this)
{
  ActorSkinInfo_ClearOrReplaceEquipmentSlot(this, (ActorSkinInfoEquipmentSlot *)&this->AmuletForm, 1, 0); /*0x478eab*/
}
