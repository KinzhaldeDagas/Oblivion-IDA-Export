bool __thiscall Actor::IsEssential(Actor *this)
{
  TESActorBase *v2; // ebx
  TESActorBase *v3; // edi

  v2 = 0; /*0x5e1d3d*/
  v3 = (TESActorBase *)this->vtbl->super.super.GetBaseForm(this); /*0x5e1d41*/
  if ( v3 ) /*0x5e1d45*/
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5e1d51*/
      v2 = v3; /*0x5e1d57*/
  }
  return (v2->super.actorBaseData.flags & kFlag_IsEssential) != 0; /*0x5e1d5c*/
}
