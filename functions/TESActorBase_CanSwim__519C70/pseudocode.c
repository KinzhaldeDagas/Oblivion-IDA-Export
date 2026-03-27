bool __thiscall TESActorBase_CanSwim(TESActorBase *this)
{
  bool result; // al

  result = 1;
  if ( this->super.super.super.type == kFormType_Creature && (this->super.actorBaseData.flags & 0x10) == 0 )
    return (this->super.actorBaseData.flags & 1) != 0;
  return result;
}
