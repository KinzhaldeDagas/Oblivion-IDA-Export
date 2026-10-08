// CSpeedTreeRT::SetBranchDimmingScalar. Writes CTreeEngine+0x8C when the engine exists. Fallout symbols identify the field; Oblivion layout is authoritative.
void __thiscall CSpeedTreeRT__SetBranchDimmingScalar(OB_CSpeedTreeRT_010201A0 *this, float scalar)
{
  if ( this->treeEngine ) /*0x7870e0*/
    this->treeEngine->leafInfo.branchDimmingScalar = scalar; /*0x7870ea*/
}
