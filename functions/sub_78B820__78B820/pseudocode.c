// CSpeedTreeRT::SetLeafWindMethod. Before Compute, mirrors the wind method to CWindEngine and leaf geometry vertex-weighting state.
void __thiscall CSpeedTreeRT__SetLeafWindMethod(OB_CSpeedTreeRT_010201A0 *this, int method)
{
  bool v2; // zf
  int v3; // [esp+0h] [ebp-5Ch] BYREF
  int *v4; // [esp+4Ch] [ebp-10h]
  int v5; // [esp+58h] [ebp-4h]

  v4 = &v3; /*0x78b848*/
  v2 = this->treeComputedFlag == 0; /*0x78b84b*/
  v5 = 0; /*0x78b84f*/
  if ( v2 ) /*0x78b856*/
  {
    this->windEngine->leafWindMethod = method; /*0x78b85e*/
    this->leafGeometry->vertexWeighting = method != 2; /*0x78b86a*/
  }
  else
  {
    OB_stString28_AssignBytes_010201A0( /*0x78b88d*/
      &OB_g_strError_010201A0,
      "SetLeafWindMethod() has no effect after Compute() has been called",
      0x41u);
  }
}
