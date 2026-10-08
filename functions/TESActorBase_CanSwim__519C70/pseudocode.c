bool __thiscall TESActorBase_CanSwim(TESActorBase *this)
{
  bool result; // al

  result = 1; /*0x519c74*/
  if ( this->super.super.super.type == kFormType_Creature && (this->super.actorBaseData.flags & 0x10) == 0 ) /*0x519c80*/
    return (this->super.actorBaseData.flags & 1) != 0; /*0x519c87*/
  return result; /*0x519c89*/
}
