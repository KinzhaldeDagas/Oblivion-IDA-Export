// Remove ExtraLight or ExtraSpellEffectLight backing NiLight from the native full-light list. Its sole retail direct caller passes useSpellEffectExtraLight=false; no code/data xref selects this helper's true branch.
void __thiscall TESObjectREFR_UnregisterAttachedLightFromShadowScene(
        TESObjectREFR *self,
        bool useSpellEffectExtraLight)
{
  ExtraDataList *p_baseExtraList; // ecx
  BSExtraDataVtbl *SpellEffectLight; // eax
  void (__thiscall *Destructor)(BSExtraData *); // eax
  ShadowSceneNode_DecodedLayout *ShadowSceneNode; // eax
  void (__thiscall *v6)(BSExtraData *); // [esp-4h] [ebp-4h]

  p_baseExtraList = &self->member.baseExtraList; /*0x4d8150*/
  if ( useSpellEffectExtraLight ) /*0x4d8158*/
    SpellEffectLight = ExtraDataList_GetSpellEffectLight(p_baseExtraList); /*0x4d815a*/
  else
    SpellEffectLight = ExtraDataList_GetLight(p_baseExtraList); /*0x4d8161*/
  if ( SpellEffectLight ) /*0x4d8168*/
  {
    Destructor = SpellEffectLight->Destructor; /*0x4d816a*/
    if ( Destructor ) /*0x4d816e*/
    {
      v6 = Destructor; /*0x4d8170*/
      ShadowSceneNode = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(0); /*0x4d8173*/
      ShadowSceneNode_RemoveFullLightBySource(ShadowSceneNode, v6); /*0x4d817d*/
    }
  }
}
