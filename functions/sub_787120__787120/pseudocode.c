// CSpeedTreeRT::GetTrunkWidth. Returns branchGeometry+0x18 when treeEngine and branchGeometry exist, otherwise 0.0; Bethesda extension absent from the supplied 4.1 public header.
float __thiscall CSpeedTreeRT__GetTrunkWidth(const OB_CSpeedTreeRT_010201A0 *this)
{
  int v1; // eax

  if ( this->treeEngine && (v1 = *(_DWORD *)(this->treeEngine + 0x5C)) != 0 ) /*0x78712b*/
    return *(float *)(v1 + 0x18); /*0x78712d*/
  else
    return 0.0; /*0x787131*/
}
