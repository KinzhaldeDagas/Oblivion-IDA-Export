bool __thiscall Actor::IsEssential(Actor *this)
{
  TESActorBase *v2; // ebx
  TESActorBase *v3; // edi

  v2 = 0;
  v3 = (TESActorBase *)this->vtbl->super.super.GetBaseForm(this);
  if ( v3 )
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) )
      v2 = v3;
  }
  return (v2->super.actorBaseData.flags & kFlag_IsEssential) != 0;
}
