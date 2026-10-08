// Branch shader-property virtual clone/copy helper. Allocates 0xF4, copies STSPData via virtual +0xA0, installs BranchShaderProperty vtable, and forwards base property state.
OB_SpeedTreeBranchShaderProperty_010201A0 *__thiscall OB_SpeedTreeBranchShaderProperty_CloneTo_010201A0(
        OB_SpeedTreeBranchShaderProperty_010201A0 *this,
        int copyFlags)
{
  SpeedTreeShaderPPLightingProperty *v3; // esi
  int v4; // eax

  v3 = (SpeedTreeShaderPPLightingProperty *)FormHeapAlloc(0xF4u); /*0x7f21af*/
  if ( v3 ) /*0x7f21c2*/
  {
    v4 = (*(int (__thiscall **)(OB_SpeedTreeBranchShaderProperty_010201A0 *))(*(_DWORD *)this->gap0 + 0xA0))(this); /*0x7f21ce*/
    OB_SpeedTreeShaderPPLightingProperty_ctor_010201A0(v3, v4); /*0x7f21d3*/
    *(_DWORD *)v3 = &SpeedTreeBranchShaderProperty::`vftable'; /*0x7f21d8*/
  }
  else
  {
    v3 = 0; /*0x7f21e0*/
  }
  BSShaderPPLightingProperty_CopyCloneMembers((BSShaderPPLightingProperty *)this, v3, (void *)copyFlags); /*0x7f21f2*/
  return (OB_SpeedTreeBranchShaderProperty_010201A0 *)v3; /*0x7f21f9*/
}
