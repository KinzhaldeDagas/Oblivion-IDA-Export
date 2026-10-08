bool __thiscall Actor_IsNPC(Actor *this)
{
  return this->vtbl->super.super.IsActor((TESObjectREFR *)this) /*0x4d7fb5*/
      && this->vtbl->super.super.GetBaseForm(this)
      && this->vtbl->super.super.GetBaseForm(this)->member.type == kFormType_NPC;
}
