// CSpeedTreeRT::SetFrondWindMethod. Before Compute, mirrors the wind method to CWindEngine and frond geometry; disables vertex weighting for WIND_NONE and invalidates prior CPU-wind geometry when switching off.
void __thiscall CSpeedTreeRT__SetFrondWindMethod(OB_CSpeedTreeRT_010201A0 *this, int method)
{
  bool v3; // zf
  int v4; // [esp+0h] [ebp-5Ch] BYREF
  int *v5; // [esp+4Ch] [ebp-10h]
  int v6; // [esp+58h] [ebp-4h]

  v5 = &v4; /*0x78bac8*/
  v3 = this->treeComputedFlag == 0; /*0x78bacf*/
  v6 = 0; /*0x78bad2*/
  if ( v3 ) /*0x78bad5*/
  {
    if ( method == 2 && this->windEngine->frondWindMethod == 1 ) /*0x78bae6*/
    {
      this->frondGeometry->valid = 0; /*0x78baeb*/
      OB_CIndexedGeometry_ComputeWindEffect_010201A0(this->frondGeometry, 0); /*0x78baf2*/
    }
    this->windEngine->frondWindMethod = method; /*0x78bafa*/
    this->frondGeometry->vertexWeighting = method != 2; /*0x78bb06*/
    this->frondGeometry->windMethod = method; /*0x78bb0c*/
  }
  else
  {
    OB_stString28_AssignBytes_010201A0( /*0x78bb2f*/
      &OB_g_strError_010201A0,
      "SetFrondWindMethod() has no effect after Compute() has been called",
      0x42u);
  }
}
