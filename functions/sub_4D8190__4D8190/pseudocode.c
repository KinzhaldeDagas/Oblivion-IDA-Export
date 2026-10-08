// Remove/release/clear ordinary type 0x30 or spell-effect type 0x49 attached light. The LightEffect teardown path actively calls this with useSpellEffectExtraLight=true.
void __thiscall TESObjectREFR_UnregisterAndClearAttachedLight(TESObjectREFR *self, bool useSpellEffectExtraLight)
{
  ExtraDataList *p_baseExtraList; // ebp
  ExtraDataList *v3; // ecx
  BSExtraDataVtbl *SpellEffectLight; // eax
  BSExtraDataVtbl *v5; // esi
  void (__thiscall *Destructor)(BSExtraData *); // eax
  ShadowSceneNode_DecodedLayout *ShadowSceneNode; // eax
  void (__thiscall *v8)(BSExtraData *); // edi
  void (__thiscall *v9)(BSExtraData *); // [esp-8h] [ebp-14h]

  p_baseExtraList = &self->member.baseExtraList; /*0x4d8198*/
  v3 = &self->member.baseExtraList; /*0x4d819c*/
  if ( useSpellEffectExtraLight ) /*0x4d819e*/
    SpellEffectLight = ExtraDataList_GetSpellEffectLight(v3); /*0x4d81a0*/
  else
    SpellEffectLight = ExtraDataList_GetLight(v3); /*0x4d81a7*/
  v5 = SpellEffectLight; /*0x4d81ac*/
  if ( SpellEffectLight ) /*0x4d81b0*/
  {
    Destructor = SpellEffectLight->Destructor; /*0x4d81b2*/
    if ( v5->Destructor ) /*0x4d81b2*/
    {
      v9 = Destructor; /*0x4d81b9*/
      ShadowSceneNode = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(0); /*0x4d81bc*/
      ShadowSceneNode_RemoveFullLightBySource(ShadowSceneNode, v9); /*0x4d81c6*/
      v8 = v5->Destructor; /*0x4d81cb*/
      if ( v5->Destructor ) /*0x4d81cb*/
      {
        if ( !InterlockedDecrement((volatile LONG *)v8 + 1) ) /*0x4d81d5*/
        {
          if ( v8 ) /*0x4d81e1*/
            (**(void (__thiscall ***)(void (__thiscall *)(BSExtraData *), int))v8)(v8, 1); /*0x4d81eb*/
        }
        v5->Destructor = 0; /*0x4d81ed*/
      }
    }
    if ( useSpellEffectExtraLight ) /*0x4d81f8*/
      ExtraDataList_RemoveSpellEffectLight(p_baseExtraList); /*0x4d81fa*/
    else
      ExtraDataList_RemoveExtraLight(p_baseExtraList); /*0x4d8205*/
  }
}
