// CSpeedTreeRT::SetBranchLightingMethod. Before Compute, mirrors lighting method to branch geometry manual-lighting state and CLightingEngine branch method.
void __thiscall CSpeedTreeRT__SetBranchLightingMethod(OB_CSpeedTreeRT_010201A0 *this, int method)
{
  bool v2; // zf
  int v3; // [esp+0h] [ebp-5Ch] BYREF
  int *v4; // [esp+4Ch] [ebp-10h]
  int v5; // [esp+58h] [ebp-4h]

  v4 = &v3; /*0x78b348*/
  v2 = this->treeComputedFlag == 0; /*0x78b34b*/
  v5 = 0; /*0x78b34f*/
  if ( v2 ) /*0x78b356*/
  {
    this->branchGeometry->manualLighting = method == 1; /*0x78b364*/
    this->lightingEngine->branchLightingMethod = method; /*0x78b36a*/
  }
  else
  {
    OB_stString28_AssignBytes_010201A0( /*0x78b38c*/
      &OB_g_strError_010201A0,
      "SetBranchLightingMethod() has no effect after Compute() has been called",
      0x47u);
  }
}
