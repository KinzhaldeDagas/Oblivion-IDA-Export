UINT32 __thiscall Actor_IsFemale(Actor *this)
{
  TESForm *v2; // ebx
  TESForm *v3; // edi

  v2 = 0;
  v3 = this->vtbl->super.super.GetBaseForm(this);
  if ( v3 )
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) )
      v2 = v3;
  }
  return TESActorBase_IsFemale(v2);
}
