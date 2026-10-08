UINT32 __thiscall Actor_IsFemale(Actor *this)
{
  TESForm *v2; // ebx
  TESForm *v3; // edi

  v2 = 0; /*0x5e1dfd*/
  v3 = this->vtbl->super.super.GetBaseForm(this); /*0x5e1e01*/
  if ( v3 ) /*0x5e1e05*/
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5e1e11*/
      v2 = v3; /*0x5e1e17*/
  }
  return TESActorBase_IsFemale(v2); /*0x5e1e19*/
}
