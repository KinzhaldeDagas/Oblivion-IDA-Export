__int16 __thiscall Actor_GetLevel(Actor *this)
{
  TESActorBase *v2; // ebx
  TESActorBase *v3; // edi

  v2 = 0; /*0x5e1fdd*/
  v3 = (TESActorBase *)this->vtbl->super.super.GetBaseForm(this); /*0x5e1fe1*/
  if ( v3 ) /*0x5e1fe5*/
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5e1ff1*/
      v2 = v3; /*0x5e1ff7*/
  }
  return TESActorBaseData_GetLevel(&v2->super.actorBaseData); /*0x5e1ff9*/
}
