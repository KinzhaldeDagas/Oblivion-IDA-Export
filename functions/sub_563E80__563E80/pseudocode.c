// Verified visibility gate: requires both bEnableTrees:SpeedTree.value and BSTreeManager.treesVisible at +0x20 before forwarding to NiNode::OnVisible.
void __thiscall BSTreeNode_OnVisible(BSTreeNode_OblivionLayout_0F0 *this, NiCullingProcess *process)
{
  if ( bEnableTrees_SpeedTree.value ) /*0x563e80*/
  {
    if ( BSTreeManager_GetInstance(1)->treesVisible ) /*0x563e96*/
      NiNode::OnVisible(&this->base, process); /*0x563ea3*/
  }
}
