// Verified preload reset link: changeMask0x10000000 clears collection at complete TESActorBase +0xD0, retaining permanent magicka/fatigue allocations with zero values. Paired with load serializer 0x51A6F0 and AVCollection_Load 0x65CBB0.
void __thiscall TESActorBase_PreLoadModified(TESActorBase *self, unsigned int changeMask)
{
  if ( (changeMask & 0x10000000) != 0 ) /*0x519c38*/
    AVCollection_Clear(&self->super.actorValueModifiers); /*0x519c40*/
}
