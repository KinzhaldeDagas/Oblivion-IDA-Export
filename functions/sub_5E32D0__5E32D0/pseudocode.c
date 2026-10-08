// Direct base-form predicate: GetBaseForm()->type == kFormType_NPC (0x23). Unlike Actor_IsNPC, this compact helper assumes the receiver/base form are valid.
bool __thiscall Actor::HasNPCBaseForm(Actor *this)
{
  return this->vtbl->super.super.GetBaseForm(this)->member.type == kFormType_NPC; /*0x5e32e1*/
}
