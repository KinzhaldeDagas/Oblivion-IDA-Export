char __thiscall Actor::IsNoRumor(Actor *this)
{
  ExtraNoRoumor *ExtraData; // eax
  TESActorBase *v4; // ebx
  TESActorBase *v5; // edi

  if ( !Actor_IsNPC(this) )
    return 1;
  ExtraData = (ExtraNoRoumor *)BaseExtraList_GetExtraData(
                                 &this->members.super.super.baseExtraList,
                                 kExtraData_HasNoRumors);
  if ( ExtraData )
    return ExtraData->NoRumour;
  v4 = 0;
  v5 = (TESActorBase *)this->vtbl->super.super.GetBaseForm(this);
  if ( v5 )
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) )
      v4 = v5;
  }
  return (v4->super.actorBaseData.flags & kFlag_NoRumors) != 0;
}
