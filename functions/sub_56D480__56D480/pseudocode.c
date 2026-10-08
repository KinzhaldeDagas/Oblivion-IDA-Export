// [Verified] Requires nonnull DECAL_DATA at +0x18 and generatedGeometry at +0x1C, then requires the saved target FormID to resolve/cast to TESObjectREFR with loaded 3D. Unlike type 0, there is no success path for an unresolved zero FormID. A literal zero is not rejected by a separate unconditional test; the resolved-reference predicate decides.
bool __thiscall BSTempEffectGeometryDecal_IsSaveable(BSTempEffectGeometryDecalLayout_t *this)
{
  DECAL_DATA *decalCreationData_18; // eax
  TESForm *v3; // eax
  _DWORD *v4; // eax

  decalCreationData_18 = this->decalCreationData_18;// BloodOnDeath decode 2026-05-30: BSTempEffectGeometryDecal saveability is stricter: it requires decal data, created geometry decal payload, and a valid target reference with 3D. /*0x56d483*/
  if ( !decalCreationData_18 || !this->generatedGeometry_1C ) /*0x56d48a*/
    return 0; /*0x56d48e*/
  v3 = TESForm_LookupByFormID(decalCreationData_18->targetReferenceFormID_3C); /*0x56d4a2*/
  v4 = OblivionDynamicCast( /*0x56d4ab*/
         v3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
         0);
  if ( this->decalCreationData_18->targetReferenceFormID_3C ) /*0x56d4b6*/
  {
    if ( !v4 ) /*0x56d4be*/
      return 0; /*0x56d4c3*/
  }
  else if ( !v4 ) /*0x56d4c6*/
  {
    return 0; /*0x56d4c6*/
  }
  return v4[0xF] != 0; /*0x56d4c8*/
}
