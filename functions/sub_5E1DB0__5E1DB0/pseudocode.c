BOOL __thiscall sub_5E1DB0(Actor *this)
{
  TESActorBase *v2; // ebx
  TESForm *v3; // edi

  v2 = 0;
  v3 = this->vtbl->super.super.GetBaseForm(this);
  if ( v3 )
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) )
      v2 = (TESActorBase *)v3;
  }
  return (v2->super.actorBaseData.flags & 0x200) == 0;
}
