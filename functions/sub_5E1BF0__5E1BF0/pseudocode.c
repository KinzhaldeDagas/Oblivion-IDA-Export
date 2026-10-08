// Verified Actor blood-particle path dispatch: resolves actor base, checks actor form, then invokes actor-base virtual +0x40. For creatures this reaches their NoBloodSpray/per-creature model override.
const char *__thiscall Actor_GetBloodParticlePath(Actor *self)
{
  TESForm *v2; // ebx
  TESForm *v3; // edi

  v2 = 0; /*0x5e1bfd*/
  v3 = self->vtbl->super.super.GetBaseForm(self); /*0x5e1c01*/
  if ( v3 ) /*0x5e1c05*/
  {
    if ( self->vtbl->super.super.IsActor((TESObjectREFR *)self) ) /*0x5e1c11*/
      v2 = v3; /*0x5e1c17*/
  }
  return (*(const char *(__thiscall **)(UInt32 *))(v2[1].member.refID + 0x40))(&v2[1].member.refID); /*0x5e1c23*/
}
