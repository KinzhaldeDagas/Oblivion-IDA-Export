// Oblivion actor prefilter used only by ShadowPass before mounted/sitting, refraction, invisibility, and map-budget checks. Requires the actor/process-derived state predicate to be clear and rejects ExtraGhost. Name intentionally describes observed shadow-pass use without importing later-version behavior.
bool __thiscall Actor__PassesBaseShadowEligibility(Actor *this)
{
  TESForm *v2; // ebx
  TESForm *v3; // edi

  v2 = 0; /*0x5ea5ed*/
  v3 = this->vtbl->super.super.GetBaseForm(this); /*0x5ea5f1*/
  if ( v3 ) /*0x5ea5f5*/
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5ea601*/
      v2 = v3; /*0x5ea607*/
  }
  return !(*(unsigned __int8 (__thiscall **)(UInt32 *))(v2[1].member.refID + 0x24))(&v2[1].member.refID) /*0x5ea624*/
      && !BaseExtraList_HasGhost(&this->members.super.super.baseExtraList);
}
