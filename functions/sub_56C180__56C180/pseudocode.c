// [Verified] Requires DECAL_DATA at +0x18. Resolves/casts targetReferenceFormID_3C to TESObjectREFR: a resolved reference must have loaded 3D; an unresolved reference is accepted only when the stored FormID is zero. This zero/unresolved success path is absent from geometry-decal IsSaveable at 0x56D480.
bool __thiscall BSTempEffectDecal_IsSaveable(BSTempEffectDecalLayout_t *this)
{
  DECAL_DATA *decalData_18; // eax
  TESForm *v3; // eax
  _DWORD *v4; // eax

  decalData_18 = this->decalData_18;            // BloodOnDeath decode 2026-05-30: fallback BSTempEffectDecal saveability requires decal data and either a valid target reference/3D or no saved target FormID. /*0x56c183*/
  if ( !decalData_18 ) /*0x56c188*/
    return 0; /*0x56c188*/
  v3 = TESForm_LookupByFormID(decalData_18->targetReferenceFormID_3C); /*0x56c19c*/
  v4 = OblivionDynamicCast( /*0x56c1a5*/
         v3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
         0);
  if ( this->decalData_18->targetReferenceFormID_3C ) /*0x56c1b0*/
  {
    if ( !v4 ) /*0x56c1b8*/
      return 0; /*0x56c1bd*/
  }
  else if ( !v4 ) /*0x56c1c0*/
  {
    return 1; /*0x56c1c0*/
  }
  return v4[0xF] != 0; /*0x56c1c2*/
}
