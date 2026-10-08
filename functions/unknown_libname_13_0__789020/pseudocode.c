// Oblivion CSpeedTreeRT branch cleanup wrapper: when branchGeometry exists, clears its primary wind-weight and primary wind-matrix-index vectors via the CIndexedGeometry helper.
void __thiscall CSpeedTreeRT__ClearBranchPrimaryWindData(OB_CSpeedTreeRT_010201A0 *this)
{
  OB_CIndexedGeometry_010201A0 *branchGeometry; // ecx

  branchGeometry = this->branchGeometry; /*0x789020*/
  if ( branchGeometry ) /*0x789025*/
    OB_CIndexedGeometry_ClearPrimaryWindData_010201A0(branchGeometry); /*0x789027*/
}
