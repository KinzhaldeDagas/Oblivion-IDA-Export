BOOL __thiscall sub_5E1DB0(Actor *this)
{
  TESActorBase *v2; // ebx
  TESForm *v3; // edi

  v2 = 0; /*0x5e1dbd*/
  v3 = this->vtbl->super.super.GetBaseForm(this); /*0x5e1dc1*/
  if ( v3 ) /*0x5e1dc5*/
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5e1dd1*/
      v2 = (TESActorBase *)v3; /*0x5e1dd7*/
  }
  return (v2->super.actorBaseData.flags & 0x200) == 0; /*0x5e1de1*/
}
