// Verified Oblivion allowlist includes TESSubSpace for the +0x64 persistent-reference index. Comparison: Fallout's persistent-reference classification is TESWorldSpace::IsFixedRef with a different explicit set; Fallout IDB has no TESSubSpace-named class/string, so it does not establish an analogue for Oblivion's +0x60 SubSpace spatial index.
bool __cdecl TESWorldSpace_UsesCoordinateReferenceIndex(TESObjectREFR *reference)
{
  bool v1; // bl

  v1 = 0; /*0x4f00c5*/
  if ( reference ) /*0x4f00c9*/
  {
    switch ( reference->vtbl->GetBaseForm(reference)->member.type ) /*0x4f00e8*/
    {
      case kFormType_Sound: /*0x4f00e8*/
      case kFormType_Activator: /*0x4f00e8*/
      case kFormType_Container: /*0x4f00e8*/
      case kFormType_Door: /*0x4f00e8*/
      case kFormType_Stat: /*0x4f00e8*/
      case kFormType_Tree: /*0x4f00e8*/
      case kFormType_Flora: /*0x4f00e8*/
      case kFormType_Furniture: /*0x4f00e8*/
      case kFormType_LeveledCreature: /*0x4f00e8*/
      case kFormType_SubSpace: /*0x4f00e8*/
        v1 = 1; /*0x4f00ef*/
        break; /*0x4f00ef*/
      default:
        return v1;
    }
  }
  return v1; /*0x4f00f3*/
}
