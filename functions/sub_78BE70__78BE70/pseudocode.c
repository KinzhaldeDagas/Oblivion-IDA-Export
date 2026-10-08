// CSpeedTreeRT::SetLocalMatrices. Before Compute, forwards a validated matrix start/span to CWindEngine; after Compute reports stock no-effect error.
void __thiscall CSpeedTreeRT__SetLocalMatrices(
        OB_CSpeedTreeRT_010201A0 *this,
        unsigned int startingMatrix,
        unsigned int matrixSpan)
{
  bool v3; // zf
  int v4; // [esp+0h] [ebp-5Ch] BYREF
  int *v5; // [esp+4Ch] [ebp-10h]
  int v6; // [esp+58h] [ebp-4h]

  v5 = &v4; /*0x78be98*/
  v3 = this->treeComputedFlag == 0; /*0x78be9b*/
  v6 = 0; /*0x78be9f*/
  if ( v3 ) /*0x78bea6*/
  {
    if ( startingMatrix + matrixSpan - 1 >= CWindEngine__s_windMatrixContainer.matrixCount ) /*0x78bebb*/
      OB_stString28_AssignBytes_010201A0( /*0x78bee7*/
        &OB_g_strError_010201A0,
        "SetLocalMatrices() parameters exceed available wind matrices",
        0x3Cu);
    else
      OB_CWindEngine_SetLocalMatrices_010201A0(this->windEngine, startingMatrix, matrixSpan); /*0x78bec2*/
  }
  else
  {
    OB_stString28_AssignBytes_010201A0( /*0x78bf07*/
      &OB_g_strError_010201A0,
      "SetLocalMatrices() has no effect after Compute() has been called",
      0x40u);
  }
}
