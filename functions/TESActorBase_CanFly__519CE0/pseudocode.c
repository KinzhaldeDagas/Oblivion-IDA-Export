char __thiscall TESActorBase_CanFly(TESActorBase *this)
{
  return this->super.super.super.type == kFormType_Creature && (this->super.actorBaseData.flags & 0x20) != 0;
}
