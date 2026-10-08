// Verified: getter for the TESObjectTREE minimum leaf/bud angle. BSTreeModel_ApplyBaseObject uses it as the lower bound passed to CSpeedTreeRT_SetMinimumBudAngle; Fallout's named homolog is GetMinimumLeafAngle.
float __thiscall TESObjectTREE_GetMinimumLeafAngle(TESObjectTREE_OblivionLayout_080_NiTArrayVerified *this)
{
  return this->minimumLeafAngle; /*0x4b9ec3*/
}
