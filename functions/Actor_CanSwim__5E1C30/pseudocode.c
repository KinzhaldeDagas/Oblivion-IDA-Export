bool __thiscall Actor_CanSwim(Actor *this)
{
  TESForm *v2; // ebx
  TESForm *v3; // edi

  v2 = 0; /*0x5e1c3d*/
  v3 = this->vtbl->super.super.GetBaseForm((TESObjectREFR *)this); /*0x5e1c41*/
  if ( v3 ) /*0x5e1c45*/
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5e1c51*/
      v2 = v3; /*0x5e1c57*/
  }
  return TESActorBase_CanSwim((TESActorBase *)v2); /*0x5e1c59*/
}
