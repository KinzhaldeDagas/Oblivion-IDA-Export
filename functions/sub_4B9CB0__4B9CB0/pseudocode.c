// Probable member mapping: float +0x78 behaves like Fallout's TESObjectTREE::BillboardSize.x and +0x7C like BillboardSize.y. Oblivion directly applies the same >200/>350 cutoff pair; Fallout named IsLargeEnoughForDistantLOD uses those exact fields/thresholds. +0x7C also sizes the quad in TESObjectTREE_BuildBillboardQuadData. Roles are strongly supported; names remain inferred across versions.
bool __thiscall TESObjectTREE_IsLargeEnoughForDistantLOD(TESObjectTREE_OblivionLayout_080_NiTArrayVerified *this)
{
  return (this->BillboardSizeX_Probable <= 0.0 || this->BillboardSizeX_Probable > fConst_200) /*0x4b9ce8*/
      && (this->BillboardSizeY_Probable <= 0.0 || flt_A44F64 < (double)this->BillboardSizeY_Probable);
}
