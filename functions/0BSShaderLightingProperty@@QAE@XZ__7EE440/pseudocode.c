// [Verified] DECAL_DATA is 0x4C bytes: NiSourceTexture* +0, rotation matrix +8, target reference FormID +0x3C, fade progress +0x40, and NiProperty* +0x48. Fields +4, +0x2C, +0x38 and +0x44 remain Unknown. The property owns a NiTPointerList<DECAL_DATA*> at +0x80; effects add/remove entries and render-pass builders batch from count +0x8C.
BSShaderLightingPropertyLayout_t *__thiscall BSShaderLightingProperty::BSShaderLightingProperty(
        BSShaderLightingPropertyLayout_t *this)
{
  BSShaderProperty::BSShaderProperty(&this->base); /*0x7ee46a*/
  this->base.vtbl = &BSShaderLightingProperty::`vftable'; /*0x7ee474*/
  *(_DWORD *)&this->shadowLightList_6C[0xC] = 0; /*0x7ee47e*/
  *(_DWORD *)&this->shadowLightList_6C[4] = 0; /*0x7ee481*/
  *(_DWORD *)&this->shadowLightList_6C[8] = 0; /*0x7ee484*/
  *(_DWORD *)this->shadowLightList_6C = &NiTPointerList<ShadowSceneLight *>::`vftable'; /*0x7ee487*/
  this->decalDataList_80.numItems = 0; /*0x7ee493*/
  this->decalDataList_80.head = 0; /*0x7ee496*/
  this->decalDataList_80.tail = 0; /*0x7ee499*/
  this->decalDataList_80.vftable = &NiTPointerList<DECAL_DATA *>::`vftable';// [Verified] BSShaderLightingProperty constructor initializes a NiTPointerList<DECAL_DATA*> at +0x80: vtable, head, tail and item count (+0x8C). This count drives decal pass batching. /*0x7ee49c*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)this->shadowLightList_6C); /*0x7ee4a7*/
  *(_DWORD *)&this->shadowLightList_6C[0x10] = 0; /*0x7ee4ae*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)&this->decalDataList_80); /*0x7ee4b1*/
  this->lightDimmer_94 = 1.0;                   // OBLIVION AUTHORITY (2026-08-24): BSShaderLightingProperty constructor initializes per-property light dimmer at +0x94 to 1.0f. DrawRenderPass 0x7A9820 passes this scalar into each light constant update. /*0x7ee4b8*/
  this->decalListRemovalCursor_90 = 0; /*0x7ee4be*/
  this->unk_98 = 0; /*0x7ee4c4*/
  return this; /*0x7ee4cc*/
}
