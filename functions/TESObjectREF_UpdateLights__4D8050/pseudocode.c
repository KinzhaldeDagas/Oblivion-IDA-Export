// For a TESObjectREFR whose base form is TESObjectLIGH, update both ordinary ExtraLight type 0x30 and spell-effect ExtraLight type 0x49 payloads through the same native source-light state routine. Both calls pass optionalContext=null. Actor-owned transient spell-effect lights may share type 0x49 storage but are not converted into static caster admission.
char __thiscall TESObjectREFR_UpdateAttachedLightPayloads(TESObjectREFR *self)
{
  ExtraDataList *p_baseExtraList; // ebx
  BSExtraDataVtbl *Light; // ebp
  TESForm *v4; // edi
  BSExtraDataVtbl *SpellEffectLight; // eax

  p_baseExtraList = &self->member.baseExtraList; /*0x4d8055*/
  Light = ExtraDataList_GetLight(&self->member.baseExtraList); /*0x4d8060*/
  v4 = 0; /*0x4d806c*/
  if ( self->vtbl->GetBaseForm(self)->member.type == kFormType_Light ) /*0x4d8074*/
    v4 = self->vtbl->GetBaseForm(self); /*0x4d8082*/
  if ( Light ) /*0x4d8086*/
  {
    if ( v4 ) /*0x4d808a*/
      TESObjectLIGH_UpdateAttachedLightPayload( /*0x4d8091*/
        (TESObjectLIGH_DecodedLayout *)v4,
        (AttachedLightPayload_Decoded *)Light,
        0);                                     // Update ordinary ExtraLight type 0x30 with optionalContext=null.
  }
  SpellEffectLight = ExtraDataList_GetSpellEffectLight(p_baseExtraList); /*0x4d8098*/
  if ( SpellEffectLight ) /*0x4d809f*/
  {
    if ( v4 ) /*0x4d80a3*/
      LOBYTE(SpellEffectLight) = TESObjectLIGH_UpdateAttachedLightPayload( /*0x4d80aa*/
                                   (TESObjectLIGH_DecodedLayout *)v4,
                                   (AttachedLightPayload_Decoded *)SpellEffectLight,
                                   0);          // Update spell-effect ExtraLight type 0x49 with optionalContext=null.
  }
  return (char)SpellEffectLight; /*0x4d80af*/
}
