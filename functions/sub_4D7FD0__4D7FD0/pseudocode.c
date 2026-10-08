// Return the reference's extra-data type 0x49 AttachedLightPayload_Decoded, if present.
AttachedLightPayload_Decoded *__thiscall TESObjectREFR_GetSpellEffectLightPayload(TESObjectREFR *self)
{
  return (AttachedLightPayload_Decoded *)ExtraDataList_GetSpellEffectLight(&self->member.baseExtraList);
}
