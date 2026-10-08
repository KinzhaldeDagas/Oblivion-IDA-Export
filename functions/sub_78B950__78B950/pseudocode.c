// CSpeedTreeRT::SetBranchWindMethod. Before Compute, mirrors the wind method to CWindEngine and branch geometry; disables vertex weighting for WIND_NONE and invalidates prior CPU-wind geometry when switching off.
void __thiscall CSpeedTreeRT__SetBranchWindMethod(OB_CSpeedTreeRT_010201A0 *this, int method)
{
  bool v3; // zf
  int v4; // [esp+0h] [ebp-5Ch] BYREF
  int *v5; // [esp+4Ch] [ebp-10h]
  int v6; // [esp+58h] [ebp-4h]

  v5 = &v4; /*0x78b978*/
  v3 = this->treeComputedFlag == 0; /*0x78b97f*/
  v6 = 0; /*0x78b982*/
  if ( v3 ) /*0x78b985*/
  {
    if ( method == 2 && this->windEngine->branchWindMethod == 1 ) /*0x78b996*/
    {
      this->branchGeometry->valid = 0; /*0x78b99b*/
      OB_CIndexedGeometry_ComputeWindEffect_010201A0(this->branchGeometry, 0); /*0x78b9a2*/
    }
    this->windEngine->branchWindMethod = method; /*0x78b9aa*/
    this->branchGeometry->vertexWeighting = method != 2; /*0x78b9b6*/
    this->branchGeometry->windMethod = method; /*0x78b9bc*/
  }
  else
  {
    OB_stString28_AssignBytes_010201A0( /*0x78b9df*/
      &OB_g_strError_010201A0,
      "SetBranchWindMethod() has no effect after Compute() has been called",
      0x43u);
  }
}
