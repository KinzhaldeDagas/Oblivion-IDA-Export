// CSpeedTreeRT::SetLeafLightingMethod. Before Compute, mirrors lighting method to CLightingEngine leaf method and leaf geometry manual-lighting state.
void __thiscall CSpeedTreeRT__SetLeafLightingMethod(OB_CSpeedTreeRT_010201A0 *this, int method)
{
  int v2; // edi
  bool v3; // zf
  rsize_t v4; // [esp-4h] [ebp-60h] BYREF
  char *v5; // [esp+4Ch] [ebp-10h]
  int v6; // [esp+58h] [ebp-4h]

  v5 = (char *)&v4 + 4; /*0x78b468*/
  v3 = this->treeComputedFlag == 0; /*0x78b46b*/
  v6 = 0; /*0x78b46f*/
  if ( v3 ) /*0x78b476*/
  {
    this->lightingEngine->leafLightingMethod = method; /*0x78b47e*/
    this->leafGeometry->manualLighting = method == 1; /*0x78b48a*/
  }
  else
  {
    LODWORD(v4) = 0x45; /*0x78b4a0*/
    OB_stString28_AssignBytes_010201A0( /*0x78b4ac*/
      &OB_g_strError_010201A0,
      v2,
      "SetLeafLightingMethod() has no effect after Compute() has been called",
      v4);
  }
}
