// Clear one ActorSkinInfo ring equipment slot: secondSlot=false selects biped slot 6 at +0xAC, true selects biped slot 7 at +0xBC. Exact left/right polarity is not proven.
void __thiscall ActorSkinInfo_ClearRingSlot(ActorSkinInfo *this, bool secondSlot)
{
  ActorSkinInfo_ClearOrReplaceEquipmentSlot( /*0x478e98*/
    this,
    (ActorSkinInfoEquipmentSlot *)(&this->RingSlot6Form + 4 * secondSlot),
    1,
    0);
}
