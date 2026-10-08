// Verified: getter for the TESObjectTREE maximum leaf/bud angle. BSTreeModel_ApplyBaseObject uses it as the upper bound passed to CSpeedTreeRT_SetMaximumBudAngle; Fallout's named homolog is GetMaximumLeafAngle.
float __thiscall TESObjectTREE_GetMaximumLeafAngle(TESObjectTREE_OblivionLayout_080_NiTArrayVerified *this)
{
  return this->maximumLeafAngle; /*0x4b9ee3*/
}
