// BSTreeNode branch child getter: returns branch LOD node pointer from +0x38 array.
int __thiscall sub_563C80(_DWORD *this, unsigned __int16 a2)
{
  const void *v3; // ecx

  v3 = (const void *)*(this + 0x37); /*0x563c83*/
  if ( v3 && *(this + 0x38) && a2 < BSTreeModel_GetNumBranchLODLevels(v3) ) /*0x563ca3*/
    return *(_DWORD *)(*(this + 0x38) + 4 * a2); /*0x563cae*/
  else
    return 0; /*0x563cb5*/
}
