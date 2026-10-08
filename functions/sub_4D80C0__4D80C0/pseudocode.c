// Register the ExtraLight-backed NiLight in the native full-light list. Retail direct callers use ordinary ExtraLight; registration explicitly calls ShadowSceneLight_SetPerSourceProjectorMode(..., false), clears renderGateOverride_120, and copies falloff/FOV. It does not read TESObjectLIGH::lightFlags_7C, so Construction Set 'Spot Light' (0x200) and 'Spot Shadow' (0x400) labels do not establish an active retail projected-shadow branch here.
void __thiscall TESObjectREFR_RegisterAttachedLightWithShadowScene(TESObjectREFR *self, bool useSpellEffectExtraLight)
{
  TESForm::FormFlags flags; // eax
  ExtraDataList *p_baseExtraList; // ecx
  BSExtraDataVtbl *SpellEffectLight; // eax
  void (__thiscall *Destructor)(BSExtraData *); // eax
  ShadowSceneNode_DecodedLayout *ShadowSceneNode; // eax
  ShadowSceneLight_DecodedLayout *FullLightForSource; // esi
  TESForm *v9; // edi
  void (__thiscall *v10)(BSExtraData *); // [esp-Ch] [ebp-10h]

  flags = self->member.super.flags; /*0x4d80c3*/
  if ( (flags & 0x20) == 0 && (flags & 0x800) == 0 ) /*0x4d80d5*/
  {
    p_baseExtraList = &self->member.baseExtraList; /*0x4d80dc*/
    if ( useSpellEffectExtraLight ) /*0x4d80df*/
      SpellEffectLight = ExtraDataList_GetSpellEffectLight(p_baseExtraList); /*0x4d80e1*/
    else
      SpellEffectLight = ExtraDataList_GetLight(p_baseExtraList); /*0x4d80e8*/
    if ( SpellEffectLight ) /*0x4d80ef*/
    {
      Destructor = SpellEffectLight->Destructor; /*0x4d80f1*/
      if ( Destructor ) /*0x4d80f5*/
      {
        v10 = Destructor; /*0x4d80fa*/
        ShadowSceneNode = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(0); /*0x4d80fd*/
        FullLightForSource = ShadowSceneNode_FindOrCreateFullLightForSource(ShadowSceneNode, v10, 0); /*0x4d810e*/
        v9 = self->vtbl->GetBaseForm(self); /*0x4d811a*/
        if ( v9 ) /*0x4d811e*/
        {
          ShadowSceneLight_SetPerSourceProjectorMode((int)FullLightForSource, 0);// Retail reference-light registration explicitly calls ShadowSceneLight_SetPerSourceProjectorMode(..., false). No TESObjectLIGH flag test precedes this constant. /*0x4d8124*/
          FullLightForSource->renderGateOverride_120 = 0;// Retail reference-light registration clears ShadowSceneLight::renderGateOverride_120; TESObjectLIGH editor bits 0x200/0x400 are not consulted in this decoded path. /*0x4d8129*/
          FullLightForSource->falloffExponent_128 = *(float *)&v9[5].member.flags;// Copy the Oblivion TESObjectLIGH DATA falloff exponent at base-form +0x80 into ShadowSceneLight falloffExponent_128. The game executable proves the copy/default path; the Oblivion Construction Set Light dialog labels the corresponding DATA field 'Falloff Exponent'. /*0x4d8136*/
          FullLightForSource->projectorFovDegrees_124 = *(float *)&v9[5].member.refID; /*0x4d8142*/
        }
      }
    }
  }
}
