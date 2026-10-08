// Branch shader-property ctor. Builds SpeedTreeShaderPPLightingProperty base with STSPData and installs BranchShaderProperty vtable.
OB_SpeedTreeBranchShaderProperty_010201A0 *__thiscall OB_SpeedTreeBranchShaderProperty_ctor_010201A0(
        OB_SpeedTreeBranchShaderProperty_010201A0 *this,
        OB_STSPData_010201A0 *stspData)
{
  OB_SpeedTreeShaderPPLightingProperty_ctor_010201A0((SpeedTreeShaderPPLightingProperty *)this, (int)stspData); /*0x7f2038*/
  *(_DWORD *)this->gap0 = &SpeedTreeBranchShaderProperty::`vftable'; /*0x7f203d*/
  return this; /*0x7f2045*/
}
