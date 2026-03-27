bool __thiscall Actor_IsCreature(Actor *this)
{
  return this->vtbl->super.super.GetBaseForm(this)->member.type == kFormType_Creature;
}
