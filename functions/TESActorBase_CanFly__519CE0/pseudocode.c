// TESActorBase_CanFly: creature base flag 0x20. Actor_FallImpact skips fall damage for can-fly actors; Slowfall/climb discipline should not overwrite natural flying behavior.
char __thiscall TESActorBase_CanFly(TESActorBase *this)
{
  return this->super.super.super.type == kFormType_Creature && (this->super.actorBaseData.flags & 0x20) != 0; /*0x519cee*/
}
