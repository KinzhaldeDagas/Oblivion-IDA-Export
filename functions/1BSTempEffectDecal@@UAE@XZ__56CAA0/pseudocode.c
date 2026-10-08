// [Verified] BSTempEffectDecal destructor unregisters its DECAL_DATA payload from the target BSShaderLightingProperty list via BSShaderLightingProperty_RemoveDecalData before releasing the target NiProperty at payload+0x48. It then releases the texture/property members and frees the 0x4C DECAL_DATA payload.
void __thiscall BSTempEffectDecal::~BSTempEffectDecal(BSTempEffectDecalLayout_t *this)
{
  DECAL_DATA *decalData_18; // eax
  BSShaderLightingPropertyLayout_t *targetShaderProperty_48; // ecx
  DECAL_DATA *v4; // esi
  NiProperty *v5; // ebx
  NiProperty **p_targetShaderProperty_48; // esi
  DECAL_DATA *v7; // esi

  this->base.vtable = &BSTempEffectDecal::`vftable'; /*0x56caca*/
  decalData_18 = this->decalData_18; /*0x56cad0*/
  targetShaderProperty_48 = (BSShaderLightingPropertyLayout_t *)decalData_18->targetShaderProperty_48; /*0x56cad3*/
  if ( targetShaderProperty_48 ) /*0x56cae0*/
    BSShaderLightingProperty_RemoveDecalData(targetShaderProperty_48, decalData_18); /*0x56cae3*/
  v4 = this->decalData_18; /*0x56cae8*/
  v5 = v4->targetShaderProperty_48; /*0x56caeb*/
  p_targetShaderProperty_48 = &v4->targetShaderProperty_48; /*0x56caee*/
  if ( v5 ) /*0x56caf3*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v5->members) ) /*0x56caf9*/
      (*(void (__thiscall **)(NiProperty *, int))v5->vtbl)(v5, 1); /*0x56cb0f*/
    *p_targetShaderProperty_48 = 0; /*0x56cb11*/
  }
  v7 = this->decalData_18; /*0x56cb17*/
  if ( v7 ) /*0x56cb1c*/
  {
    DECAL_DATA_ReleaseOwnedReferences(this->decalData_18); /*0x56cb20*/
    FormHeapFree((unsigned int)v7); /*0x56cb26*/
  }
  BSTempEffect_Destructor(&this->base); /*0x56cb38*/
}
