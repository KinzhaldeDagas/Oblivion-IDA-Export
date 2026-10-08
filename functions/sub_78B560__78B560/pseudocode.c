// CSpeedTreeRT::SetFrondLightingMethod. Before Compute, mirrors lighting method to frond geometry manual-lighting state and CLightingEngine frond method.
void __thiscall CSpeedTreeRT__SetFrondLightingMethod(OB_CSpeedTreeRT_010201A0 *this, int method)
{
  bool v2; // zf
  int v3; // [esp+0h] [ebp-5Ch] BYREF
  int *v4; // [esp+4Ch] [ebp-10h]
  int v5; // [esp+58h] [ebp-4h]

  v4 = &v3; /*0x78b588*/
  v2 = this->treeComputedFlag == 0; /*0x78b58b*/
  v5 = 0; /*0x78b58f*/
  if ( v2 ) /*0x78b596*/
  {
    this->frondGeometry->manualLighting = method == 1; /*0x78b5a4*/
    this->lightingEngine->frondLightingMethod = method; /*0x78b5aa*/
  }
  else
  {
    OB_stString28_AssignBytes_010201A0( /*0x78b5cd*/
      &OB_g_strError_010201A0,
      "SetFrondLightingMethod() has no effect after Compute() has been called",
      0x46u);
  }
}
