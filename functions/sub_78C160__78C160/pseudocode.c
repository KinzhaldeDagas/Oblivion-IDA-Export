// CSpeedTreeRT::DeleteBranchGeometry. After Compute, deletes branch geometry only for non-instance trees when the shared instance refcount is exactly one.
void __thiscall CSpeedTreeRT__DeleteBranchGeometry(OB_CSpeedTreeRT_010201A0 *this)
{
  bool v2; // zf
  OB_CIndexedGeometry_010201A0 *branchGeometry; // edi
  int v4; // [esp+0h] [ebp-5Ch] BYREF
  int *v5; // [esp+4Ch] [ebp-10h]
  int v6; // [esp+58h] [ebp-4h]

  v5 = &v4; /*0x78c188*/
  v2 = this->treeComputedFlag == 0; /*0x78c18f*/
  v6 = 0; /*0x78c192*/
  if ( !v2 ) /*0x78c195*/
  {
    branchGeometry = this->branchGeometry; /*0x78c197*/
    if ( branchGeometry ) /*0x78c19c*/
    {
      if ( !this->instanceData && *this->sharedInstanceRefcount == 1 ) /*0x78c1a9*/
      {
        OB_CIndexedGeometry_dtor_010201A0(this->branchGeometry); /*0x78c1ad*/
        FormHeapFree((unsigned int)branchGeometry); /*0x78c1b3*/
        this->branchGeometry = 0; /*0x78c1bb*/
      }
    }
  }
}
