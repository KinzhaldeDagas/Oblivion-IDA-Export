// CSpeedTreeRT::SetNumLeafRockingGroups. Before Compute, stores at CTreeEngine+0xBC and coerces zero to one; after Compute reports the stock no-effect error.
void __thiscall CSpeedTreeRT__SetNumLeafRockingGroups(OB_CSpeedTreeRT_010201A0 *this, unsigned int groupCount)
{
  bool v2; // zf
  unsigned int v3; // eax
  int v4; // [esp+0h] [ebp-5Ch] BYREF
  int *v5; // [esp+4Ch] [ebp-10h]
  int v6; // [esp+58h] [ebp-4h]

  v5 = &v4; /*0x78b728*/
  v2 = this->treeComputedFlag == 0; /*0x78b72b*/
  v6 = 0; /*0x78b72f*/
  if ( v2 ) /*0x78b736*/
  {
    v3 = groupCount; /*0x78b738*/
    if ( !groupCount ) /*0x78b73d*/
      v3 = 1; /*0x78b73f*/
    this->treeEngine->leafInfo.rockingGroupCount = v3; /*0x78b746*/
  }
  else
  {
    OB_stString28_AssignBytes_010201A0( /*0x78b76c*/
      &OB_g_strError_010201A0,
      "SetNumLeafRockingGroups() has no effect after Compute() has been called",
      0x47u);
  }
}
