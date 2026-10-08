// CSpeedTreeRT::GetTrunkLength. Returns branchGeometry+0x1C when treeEngine and branchGeometry exist, otherwise 0.0; Bethesda extension absent from the supplied 4.1 public header.
float __thiscall CSpeedTreeRT__GetTrunkLength(const OB_CSpeedTreeRT_010201A0 *this)
{
  int v1; // eax

  if ( this->treeEngine && (v1 = *(_DWORD *)(this->treeEngine + 0x5C)) != 0 ) /*0x78714b*/
    return *(float *)(v1 + 0x1C); /*0x78714d*/
  else
    return 0.0; /*0x787151*/
}
