//
// Verified truth table: returns !(GetNoBloodDecal() && GetNoBloodSpray()), NOT permission for both effects. Component vslots +0x30 and +0x28 are checked with short-circuit evaluation. Fallout HasBlood 0x82616938 has a corresponding terminal two-predicate gate but also gore/child/critical-stage checks absent from this Oblivion helper. Similarity is partial; do not transplant Fallout guards.
bool __thiscall Actor_ShouldEmitBloodEffects(Actor *self)
{
  TESForm *v2; // ebx
  TESForm *v3; // edi
  TESForm *v4; // ebx
  TESForm *v5; // edi

  v2 = 0; /*0x5e1b3d*/
  v3 = self->vtbl->super.super.GetBaseForm(self); /*0x5e1b41*/
  if ( v3 ) /*0x5e1b45*/
  {
    if ( self->vtbl->super.super.IsActor((TESObjectREFR *)self) ) /*0x5e1b51*/
      v2 = v3; /*0x5e1b57*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(UInt32 *))(v2[1].member.refID + 0x30))(&v2[1].member.refID) ) /*0x5e1b62*/
    return 1; /*0x5e1b62*/
  v4 = 0; /*0x5e1b72*/
  v5 = self->vtbl->super.super.GetBaseForm(self); /*0x5e1b76*/
  if ( v5 ) /*0x5e1b7a*/
  {
    if ( self->vtbl->super.super.IsActor((TESObjectREFR *)self) ) /*0x5e1b86*/
      v4 = v5; /*0x5e1b8c*/
  }
  return !(*(unsigned __int8 (__thiscall **)(UInt32 *))(v4[1].member.refID + 0x28))(&v4[1].member.refID); /*0x5e1b9f*/
}
