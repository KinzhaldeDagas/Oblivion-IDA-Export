// Verified spatial-form predicate: false for null; true for form type 0x35 (TESWorldSpace); for form type 0x30 it RTTI-casts to TESObjectCELL and returns true only for interior cells; false otherwise. Probable domain role: accept only spaces allowed as random teleport destinations.
bool __cdecl TESForm_IsInteriorCellOrWorldSpace(TESForm *space)
{
  int type; // ecx
  bool result; // al
  TESObjectCELL *v3; // eax
  bool v4; // zf

  if ( !space ) /*0x4b7939*/
    return 0; /*0x4b7939*/
  type = space->member.type; /*0x4b793b*/
  if ( type != 0x30 ) /*0x4b7942*/
    return type == 0x35; /*0x4b7947*/
  v3 = (TESObjectCELL *)OblivionDynamicCast( /*0x4b795c*/
                          space,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESObjectCELL `RTTI Type Descriptor',
                          0);
  if ( !v3 ) /*0x4b7966*/
    return 0; /*0x4b7966*/
  v4 = TESObjectCELL_IsInterior(v3) == 0; /*0x4b796f*/
  result = 1; /*0x4b7971*/
  if ( v4 ) /*0x4b7973*/
    return 0; /*0x4b7975*/
  return result; /*0x4b794b*/
}
